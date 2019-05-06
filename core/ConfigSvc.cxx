#include "ConfigSvc.h"

#include <iostream>
using std::cout;
using std::endl;
#include <cstdlib>
#include <TSystem.h> // check config file exists

ConfigSvc* ConfigSvc::m_instance = 0;

ConfigSvc* ConfigSvc::Instance(int argc, const char* const* const argv, string filename, string absPath) {
  // Instanciate singleton
  // This is a bit nasty as will throw away args if not initial instansiation.  Is there a good way to deal with this?

  if (!m_instance) {
    // check if file exists
    bool nofile=gSystem->AccessPathName((absPath+filename).c_str()); //false if file exists
    if (nofile) {
      std::cout << " ConfigSvc::Input file does not exist: " << filename << std::endl;
      std::cout << " Returning 0" << endl;
      return 0;
    }
    m_instance = new ConfigSvc(argc, argv, filename, absPath);
  }


  return m_instance;
}

ConfigSvc::ConfigSvc(int argc, const char* const* const argv, string filename, string absPath) :
  m_env((absPath+filename).c_str()),
  AbsolutePath(absPath),
  m_args(argc, argv)
{

  // Note: must give exact types (e.g. 1.) or use explicit template parameter

  // General
  NEvents = Read('n', "events", -1);
  PrintInterval = Read('i', "printInterval", 10000);

  FileList = Read<string>('f', "fileList", "RQfile.list");
  if (FileList.find("/",0,1) != 0) {
    string relPath("inputs/");
    FileList = AbsolutePath + relPath + FileList;
  }
  OutName = Read<string>('o', "outName", "hists.root");
  OutDir = Read<string>('d', "outDir", "abracadabra");
  if (OutDir.compare(0,11,"abracadabra") == 0) {
    ExtendedOutput = 0;
  } else {
    ExtendedOutput = 1;
    if (OutDir.find("/",OutDir.size()-1,1) != std::string::npos) OutDir = OutDir.substr(0,OutDir.size()-1);
    string afterSlash = (OutDir.find_last_of("/") == std::string::npos) ? OutDir : OutDir.substr(OutDir.find_last_of("/") + 1);
    if (OutDir.find("/",0,1) != 0) {
      string relPath("outputs/");
      OutDir = AbsolutePath + relPath + OutDir;
    }
    char mdir[200];
    sprintf(mdir,"mkdir %s",OutDir.c_str());
    gSystem->Exec(mdir);    // create a directory to save the results
    OutDir.append("/");
    OutName = OutDir + afterSlash;
    OutXML = OutDir + afterSlash;
    AnalysisName = afterSlash;
    OutName.append(".root");
    OutXML.append(".xml");
  }
  
  
  //  std::size_t found = OutName.find("/",0,1);
  //  std::cout << "found: " << found << std::endl;
  if (OutName.find("/",0,1) != 0) {
    string relPath("outputs/");
    OutName = AbsolutePath + relPath + OutName;
  }
  //  std::cout << "outName: " << OutName << std::endl; 
  Level = Read('l', "level", 3);  // Logging level: error = 1, warning = 2, info = 3, debug = 4, verbose = 5
  
  // Read arguments
  //vector<string> args = ReadArgs();
}

vector<string> ConfigSvc::ReadArgs() {
  // Parse command line arguments and return as vector of strings
  // for further manipulation

  vector<string> args;
  m_args >> GetOpt::GlobalOption(args);
  return args;

}
