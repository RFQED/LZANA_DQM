#include "DQSimpleStatistics.h"

float DQSimpleStatistics::mean(TH1* hist) {
  return hist->GetMean();
}

float DQSimpleStatistics::StD(TH1* hist) {
  return hist->GetRMS();
}
