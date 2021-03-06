#ifndef DQLibrary_H
#define DQLibrary_H
#include "TH1.h"
#include <unordered_map>
#include <utility>
#include <vector>
#include <string>
#include "HistSvc.h"
#include "Logger.h"

using namespace std;

class DQLibrary{

public:
  DQLibrary();
  ~DQLibrary();
  void Initialize(const string& dqconfig);
  float Test(TH1* hist, const string& alg);
  void checkDQ(HistSvc* m_hists);
  
private:

  std::unordered_multimap<string, alg_t> m_algcollection;

};

#endif
