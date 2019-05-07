#include "DQM.h"
#include "Event.h"
#include "Cuts.h"
#include "HistSvc.h"
#include "Logger.h"

#include <iostream>

using namespace std;

DQM::DQM():
  Analysis()
{
  // Constructor
}

DQM::~DQM() {
  // Destructor
}

void DQM::Initialize() {
  // Called before event lopp
  string dqconfig = (string)AbsolutePathIn + "config/DQconfig.txt";
  dql.Initialize(dqconfig);
}


void DQM::Execute() {
  // Called once per event

  // Access variables through Event functions (preferred)
  VERBOSE("NInteractions ", m_event->NInteractions());
  
  // Direct access to RQ variables (for testing)
  VERBOSE("N HG TPC Pulses ",  m_event->m_tpcHGPulses->nPulses);

  // 1D Hist
  m_hists->BookFillHist("NHGPulses", 50, 0., 50., m_event->m_tpcHGPulses->nPulses);
  m_hists->BookFillHist("SingleScatters/DriftTime", 1000, 0., 1000., m_event->DriftTime()/1000.);

  // Official single scatters
  if (m_cuts->CoreCutsOK()) {    
    // 2D hist
    //m_hists->BookFillHist("SingleScatters", 75, 0., 75., 150, 0., 150., m_event->R2(), m_event->Z());

    m_hists->BookFillHist("SingleScatters/DriftTime", 1000, 0., 1000., m_event->DriftTime()/1000.);

    if (m_event->m_singleScatters->s1Area_phd[0] > 200 && m_event->m_singleScatters->s2Area_phd[0] > 200) {
      m_hists->BookFillHist("SingleScatters/DriftTime_200", 1000, 0., 1000., m_event->DriftTime()/1000.);
    }
  }

  // Official multiple scatters
  if (m_event->m_multipleScatters->nMultipleScatters >= 1) {
    for (int i(0); i < m_event->m_multipleScatters->nMultipleScatters; i++) {
      for (int j(0); j < m_event->m_multipleScatters->driftTime_ns[i].size(); j++) {
      m_hists->BookFillHist("MultipleScatters/DriftTime", 1000, 0., 1000., m_event->m_multipleScatters->driftTime_ns[i][j]/1000.);
      }
    }
  }

  // Official Kr scatters
  if (m_event->m_krScatters->nKr83mScatters == 1) {
    m_hists->BookFillHist("KR83mScatters/DriftTime", 1000, 0., 1000., m_event->m_krScatters->driftTime_ns[0]/1000.);
  }

  // My naive classification

  for (int i = 0; i < m_event->m_tpcHGPulses->nPulses; i++) {
    m_hists->BookFillHist("Single/Width_vs_Area", 500, 0., 500., 5000, 0., 5000., m_event->m_tpcHGPulses->pulseArea_phd[i], m_event->m_tpcHGPulses->rmsWidth_ns[i]);

    // Output the AreaFractionTime for each time setting
    m_hists->BookFillHist("TPCHG_AreaFractionTime1ns", 1000, 0., 1000., m_event->m_tpcHGPulses->areaFractionTime1_ns[i]);
    m_hists->BookFillHist("TPCHG_AreaFractionTime5ns", 1000, 0., 1000., m_event->m_tpcHGPulses->areaFractionTime5_ns[i]);
    m_hists->BookFillHist("TPCHG_AreaFractionTime10ns", 1000, 0., 1000., m_event->m_tpcHGPulses->areaFractionTime10_ns[i]);
    m_hists->BookFillHist("TPCHG_AreaFractionTime25ns", 1000, 0., 1000., m_event->m_tpcHGPulses->areaFractionTime25_ns[i]);
    m_hists->BookFillHist("TPCHG_AreaFractionTime50ns", 1000, 0., 1000., m_event->m_tpcHGPulses->areaFractionTime50_ns[i]);
    m_hists->BookFillHist("TPCHG_AreaFractionTime75ns", 1000, 0., 1000., m_event->m_tpcHGPulses->areaFractionTime75_ns[i]);
    m_hists->BookFillHist("TPCHG_AreaFractionTime90ns", 1000, 0., 1000., m_event->m_tpcHGPulses->areaFractionTime90_ns[i]);
    m_hists->BookFillHist("TPCHG_AreaFractionTime95ns", 1000, 0., 1000., m_event->m_tpcHGPulses->areaFractionTime95_ns[i]);
    m_hists->BookFillHist("TPCHG_AreaFractionTime99ns", 1000, 0., 1000., m_event->m_tpcHGPulses->areaFractionTime99_ns[i]);

    // output pulseAreaNeg50
    m_hists->BookFillHist("TPCHG_pulseAreaNeg50ns_phd", 1000, 0., 1000., m_event->m_tpcHGPulses->pulseAreaNeg50ns_phd[i]);

    // output pulseArea plots for different times
    m_hists->BookFillHist("TPCHG_pulseArea50ns_phd", 1000, 0., 1000., m_event->m_tpcHGPulses->pulseArea50ns_phd[i]);
    m_hists->BookFillHist("TPCHG_pulseArea100ns_phd", 1000, 0., 1000., m_event->m_tpcHGPulses->pulseArea100ns_phd[i]);
    m_hists->BookFillHist("TPCHG_pulseArea200ns_phd", 1000, 0., 1000., m_event->m_tpcHGPulses->pulseArea200ns_phd[i]);
    m_hists->BookFillHist("TPCHG_pulseArea500ns_phd", 1000, 0., 1000., m_event->m_tpcHGPulses->pulseArea500ns_phd[i]);
    m_hists->BookFillHist("TPCHG_pulseArea1us_phd", 1000, 0., 1000., m_event->m_tpcHGPulses->pulseArea1us_phd[i]);
    m_hists->BookFillHist("TPCHG_pulseArea2us_phd", 1000, 0., 1000., m_event->m_tpcHGPulses->pulseArea2us_phd[i]);
    m_hists->BookFillHist("TPCHG_pulseArea5us_phd", 1000, 0., 1000., m_event->m_tpcHGPulses->pulseArea5us_phd[i]);




    if (m_event->m_tpcHGPulses->s1Probability[i] == 1) 
      m_hists->BookFillHist("Single/Width_vs_Area_S1", 500, 0., 500., 5000, 0., 5000., m_event->m_tpcHGPulses->pulseArea_phd[i], m_event->m_tpcHGPulses->rmsWidth_ns[i]);
    if (m_event->m_tpcHGPulses->s2Probability[i] == 1) 
      m_hists->BookFillHist("Single/Width_vs_Area_S2", 500, 0., 500., 5000, 0., 5000., m_event->m_tpcHGPulses->pulseArea_phd[i], m_event->m_tpcHGPulses->rmsWidth_ns[i]);
  }

  if (m_event->type() == Event::eSingleScatter) {
    m_hists->BookFillHist("Single/DriftTime", 1000, 0., 1000., m_event->DriftTime()/1000.);

    for (auto i : m_event->S1s())
      m_hists->BookFillHist("Single/S2Areas", 1000, 0., 1000., m_event->m_tpcHGPulses->pulseArea_phd[i]);

  }

}

void DQM::Finalize() {
  // Called after event loop
  // Writing comments for the histogramms

  m_hists->FillComments("NHGPulses","This is a comment on NHGPulses");

  m_hists->FillComments("SingleScatters/DriftTime", "Comments for SingleScatters/DriftTime");
  m_hists->FillComments("KR83mScatters/DriftTime", "Comments for KR83mScatters/DriftTime");

  dql.checkDQ(m_hists);


}

