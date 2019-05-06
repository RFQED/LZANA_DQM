#ifndef DQSimpleStatistics_H
#define DQSimpleStatistics_H

#include "TH1.h"

namespace DQSimpleStatistics {
  float mean(TH1* hist);
  float StD(TH1* hist);
}

#endif
