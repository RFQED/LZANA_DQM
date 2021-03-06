#include "DQLibrary.h"
#include "Logger.h"
#include "DQSimpleStatistics.h"

#include <iostream>
#include <fstream>
#include <utility>

using namespace std;

DQLibrary::DQLibrary()
{
  // Constructor
}

DQLibrary::~DQLibrary() {
  // Destructor
}

void DQLibrary::Initialize(const string& dqconfig) {
  // Called before event lopp
  ifstream from(dqconfig.c_str());
  string parname;
  string algname;
  float low2;
  float low;
  float high;
  float high2;

  while (from>>parname>>algname>>low2>>low>>high>>high2){
    cout << parname << " " << algname << " " << low2 << " " << low << " " << high << " " << high2 << endl;
    alg_t alg;
    alg.name = algname;
    alg.low2 = low2;
    alg.low  = low;
    alg.high = high;
    alg.high2= high2;
    //    m_algcollection[parname] = alg;
    std::pair<string, alg_t> pairin(parname, alg);
    m_algcollection.insert(pairin);
  }
}


float DQLibrary::Test(TH1* hist, const string& alg) {
  float result = VeryBigNegativeNumber9;
  //  VERBOSE("NInteractions ", m_event->NInteractions());
  if (alg.compare("MEAN") == 0) result = DQSimpleStatistics::mean(hist);
  if (alg.compare("StD") == 0) result = DQSimpleStatistics::StD(hist);
  //  if (result < VeryBigNegativeNumber1) std::cout << "Algorithm " << alg << " was not found" << std::endl;
  if (result < VeryBigNegativeNumber1) WARNING("Algorithm was not found: ", alg);
  return result;
}


void DQLibrary::checkDQ(HistSvc* m_hists){
  for ( auto & map_entry : m_algcollection) {
    string name =  map_entry.first;
    alg_t alg = map_entry.second;
    float fresult = VeryBigNegativeNumber9;
    Flag colorResult = Undefined;
    
    TH1* hist = m_hists->FindHistInMap(name);

    if (hist != 0){
      fresult = DQLibrary::Test(hist, alg.name);

      if (fresult >= alg.low && fresult <= alg.high) {
	colorResult = Green;
      }
      else if (fresult >= alg.low2 && fresult <= alg.high2) {
	colorResult = Yellow;
      }
      else if (fresult > VeryBigNegativeNumber1){
	colorResult = Red;
      }
      alg.value = fresult;
      alg.flag = colorResult;
      m_hists->FillAlgorithms(name, alg);
    }
  }
  
}
