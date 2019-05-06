#include "HistSvc.h"
#include <stdexcept> 
#include <TROOT.h>
#include <TH1F.h>
#include <TH2F.h>

#include <utility>
using std::pair;
#include <sstream>
#include <iostream>
#include <string>

HistSvc::HistSvc(string prefix) :
  m_cutflow(true)
{
  TH1::AddDirectory(false);
  gROOT->SetBatch(true);

  SetPrefix(prefix);

  // Which scales better for large numbers of hists?
  //m_hists = new map<string, TH1*>;
  //  m_hists = new map<string, map < string,   map<int,TH1*>>>;
  m_trees = new unordered_map<string, TTree*>;
  m_sysname="";
  m_sysnamesuf="";
  m_nweightsyst=0;
}

HistSvc::~HistSvc() {
  //  if (m_hists) {delete m_hists; m_hists = 0;}
}

void HistSvc::SetPrefix(string prefix) {
   m_prefix = prefix;
}
void HistSvc::SetDir(string dir) {
   m_dir = dir;
   if(dir !="") m_dir += "/";
}



void HistSvc::SetSysName(string sysname) {
  bool nodir=false;
  m_sysname=sysname;
  if(sysname != "") {    
    m_sysname   = (nodir)? "" : "Systematics/";
    m_sysnamesuf= "_"+sysname;
  } else {
    m_sysname ="";
    m_sysnamesuf= "";
  }
}

void HistSvc::Reset() {
  // Clear all hists from store, freeing up memory, and initialise new store.  
  // Call between loops to improve lookup time.
  for ( auto &map_entry : m_hists) {
    if (map_entry.second) delete map_entry.second;    
  }
    
  m_hists.clear();


// 
//   for ( auto dirmap_entry : m_hists) {
// 
//     string fdir =  m_dir+m_sysname+m_prefix+dirmap_entry.first;
//     unordered_map<string, unordered_map<int, TH1*>>& histmap=dirmap_entry.second;
//     
//     for ( auto histmap_entry : histmap) {
//       TH1* hist=histmap_entry.second;
//       if(hist) delete hist;
//     }
//     histmap.clear();
//   }
//   m_hists.clear();

  if (m_trees) {    
    treestore_t::const_iterator treeItr(m_trees->begin());
    treestore_t::const_iterator treeEnd(m_trees->end());
    
    for ( ; treeItr != treeEnd; ++treeItr) {
      if (treeItr->second) delete treeItr->second;    
    }
    
    m_trees->clear();
    delete m_trees; 
    m_trees = 0;
  }

  m_trees = new unordered_map<string, TTree*>;

}


TH1* HistSvc::FindHistInMap(const string& name){
  TH1* hist;
  //  string hname = histName(name);
  try {
    hist=m_hists.at(name);
  } catch (const std::out_of_range& oor) {
    return 0;
  }

//   string dir   = dirName(name);    
//   string hname = histName(name);
// 
//   try {
//     unordered_map<string, unordered_map<int, TH1*>>& histmap = m_hists.at(dir);
//     try {
// 	hist = histmap.at(flav);
//     } catch (const std::out_of_range& oor) {
//       return 0;      
//     }
//   } catch (const std::out_of_range& oor) {
//     return 0;
//   }


//   if(histmap !=std::out_of_range) {
//     unordered_map<int, TH1*>& flavmap= histmap.at(fullname);
//     if(flavmap !=std::out_of_range) {
//       TH1*  hist= map2.at(m_flav);
//       if(hist   !=std::out_of_range) {       
// 	return hist;
//       }
//     }
//   }
  //we didn't find histogram
  return hist;
}

TH1* HistSvc::BookHist(const string& name, int nbinsx, float xlow, float xup) {

  string fullname = m_dir+m_sysname+m_prefix+name+m_sysnamesuf;
  
  //  std::cout << "dir:" << m_dir << ": sysname:" << m_sysname << ": prefix:" << m_prefix << ": name:" << name << ": sysnamesuf:" << m_sysnamesuf << std::endl; 

  TH1* hist=FindHistInMap(fullname);
  if(hist == 0) {
    string hname = histName(fullname);    
    string dir   = dirName(fullname);    
    hist = new TH1F(hname.c_str(), hname.c_str(), nbinsx, xlow, xup);
    hist->Sumw2();
    //    m_hists[dir][hname]=hist;
    m_hists[fullname]=hist;

    FillMeta(fullname, "h1", "yes", "default");

  }
  return hist;
}


void HistSvc::BookFillHist(const string& name, int nbinsx, float xlow, float xup, float value, float weight) {
  //Option to fill a set of systematic histograms that differ only in weights 
  int nloop=std::max((int)m_weightsyst.size(),1);
  for(int i=0; i<nloop; i++){
    if(m_nweightsyst>0) {
      weight=m_weightsyst[i];
      SetSysName(m_weightsystname[i]);
      //      std::cout <<"histSvc  weight "<< weight <<std::endl;
    }
    BookHist(name, nbinsx, xlow, xup)->Fill(value, weight);
  }
}

TH1* HistSvc::BookHist(const string& name, int nbinsx, float* xbins) {

  //  std::cout <<"HistSvc::BookHist " << name <<std::endl;
  
  string fullname = m_dir+m_sysname+m_prefix+name+m_sysnamesuf;
  TH1* hist=FindHistInMap(fullname);
  //  std::cout <<"HistSvc::BookHist hist" << hist <<std::endl;
  
  if(hist == 0) {    
    string hname = histName(fullname);    
    string dir   = dirName(fullname);    
    hist = new TH1F(hname.c_str(), hname.c_str(), nbinsx, xbins);
    //  std::cout <<"HistSvc::BookHist making new hist" << hist <<std::endl;
    m_hists[fullname]=hist;

    FillMeta(fullname, "h1", "yes", "default");

  }
  return hist;
}

void HistSvc::BookFillHist(const string& name, int nbinsx, float* xbins, float value, float weight) {
  int nloop=std::max(m_nweightsyst,1);
  for(int i=0; i<nloop; i++){
    if(m_nweightsyst>0) {
      weight=m_weightsyst[i];
      SetSysName(m_weightsystname[i]);
      //      std::cout <<"histSvc  weight "<< weight <<std::endl;
    }
    BookHist(name, nbinsx, xbins)->Fill(value, weight);
  }
}
  
TH1* HistSvc::BookHist(const string& name, int nbinsx, float xlow, float xup, int nbinsy, float ylow, float yup) {
  
  string fullname = m_dir+m_sysname+m_prefix+name+m_sysnamesuf;

  TH1* hist=FindHistInMap(fullname);
  if(hist == 0) {    
    string hname = histName(fullname);
    string dir   = dirName(fullname);     
    hist = new TH2F(hname.c_str(), hname.c_str(), nbinsx, xlow, xup, nbinsy, ylow, yup);
    hist->Sumw2();
    m_hists[fullname]=hist;

    FillMeta(fullname, "h2", "no", "colz");

  }

  return hist;
}

void HistSvc::BookFillHist(const string& name, int nbinsx, float xlow, float xup, int nbinsy, float ylow, float yup, float xvalue, float yvalue, float weight) {
  int nloop=std::max(m_nweightsyst,1);
  for(int i=0; i<nloop; i++){
    if(m_nweightsyst>0) {
      weight=m_weightsyst[i];
      SetSysName(m_weightsystname[i]);
    }
    static_cast<TH2F*>(BookHist(name, nbinsx, xlow, xup, nbinsy, ylow, yup))->Fill(xvalue, yvalue, weight);
  }
}
 
TH1* HistSvc::BookHist(const string& name, int nbinsx, float* xbins, int nbinsy, float* ybins) {
  string fullname = m_dir+m_sysname+m_prefix+name+m_sysnamesuf;
  TH1* hist=FindHistInMap(fullname);
  if(hist == 0) {    
    string hname = histName(fullname);
    string dir   = dirName(fullname);    
    hist = new TH2F(hname.c_str(), hname.c_str(), nbinsx, xbins, nbinsy, ybins);
    hist->Sumw2();
    m_hists[fullname]=hist;

    FillMeta(fullname, "h2", "no", "colz");

  }

  return hist;
}

void HistSvc::BookFillHist(const string& name, int nbinsx, float* xbins, int nbinsy, float* ybins, float xvalue, float yvalue, float weight) {
  int nloop=std::max(m_nweightsyst,1);
  for(int i=0; i<nloop; i++){
    if(m_nweightsyst>0) {
      weight=m_weightsyst[i];
      SetSysName(m_weightsystname[i]);
    }
    static_cast<TH2F*>(BookHist(name, nbinsx, xbins, nbinsy, ybins))->Fill(xvalue, yvalue, weight);
  }

}


TTree* HistSvc::BookTree(const string& name, const string& branchName, void* address, const std::string& leaves) {
  TTree* tree;
  string fullname = m_dir+m_sysname+m_prefix + name;
  string tname = histName(name);
  treestore_t::const_iterator treeItr = m_trees->find(fullname);
  if (treeItr == m_trees->end()) {
    tree = new TTree(tname.c_str(), tname.c_str());
    tree->SetDirectory(0); 
    tree->Branch(branchName.c_str(), address, leaves.c_str());
    (*m_trees)[fullname] = tree;
  } else {
    tree = (*m_trees)[fullname];
  }
  
  return tree;
}

void HistSvc::BookFillTree(const string& name, const string& branchName, void* address, const std::string& leaves) {
  BookTree(name, branchName, address, leaves)->Fill();
}

TTree* HistSvc::BookTree(const string& name, const string& branchName, double* address) {
  TTree* tree;
  string fullname = m_dir+m_sysname+m_prefix + name;
  string tname = histName(name);
  treestore_t::const_iterator treeItr = m_trees->find(fullname);
  if (treeItr == m_trees->end()) {
    tree = new TTree(tname.c_str(), tname.c_str());
    tree->SetDirectory(0); 

    char* names = const_cast<char*>(branchName.c_str());
    char* pch = strtok (names,":");
    int i(0);
    
    while (pch) {
      tree->Branch(pch, address+i++);
      pch = strtok(0, ":");      
    }

    (*m_trees)[fullname] = tree;
  } else {
    tree = (*m_trees)[fullname];
  }
  
  return tree;
}

void HistSvc::BookFillTree(const string& name, const string& branchName, double* address) {
  BookTree(name, branchName, address)->Fill();
}

TH1* HistSvc::BookCutHist(const string& name, int nbinsx, string cuts[]) {
 
  // Cut flow hists are now TH1D to be compatible with CxAODReader

  string fullname = m_dir+m_sysname+m_prefix + name;
  
  TH1* hist=FindHistInMap(fullname);
  
  if(hist==0) {
    string hname = histName(fullname);
    string dir   = dirName(fullname);
    hist = new TH1D(hname.c_str(), hname.c_str(), nbinsx, -0.5, nbinsx-0.5);
    hist->Sumw2();
    m_hists[fullname]=hist;

    FillMeta(fullname, "h1", "yes", "default");

    for(int i=0; i<nbinsx; i++) {
      hist->GetXaxis()->SetBinLabel(i+1,cuts[i].c_str());
    }
  }
  
   return hist;
}

TH1* HistSvc::BookCutHist(const string& name, int nbinsx, string cutsx[], int nbinsy, string cutsy[]) {

  string fullname = name;

  TH1* hist=FindHistInMap(fullname);

  if(hist==0) {
    string hname = histName(name);
    string dir   = dirName(fullname);
    hist = new TH2F(hname.c_str(), hname.c_str(), nbinsx, -0.5, nbinsx-0.5, nbinsy, -0.5, nbinsy-0.5);
    hist->Sumw2();
    m_hists[fullname]=hist;

    FillMeta(fullname, "h1", "yes", "default");

    for(int i=0; i<nbinsx; i++) {
      hist->GetXaxis()->SetBinLabel(i+1,cutsx[i].c_str());
    }
    for(int j=0; j<nbinsy; j++) {
      hist->GetYaxis()->SetBinLabel(j+1,cutsy[j].c_str());
    }
  }

  return hist;
}

void HistSvc::BookFillCutHist(const string& name, int nbinsx, string cuts[], string label, float weight) {
  if (!m_cutflow) return;

  TH1* hist = BookCutHist(name, nbinsx, cuts);
  int ibin = hist->GetXaxis()->FindBin(label.c_str());
  hist->Fill(ibin-1, weight);
}

void HistSvc::BookFillCutHist(const string& name, int nbinsx, string cutsx[], int nbinsy, string cutsy[], 
			      const string& labelx, const string& labely, float weight) {

  TH1* hist = BookCutHist(name, nbinsx, cutsx, nbinsy, cutsy);
  if (!hist) return;
  int ibinx = hist->GetXaxis()->FindBin(labelx.c_str());
  int ibiny = hist->GetYaxis()->FindBin(labely.c_str());
  static_cast<TH2F*>(hist)->Fill(ibinx-1, ibiny-1, weight);
}

TH1* HistSvc::BookRunHist(const string& name, int nbinsx, int runs[]) {
 
  // Cut flow hists are now TH1D to be compatible with CxAODReader

  string fullname = m_dir+m_sysname+m_prefix + name;
  
  TH1* hist=FindHistInMap(fullname);
  
  if(hist==0) {
    string hname = histName(fullname);
    string dir   = dirName(fullname);
    hist = new TH1D(hname.c_str(), hname.c_str(), nbinsx, -0.5, nbinsx-0.5);
    hist->Sumw2();
    m_hists[fullname]=hist;

    FillMeta(fullname, "h1", "yes", "default");

    for(int i=0; i<nbinsx; i++) {
      hist->GetXaxis()->SetBinLabel(i+1,std::to_string(runs[i]).c_str());
    }
  }
  
   return hist;
}


void HistSvc::BookFillRunHist(const string& name, int nbinsx, int runs[], int run, float weight) {
  if (!m_cutflow) return;

  TH1* hist = BookRunHist(name, nbinsx, runs);
  int ibin = hist->GetXaxis()->FindBin(std::to_string(run).c_str());
  hist->Fill(ibin-1, weight);
}

void HistSvc::Write(TFile* file) {

  for ( auto & map_entry : m_hists) {

    string name =  map_entry.first;
    TH1* hist=map_entry.second;
	
    //Make a new histogram as the sum of all components
    string histname = hist->GetName();
    string dir  =dirName(name);
    
    if (!dir.empty() && !file->GetDirectory(dir.c_str())) {
      file->mkdir(dir.c_str());
    }
    file->cd(dir.c_str());
    std::cout <<" writing histogram " << hist->GetName() << " in dir " << dir <<std::endl;
    hist->Write();
    
  }

  treestore_t::const_iterator treeItr(m_trees->begin());
  treestore_t::const_iterator treeEnd(m_trees->end());

  for ( ; treeItr != treeEnd; ++treeItr) {
    TDirectory* subdir(file);
    string dir = dirName(treeItr->first);   

    // Check dir isn't empty and doesn't already exist
    if (!dir.empty() && !file->GetDirectory(dir.c_str())) {
      std::cout << "-> Making dir " << dir << " " << file->GetDirectory(dir.c_str()) << " " << subdir << std::endl;

      // Recursively make subdirs
      vector<string> subdirs = split(dir, '/');
      vector<string>::const_iterator dirItr(subdirs.begin()), dirEnd(subdirs.end());

      for ( ; dirItr != dirEnd; ++ dirItr) { 
	// Check dir isn't empty and doesn't already exist
	if (!dirItr->empty() && !subdir->GetDirectory(dirItr->c_str())) {
	  std::cout << "   -> Making subdir " << *dirItr << " in " << subdir->GetName() << " " << !subdir->GetDirectory(dirItr->c_str()) << std::endl;
	  subdir = subdir->mkdir(dirItr->c_str());         // Set subdir to be created dir
	} else {
	  subdir = subdir->GetDirectory(dirItr->c_str());  // Set subdir to be existing dir
	}
      } 
    }
    
    file->cd(dir.c_str());

    treeItr->second->Write();
  }


  // Reset store after written to file
  Reset();
}

string HistSvc::histName(const string name) {
  std::string::size_type idelim = name.find_last_of("/");
  if (idelim == std::string::npos) return name;
  return name.substr(idelim+1);
}

string HistSvc::dirName(const string name) {
  std::string::size_type idelim = name.find_last_of("/");
  if (idelim == std::string::npos) return string("");
  return name.substr(0, idelim);
}


string HistSvc::addSlash(const string& path) {
  //  Make sure path ends with a slash
  if (!path.empty() && path.rfind("/") != (path.size()-1)) {
    return path + "/";
  } else {
    return path;
  }
}

void HistSvc::split(const string& s, char delim, vector<string>& elems) {
    std::stringstream ss(s);
    string item;
    while(std::getline(ss, item, delim)) {
        elems.push_back(item);
    }
    return;
}


vector<string> HistSvc::split(const std::string &s, char delim) {
    vector<string> elems;
    split(s, delim, elems);
    return elems;
}


void HistSvc::SetWeightSystsNames(vector<string>& weightsystname){
  //Setup names and weights
  m_weightsystname=weightsystname;
}
void HistSvc::SetWeightSysts(vector<float>& weightsyst){
  //function 
  m_weightsyst= weightsyst;
  m_nweightsyst=m_weightsyst.size();
}

void HistSvc::WritePNG(string outDir){
  std::cout << "size of m_hists " << m_hists.size() << "\n";

  for ( auto & map_entry : m_hists) {
    TCanvas *c = new TCanvas;
    string name =  map_entry.first;
    TH1* hist = map_entry.second;

    string histname = hist->GetName();
    string dir  =dirName(name);
    if (dir.size() == 0) dir.append("nodir");
    string histnamepng = outDir + dir + "__" + histname + ".png";
    hist->Draw();

    TImage *img = TImage::Create();

    img->FromPad(c);
    img->WriteImage(histnamepng.c_str());
  }
}

void HistSvc::FillMeta(const string& name, string obj, string overlap, string drawoption, Flag flag){
  metadata_t meta;
  meta.obj = obj;
  meta.overlap = overlap;
  meta.drawoption = drawoption;
  meta.flag = flag;
  meta.nEvents = -1;
  meta.comments = "";
  string fullname = m_dir+m_sysname+m_prefix+name+m_sysnamesuf;
  m_meta[fullname] = meta;
}

void HistSvc::FillComments(const string& name, const string& comments){
  string fullname = m_dir+m_sysname+m_prefix+name+m_sysnamesuf;

  unordered_map<string, TH1*>::iterator ithist = m_hists.find(fullname); 
  unordered_map<string, metadata_t>::iterator itmeta = m_meta.find(fullname); 
  if (ithist != m_hists.end() && itmeta != m_meta.end()){
    int nEvents = ithist->second->GetEntries();
    (itmeta->second).nEvents = nEvents;
    (itmeta->second).comments = comments;
  }
  else if (ithist == m_hists.end() && itmeta == m_meta.end()) {
    metadata_t meta;
    meta.obj = "N/A";
    meta.overlap = "N/A";
    meta.drawoption = "N/A";
    meta.flag = Undefined;
    meta.nEvents = 0;
    meta.comments = comments + " !!Histograms has not been booked. Probably 0 events of this type after selection!! ";
    m_meta[fullname] = meta;
  }
  else if (ithist == m_hists.end() && itmeta != m_meta.end()) {
    WARNING(" No histogram but there is metadata for ", fullname);
  }
  else if (ithist != m_hists.end() && itmeta == m_meta.end()) {
    WARNING(" No metadata but there is histogram for ", fullname);
  }
}

void HistSvc::FillAlgorithms(const string& name, alg_t alg){
  string fullname = m_dir+m_sysname+m_prefix+name+m_sysnamesuf;
  unordered_map<string, metadata_t>::iterator itmeta = m_meta.find(fullname); 
  if (itmeta != m_meta.end()){
    (itmeta->second).algs.push_back(alg);
  }
}

void HistSvc::WriteXML(string xmlFile, string analysisName){
  // current date/time based on current system
  time_t now = time(0);
  
  // convert now to tm struct for UTC
  tm *gmtm = gmtime(&now);
  
  char strday[20];
  char strtime[20];
  sprintf(strday,"%04d%02d%02d",gmtm->tm_year+1900,gmtm->tm_mon+1,gmtm->tm_mday);
  sprintf(strtime,"%02d:%02d:%02d",gmtm->tm_hour,gmtm->tm_min,gmtm->tm_sec);
  
  // First create engine
  TXMLEngine* xml = new TXMLEngine;
  // Create main node of document tree
  XMLNodePointer_t dqid = xml->NewChild(0, 0, "DQID");

  xml->NewAttr(dqid, 0, "id", analysisName.c_str());
  XMLNodePointer_t metaNode = xml->NewChild(dqid, 0, "META");   // node with metadata
  xml->NewChild(metaNode, 0, "SIMDATA", "SIMULATION");
  xml->NewChild(metaNode, 0, "STARTDAY", strday);
  xml->NewChild(metaNode, 0, "STARTTIME", strtime);

  unordered_map<string, XMLNodePointer_t> xmlSubsystemPointers;
  unordered_map<string, Flag> SubsystemFlags;

  for ( auto & map_entry : m_meta) {
    string name =  map_entry.first;
    metadata_t meta = map_entry.second;

    if (meta.nEvents == -1){
      unordered_map<string, TH1*>::iterator ithist = m_hists.find(name); 

      if (ithist != m_hists.end()){
	int nEvents = ithist->second->GetEntries();
	meta.nEvents = nEvents;
	(map_entry.second).nEvents = nEvents;
      }
      else {
	(meta.comments).append(" Could not find the histogram. ");
      }    
    }
    string histname = histName(name);
    string dir  = dirName(name);
    if (dir.size() == 0) dir.append("nodir");
    
    XMLNodePointer_t subsys;

    try {
      subsys = xmlSubsystemPointers.at(dir);
    }
    catch (const std::out_of_range& oor) {
      subsys = xml->NewChild(dqid, 0, "SUBDET");
      xml->NewAttr(subsys, 0, "id",dir.c_str());
      //      xml->NewAttr(subsys, 0, "flag","Undefined");
      xmlSubsystemPointers[dir] = subsys;
    }

    char cnEvents[50];
    sprintf(cnEvents,"%d", meta.nEvents);
    XMLNodePointer_t par = xml->NewChild(subsys, 0, "PAR");
    xml->NewAttr(par, 0, "id",histname.c_str());                     // parameter name
    xml->NewAttr(par, 0, "obj",(meta.obj).c_str());           // object (histogram, etc)
    xml->NewAttr(par, 0, "nEvents",cnEvents);           // nEvents
    xml->NewAttr(par, 0, "overlap",(meta.overlap).c_str());      // overlap with reference object or not
    xml->NewAttr(par, 0, "drawoption",(meta.drawoption).c_str());               // can change the drawing option
    //    xml->NewAttr(par, 0, "flag",(meta.flag).c_str());               // dq flag
    xml->NewChild(par, 0, "COMMENTS", (meta.comments).c_str());
    Flag pflag = Green;

    if ((meta.algs).size() == 0){
      // algorithm node
      XMLNodePointer_t alg = xml->NewChild(par, 0, "ALG");
      xml->NewAttr(alg, 0, "name","N/A");
      xml->NewChild(alg, 0, "VALUE", "N/A");
      xml->NewChild(alg, 0, "LOW2", "N/A");
      xml->NewChild(alg, 0, "LOW", "N/A");
      xml->NewChild(alg, 0, "HIGH", "N/A");
      xml->NewChild(alg, 0, "HIGH2", "N/A");
      xml->NewChild(alg, 0, "FLAG", "Undefined");
      pflag = Undefined;
    }
    else {
      for (vector<alg_t>::iterator it = (meta.algs).begin(); it != (meta.algs).end(); it++){
	// algorithm node
	XMLNodePointer_t alg = xml->NewChild(par, 0, "ALG");
	xml->NewAttr(alg, 0, "name", (it->name).c_str());
	if (it->value > VeryBigNegativeNumber1){
	  xml->NewChild(alg, 0, "VALUE", (std::to_string(it->value)).c_str());
	  }
	else {
	  xml->NewChild(alg, 0, "VALUE", "N/A");
	}
	xml->NewChild(alg, 0, "LOW2", (std::to_string(it->low2)).c_str());
	xml->NewChild(alg, 0, "LOW", (std::to_string(it->low)).c_str());
	xml->NewChild(alg, 0, "HIGH", (std::to_string(it->high)).c_str());
	xml->NewChild(alg, 0, "HIGH2", (std::to_string(it->high2)).c_str());
	xml->NewChild(alg, 0, "FLAG", getTextForEnum(it->flag));
	if (it->flag > pflag) pflag = it->flag; 
      }
    }
    xml->NewAttr(par, 0, "flag",getTextForEnum(pflag));               // dq flag
    
    Flag subflag;
    
    try {
      subflag = SubsystemFlags.at(dir);
      if (pflag > subflag) {
	SubsystemFlags[dir] = pflag;
	xml->NewAttr(subsys, 0, "flag",getTextForEnum(pflag));
	
      }
    } 
    catch (const std::out_of_range& oor) {
      SubsystemFlags[dir] = pflag;
      xml->NewAttr(subsys, 0, "flag",getTextForEnum(pflag));
    }
  }
  
  // current date/time based on current system
  now = time(0) + 100;
  
  // convert now to tm struct for UTC
  tm *gmtm2 = gmtime(&now);
  
  sprintf(strday,"%04d%02d%02d",gmtm2->tm_year+1900,gmtm2->tm_mon+1,gmtm2->tm_mday);
  sprintf(strtime,"%02d:%02d:%02d",gmtm2->tm_hour,gmtm2->tm_min,gmtm2->tm_sec);
  
  xml->NewChild(metaNode, 0, "ENDDAY", strday);
  xml->NewChild(metaNode, 0, "ENDTIME", strtime);
  xml->NewChild(metaNode, 0, "TAG", "ANALYSIS");
  
  // same xml file
  XMLDocPointer_t xmldoc = xml->NewDoc();   
  xml->DocSetRootElement(xmldoc, dqid);
  // Save document to file
  xml->SaveDoc(xmldoc, xmlFile.c_str());
  // Release memory before exit
  xml->FreeDoc(xmldoc);
  delete xml;
}
