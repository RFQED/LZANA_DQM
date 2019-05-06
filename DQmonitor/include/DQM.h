#ifndef DQM_H
#define DQM_H

#include "Analysis.h"
#include "DQLibrary.h"
#include "AbsPath.h"

class DQM: public Analysis {

public:
  DQM();
  ~DQM();
  void Initialize();
  void Execute();
  void Finalize();

private:

  DQLibrary dql;

};

#endif
