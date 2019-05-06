namespace std {}
using namespace std;
#include "rqlibProjectHeaders.h"

#include "rqlibLinkDef.h"

#include "rqlibProjectDict.cxx"

struct DeleteObjectFunctor {
   template <typename T>
   void operator()(const T *ptr) const {
      delete ptr;
   }
   template <typename T, typename Q>
   void operator()(const std::pair<T,Q> &) const {
      // Do nothing
   }
   template <typename T, typename Q>
   void operator()(const std::pair<T,Q*> &ptr) const {
      delete ptr.second;
   }
   template <typename T, typename Q>
   void operator()(const std::pair<T*,Q> &ptr) const {
      delete ptr.first;
   }
   template <typename T, typename Q>
   void operator()(const std::pair<T*,Q*> &ptr) const {
      delete ptr.first;
      delete ptr.second;
   }
};

#ifndef RQ__EventHeader_cxx
#define RQ__EventHeader_cxx
RQ::EventHeader::EventHeader() {
}
RQ::EventHeader::EventHeader(const EventHeader & rhs)
   : TObject(const_cast<EventHeader &>( rhs ))
   , eventID(const_cast<EventHeader &>( rhs ).eventID)
   , rawFileName(const_cast<EventHeader &>( rhs ).rawFileName)
   , triggerTimeStamp_s(const_cast<EventHeader &>( rhs ).triggerTimeStamp_s)
   , triggerTimeStamp_ns(const_cast<EventHeader &>( rhs ).triggerTimeStamp_ns)
{
   // This is NOT a copy constructor. This is actually a move constructor (for stl container's sake).
   // Use at your own risk!
   (void)rhs; // avoid warning about unused parameter
   EventHeader &modrhs = const_cast<EventHeader &>( rhs );
   modrhs.rawFileName.clear();
}
RQ::EventHeader::~EventHeader() {
}
#endif // RQ__EventHeader_cxx

#ifndef RQ__DetectorPulses_cxx
#define RQ__DetectorPulses_cxx
RQ::DetectorPulses::DetectorPulses() {
}
RQ::DetectorPulses::DetectorPulses(const DetectorPulses & rhs)
   : TObject(const_cast<DetectorPulses &>( rhs ))
   , nPulses(const_cast<DetectorPulses &>( rhs ).nPulses)
   , pulseID(const_cast<DetectorPulses &>( rhs ).pulseID)
   , pulseStartTime_ns(const_cast<DetectorPulses &>( rhs ).pulseStartTime_ns)
   , pulseEndTime_ns(const_cast<DetectorPulses &>( rhs ).pulseEndTime_ns)
   , saturated(const_cast<DetectorPulses &>( rhs ).saturated)
   , nSaturatedChannels(const_cast<DetectorPulses &>( rhs ).nSaturatedChannels)
   , saturatedChannelIDs(const_cast<DetectorPulses &>( rhs ).saturatedChannelIDs)
   , pulseArea_phd(const_cast<DetectorPulses &>( rhs ).pulseArea_phd)
   , positiveArea_phd(const_cast<DetectorPulses &>( rhs ).positiveArea_phd)
   , negativeArea_phd(const_cast<DetectorPulses &>( rhs ).negativeArea_phd)
   , peakAmp(const_cast<DetectorPulses &>( rhs ).peakAmp)
   , peakTime_ns(const_cast<DetectorPulses &>( rhs ).peakTime_ns)
   , areaFractionTime1_ns(const_cast<DetectorPulses &>( rhs ).areaFractionTime1_ns)
   , areaFractionTime5_ns(const_cast<DetectorPulses &>( rhs ).areaFractionTime5_ns)
   , areaFractionTime10_ns(const_cast<DetectorPulses &>( rhs ).areaFractionTime10_ns)
   , areaFractionTime25_ns(const_cast<DetectorPulses &>( rhs ).areaFractionTime25_ns)
   , areaFractionTime50_ns(const_cast<DetectorPulses &>( rhs ).areaFractionTime50_ns)
   , areaFractionTime75_ns(const_cast<DetectorPulses &>( rhs ).areaFractionTime75_ns)
   , areaFractionTime90_ns(const_cast<DetectorPulses &>( rhs ).areaFractionTime90_ns)
   , areaFractionTime95_ns(const_cast<DetectorPulses &>( rhs ).areaFractionTime95_ns)
   , areaFractionTime99_ns(const_cast<DetectorPulses &>( rhs ).areaFractionTime99_ns)
   , pulseAreaNeg50ns_phd(const_cast<DetectorPulses &>( rhs ).pulseAreaNeg50ns_phd)
   , pulseArea50ns_phd(const_cast<DetectorPulses &>( rhs ).pulseArea50ns_phd)
   , pulseArea100ns_phd(const_cast<DetectorPulses &>( rhs ).pulseArea100ns_phd)
   , pulseArea200ns_phd(const_cast<DetectorPulses &>( rhs ).pulseArea200ns_phd)
   , pulseArea500ns_phd(const_cast<DetectorPulses &>( rhs ).pulseArea500ns_phd)
   , pulseArea1us_phd(const_cast<DetectorPulses &>( rhs ).pulseArea1us_phd)
   , pulseArea2us_phd(const_cast<DetectorPulses &>( rhs ).pulseArea2us_phd)
   , pulseArea5us_phd(const_cast<DetectorPulses &>( rhs ).pulseArea5us_phd)
   , promptFraction50ns(const_cast<DetectorPulses &>( rhs ).promptFraction50ns)
   , rmsWidth_ns(const_cast<DetectorPulses &>( rhs ).rmsWidth_ns)
   , topArea_phd(const_cast<DetectorPulses &>( rhs ).topArea_phd)
   , bottomArea_phd(const_cast<DetectorPulses &>( rhs ).bottomArea_phd)
   , topBottomAsymmetry(const_cast<DetectorPulses &>( rhs ).topBottomAsymmetry)
   , coincidence(const_cast<DetectorPulses &>( rhs ).coincidence)
   , s1Probability(const_cast<DetectorPulses &>( rhs ).s1Probability)
   , s2Probability(const_cast<DetectorPulses &>( rhs ).s2Probability)
   , singlePEprobability(const_cast<DetectorPulses &>( rhs ).singlePEprobability)
   , multiplePEprobability(const_cast<DetectorPulses &>( rhs ).multiplePEprobability)
   , singleElectronProbability(const_cast<DetectorPulses &>( rhs ).singleElectronProbability)
   , otherProbability(const_cast<DetectorPulses &>( rhs ).otherProbability)
   , otherS2Probability(const_cast<DetectorPulses &>( rhs ).otherS2Probability)
   , photonCount(const_cast<DetectorPulses &>( rhs ).photonCount)
   , topPhotonCount(const_cast<DetectorPulses &>( rhs ).topPhotonCount)
   , bottomPhotonCount(const_cast<DetectorPulses &>( rhs ).bottomPhotonCount)
   , s2Xposition_cm(const_cast<DetectorPulses &>( rhs ).s2Xposition_cm)
   , s2Yposition_cm(const_cast<DetectorPulses &>( rhs ).s2Yposition_cm)
   , HGLGpulseID(const_cast<DetectorPulses &>( rhs ).HGLGpulseID)
   , chID(const_cast<DetectorPulses &>( rhs ).chID)
   , chPulseArea_phd(const_cast<DetectorPulses &>( rhs ).chPulseArea_phd)
   , chPeakAmp(const_cast<DetectorPulses &>( rhs ).chPeakAmp)
   , chPeakTime_ns(const_cast<DetectorPulses &>( rhs ).chPeakTime_ns)
   , chSaturated(const_cast<DetectorPulses &>( rhs ).chSaturated)
   , chPhotonCount(const_cast<DetectorPulses &>( rhs ).chPhotonCount)
   , chPhotonTimes(const_cast<DetectorPulses &>( rhs ).chPhotonTimes)
{
   // This is NOT a copy constructor. This is actually a move constructor (for stl container's sake).
   // Use at your own risk!
   (void)rhs; // avoid warning about unused parameter
   DetectorPulses &modrhs = const_cast<DetectorPulses &>( rhs );
   modrhs.pulseID.clear();
   modrhs.pulseStartTime_ns.clear();
   modrhs.pulseEndTime_ns.clear();
   modrhs.saturated.clear();
   modrhs.nSaturatedChannels.clear();
   modrhs.saturatedChannelIDs.clear();
   modrhs.pulseArea_phd.clear();
   modrhs.positiveArea_phd.clear();
   modrhs.negativeArea_phd.clear();
   modrhs.peakAmp.clear();
   modrhs.peakTime_ns.clear();
   modrhs.areaFractionTime1_ns.clear();
   modrhs.areaFractionTime5_ns.clear();
   modrhs.areaFractionTime10_ns.clear();
   modrhs.areaFractionTime25_ns.clear();
   modrhs.areaFractionTime50_ns.clear();
   modrhs.areaFractionTime75_ns.clear();
   modrhs.areaFractionTime90_ns.clear();
   modrhs.areaFractionTime95_ns.clear();
   modrhs.areaFractionTime99_ns.clear();
   modrhs.pulseAreaNeg50ns_phd.clear();
   modrhs.pulseArea50ns_phd.clear();
   modrhs.pulseArea100ns_phd.clear();
   modrhs.pulseArea200ns_phd.clear();
   modrhs.pulseArea500ns_phd.clear();
   modrhs.pulseArea1us_phd.clear();
   modrhs.pulseArea2us_phd.clear();
   modrhs.pulseArea5us_phd.clear();
   modrhs.promptFraction50ns.clear();
   modrhs.rmsWidth_ns.clear();
   modrhs.topArea_phd.clear();
   modrhs.bottomArea_phd.clear();
   modrhs.topBottomAsymmetry.clear();
   modrhs.coincidence.clear();
   modrhs.s1Probability.clear();
   modrhs.s2Probability.clear();
   modrhs.singlePEprobability.clear();
   modrhs.multiplePEprobability.clear();
   modrhs.singleElectronProbability.clear();
   modrhs.otherProbability.clear();
   modrhs.otherS2Probability.clear();
   modrhs.photonCount.clear();
   modrhs.topPhotonCount.clear();
   modrhs.bottomPhotonCount.clear();
   modrhs.s2Xposition_cm.clear();
   modrhs.s2Yposition_cm.clear();
   modrhs.HGLGpulseID.clear();
   modrhs.chID.clear();
   modrhs.chPulseArea_phd.clear();
   modrhs.chPeakAmp.clear();
   modrhs.chPeakTime_ns.clear();
   modrhs.chSaturated.clear();
   modrhs.chPhotonCount.clear();
   modrhs.chPhotonTimes.clear();
}
RQ::DetectorPulses::~DetectorPulses() {
}
#endif // RQ__DetectorPulses_cxx

#ifndef RQ__ODPulses_cxx
#define RQ__ODPulses_cxx
RQ::ODPulses::ODPulses() {
}
RQ::ODPulses::ODPulses(const ODPulses & rhs)
   : TObject(const_cast<ODPulses &>( rhs ))
   , nPulses(const_cast<ODPulses &>( rhs ).nPulses)
   , maxCoincidence(const_cast<ODPulses &>( rhs ).maxCoincidence)
   , pulseID(const_cast<ODPulses &>( rhs ).pulseID)
   , pulseStartTime_ns(const_cast<ODPulses &>( rhs ).pulseStartTime_ns)
   , pulseEndTime_ns(const_cast<ODPulses &>( rhs ).pulseEndTime_ns)
   , saturated(const_cast<ODPulses &>( rhs ).saturated)
   , nSaturatedChannels(const_cast<ODPulses &>( rhs ).nSaturatedChannels)
   , saturatedChannelIDs(const_cast<ODPulses &>( rhs ).saturatedChannelIDs)
   , pulseArea_phd(const_cast<ODPulses &>( rhs ).pulseArea_phd)
   , positiveArea_phd(const_cast<ODPulses &>( rhs ).positiveArea_phd)
   , negativeArea_phd(const_cast<ODPulses &>( rhs ).negativeArea_phd)
   , peakAmp(const_cast<ODPulses &>( rhs ).peakAmp)
   , peakTime_ns(const_cast<ODPulses &>( rhs ).peakTime_ns)
   , areaFractionTime1_ns(const_cast<ODPulses &>( rhs ).areaFractionTime1_ns)
   , areaFractionTime5_ns(const_cast<ODPulses &>( rhs ).areaFractionTime5_ns)
   , areaFractionTime10_ns(const_cast<ODPulses &>( rhs ).areaFractionTime10_ns)
   , areaFractionTime25_ns(const_cast<ODPulses &>( rhs ).areaFractionTime25_ns)
   , areaFractionTime50_ns(const_cast<ODPulses &>( rhs ).areaFractionTime50_ns)
   , areaFractionTime75_ns(const_cast<ODPulses &>( rhs ).areaFractionTime75_ns)
   , areaFractionTime90_ns(const_cast<ODPulses &>( rhs ).areaFractionTime90_ns)
   , areaFractionTime95_ns(const_cast<ODPulses &>( rhs ).areaFractionTime95_ns)
   , areaFractionTime99_ns(const_cast<ODPulses &>( rhs ).areaFractionTime99_ns)
   , promptFraction200ns(const_cast<ODPulses &>( rhs ).promptFraction200ns)
   , promptFraction50ns(const_cast<ODPulses &>( rhs ).promptFraction50ns)
   , rmsWidth_ns(const_cast<ODPulses &>( rhs ).rmsWidth_ns)
   , coincidence(const_cast<ODPulses &>( rhs ).coincidence)
   , pulseZPosition(const_cast<ODPulses &>( rhs ).pulseZPosition)
   , pulsePhiPosition(const_cast<ODPulses &>( rhs ).pulsePhiPosition)
   , pulseTheta(const_cast<ODPulses &>( rhs ).pulseTheta)
   , chID(const_cast<ODPulses &>( rhs ).chID)
   , chPulseArea_phd(const_cast<ODPulses &>( rhs ).chPulseArea_phd)
   , chPeakAmp(const_cast<ODPulses &>( rhs ).chPeakAmp)
   , chPeakTime_ns(const_cast<ODPulses &>( rhs ).chPeakTime_ns)
   , chSaturated(const_cast<ODPulses &>( rhs ).chSaturated)
   , chPhotonCount(const_cast<ODPulses &>( rhs ).chPhotonCount)
   , chZPosition(const_cast<ODPulses &>( rhs ).chZPosition)
   , chPhiPosition(const_cast<ODPulses &>( rhs ).chPhiPosition)
{
   // This is NOT a copy constructor. This is actually a move constructor (for stl container's sake).
   // Use at your own risk!
   (void)rhs; // avoid warning about unused parameter
   ODPulses &modrhs = const_cast<ODPulses &>( rhs );
   modrhs.pulseID.clear();
   modrhs.pulseStartTime_ns.clear();
   modrhs.pulseEndTime_ns.clear();
   modrhs.saturated.clear();
   modrhs.nSaturatedChannels.clear();
   modrhs.saturatedChannelIDs.clear();
   modrhs.pulseArea_phd.clear();
   modrhs.positiveArea_phd.clear();
   modrhs.negativeArea_phd.clear();
   modrhs.peakAmp.clear();
   modrhs.peakTime_ns.clear();
   modrhs.areaFractionTime1_ns.clear();
   modrhs.areaFractionTime5_ns.clear();
   modrhs.areaFractionTime10_ns.clear();
   modrhs.areaFractionTime25_ns.clear();
   modrhs.areaFractionTime50_ns.clear();
   modrhs.areaFractionTime75_ns.clear();
   modrhs.areaFractionTime90_ns.clear();
   modrhs.areaFractionTime95_ns.clear();
   modrhs.areaFractionTime99_ns.clear();
   modrhs.promptFraction200ns.clear();
   modrhs.promptFraction50ns.clear();
   modrhs.rmsWidth_ns.clear();
   modrhs.coincidence.clear();
   modrhs.pulseZPosition.clear();
   modrhs.pulsePhiPosition.clear();
   modrhs.pulseTheta.clear();
   modrhs.chID.clear();
   modrhs.chPulseArea_phd.clear();
   modrhs.chPeakAmp.clear();
   modrhs.chPeakTime_ns.clear();
   modrhs.chSaturated.clear();
   modrhs.chPhotonCount.clear();
   modrhs.chZPosition.clear();
   modrhs.chPhiPosition.clear();
}
RQ::ODPulses::~ODPulses() {
}
#endif // RQ__ODPulses_cxx

#ifndef RQ__SingleScatters_cxx
#define RQ__SingleScatters_cxx
RQ::SingleScatters::SingleScatters() {
}
RQ::SingleScatters::SingleScatters(const SingleScatters & rhs)
   : TObject(const_cast<SingleScatters &>( rhs ))
   , nSingleScatters(const_cast<SingleScatters &>( rhs ).nSingleScatters)
   , s1PulseID(const_cast<SingleScatters &>( rhs ).s1PulseID)
   , s1IsHG(const_cast<SingleScatters &>( rhs ).s1IsHG)
   , s2PulseID(const_cast<SingleScatters &>( rhs ).s2PulseID)
   , s2IsHG(const_cast<SingleScatters &>( rhs ).s2IsHG)
   , driftTime_ns(const_cast<SingleScatters &>( rhs ).driftTime_ns)
   , s1Area_phd(const_cast<SingleScatters &>( rhs ).s1Area_phd)
   , s2Area_phd(const_cast<SingleScatters &>( rhs ).s2Area_phd)
   , s1TopArea_phd(const_cast<SingleScatters &>( rhs ).s1TopArea_phd)
   , s1BottomArea_phd(const_cast<SingleScatters &>( rhs ).s1BottomArea_phd)
   , s1TopCorrectionFactor(const_cast<SingleScatters &>( rhs ).s1TopCorrectionFactor)
   , s1BottomCorrectionFactor(const_cast<SingleScatters &>( rhs ).s1BottomCorrectionFactor)
   , correctedS1TopArea_phd(const_cast<SingleScatters &>( rhs ).correctedS1TopArea_phd)
   , correctedS1BottomArea_phd(const_cast<SingleScatters &>( rhs ).correctedS1BottomArea_phd)
   , correctedS1Area_phd(const_cast<SingleScatters &>( rhs ).correctedS1Area_phd)
   , s2CorrectionFactor(const_cast<SingleScatters &>( rhs ).s2CorrectionFactor)
   , correctedS2Area_phd(const_cast<SingleScatters &>( rhs ).correctedS2Area_phd)
   , x_cm(const_cast<SingleScatters &>( rhs ).x_cm)
   , y_cm(const_cast<SingleScatters &>( rhs ).y_cm)
   , xyChi2(const_cast<SingleScatters &>( rhs ).xyChi2)
   , correctedX_cm(const_cast<SingleScatters &>( rhs ).correctedX_cm)
   , correctedY_cm(const_cast<SingleScatters &>( rhs ).correctedY_cm)
   , correctedZ_cm(const_cast<SingleScatters &>( rhs ).correctedZ_cm)
   , s1PhotonCount(const_cast<SingleScatters &>( rhs ).s1PhotonCount)
   , correctedS1PhotonCount(const_cast<SingleScatters &>( rhs ).correctedS1PhotonCount)
   , energyER_keV(const_cast<SingleScatters &>( rhs ).energyER_keV)
   , energyNR_keV(const_cast<SingleScatters &>( rhs ).energyNR_keV)
   , skinPromptArea(const_cast<SingleScatters &>( rhs ).skinPromptArea)
   , nSkinPromptPulses(const_cast<SingleScatters &>( rhs ).nSkinPromptPulses)
   , skinPromptPulseIDs(const_cast<SingleScatters &>( rhs ).skinPromptPulseIDs)
   , odPromptArea(const_cast<SingleScatters &>( rhs ).odPromptArea)
   , nODPromptPulses(const_cast<SingleScatters &>( rhs ).nODPromptPulses)
   , odPromptPulseIDs(const_cast<SingleScatters &>( rhs ).odPromptPulseIDs)
   , odDelayedAreas(const_cast<SingleScatters &>( rhs ).odDelayedAreas)
   , nODDelayedPulses(const_cast<SingleScatters &>( rhs ).nODDelayedPulses)
   , odDelayedPulseIDs(const_cast<SingleScatters &>( rhs ).odDelayedPulseIDs)
{
   // This is NOT a copy constructor. This is actually a move constructor (for stl container's sake).
   // Use at your own risk!
   (void)rhs; // avoid warning about unused parameter
   SingleScatters &modrhs = const_cast<SingleScatters &>( rhs );
   modrhs.s1PulseID.clear();
   modrhs.s1IsHG.clear();
   modrhs.s2PulseID.clear();
   modrhs.s2IsHG.clear();
   modrhs.driftTime_ns.clear();
   modrhs.s1Area_phd.clear();
   modrhs.s2Area_phd.clear();
   modrhs.s1TopArea_phd.clear();
   modrhs.s1BottomArea_phd.clear();
   modrhs.s1TopCorrectionFactor.clear();
   modrhs.s1BottomCorrectionFactor.clear();
   modrhs.correctedS1TopArea_phd.clear();
   modrhs.correctedS1BottomArea_phd.clear();
   modrhs.correctedS1Area_phd.clear();
   modrhs.s2CorrectionFactor.clear();
   modrhs.correctedS2Area_phd.clear();
   modrhs.x_cm.clear();
   modrhs.y_cm.clear();
   modrhs.xyChi2.clear();
   modrhs.correctedX_cm.clear();
   modrhs.correctedY_cm.clear();
   modrhs.correctedZ_cm.clear();
   modrhs.s1PhotonCount.clear();
   modrhs.correctedS1PhotonCount.clear();
   modrhs.energyER_keV.clear();
   modrhs.energyNR_keV.clear();
   modrhs.skinPromptArea.clear();
   modrhs.nSkinPromptPulses.clear();
   modrhs.skinPromptPulseIDs.clear();
   modrhs.odPromptArea.clear();
   modrhs.nODPromptPulses.clear();
   modrhs.odPromptPulseIDs.clear();
   modrhs.odDelayedAreas.clear();
   modrhs.nODDelayedPulses.clear();
   modrhs.odDelayedPulseIDs.clear();
}
RQ::SingleScatters::~SingleScatters() {
}
#endif // RQ__SingleScatters_cxx

#ifndef RQ__MultipleScatters_cxx
#define RQ__MultipleScatters_cxx
RQ::MultipleScatters::MultipleScatters() {
}
RQ::MultipleScatters::MultipleScatters(const MultipleScatters & rhs)
   : TObject(const_cast<MultipleScatters &>( rhs ))
   , nMultipleScatters(const_cast<MultipleScatters &>( rhs ).nMultipleScatters)
   , s1PulseID(const_cast<MultipleScatters &>( rhs ).s1PulseID)
   , s1IsHG(const_cast<MultipleScatters &>( rhs ).s1IsHG)
   , s1Area_phd(const_cast<MultipleScatters &>( rhs ).s1Area_phd)
   , s1TopArea_phd(const_cast<MultipleScatters &>( rhs ).s1TopArea_phd)
   , s1BottomArea_phd(const_cast<MultipleScatters &>( rhs ).s1BottomArea_phd)
   , nS2s(const_cast<MultipleScatters &>( rhs ).nS2s)
   , s2PulseIDs(const_cast<MultipleScatters &>( rhs ).s2PulseIDs)
   , s2IsHG(const_cast<MultipleScatters &>( rhs ).s2IsHG)
   , s2Area_phd(const_cast<MultipleScatters &>( rhs ).s2Area_phd)
   , s1TopCorrectionFactors(const_cast<MultipleScatters &>( rhs ).s1TopCorrectionFactors)
   , s1BottomCorrectionFactors(const_cast<MultipleScatters &>( rhs ).s1BottomCorrectionFactors)
   , correctedS1TopAreas_phd(const_cast<MultipleScatters &>( rhs ).correctedS1TopAreas_phd)
   , correctedS1BottomAreas_phd(const_cast<MultipleScatters &>( rhs ).correctedS1BottomAreas_phd)
   , correctedS1Areas_phd(const_cast<MultipleScatters &>( rhs ).correctedS1Areas_phd)
   , s2CorrectionFactors(const_cast<MultipleScatters &>( rhs ).s2CorrectionFactors)
   , correctedS2Area_phd(const_cast<MultipleScatters &>( rhs ).correctedS2Area_phd)
   , driftTime_ns(const_cast<MultipleScatters &>( rhs ).driftTime_ns)
   , weightedDriftTime_ns(const_cast<MultipleScatters &>( rhs ).weightedDriftTime_ns)
   , x_cm(const_cast<MultipleScatters &>( rhs ).x_cm)
   , y_cm(const_cast<MultipleScatters &>( rhs ).y_cm)
   , correctedX_cm(const_cast<MultipleScatters &>( rhs ).correctedX_cm)
   , correctedY_cm(const_cast<MultipleScatters &>( rhs ).correctedY_cm)
   , correctedZ_cm(const_cast<MultipleScatters &>( rhs ).correctedZ_cm)
   , energyER_keV(const_cast<MultipleScatters &>( rhs ).energyER_keV)
   , energyNR_keV(const_cast<MultipleScatters &>( rhs ).energyNR_keV)
{
   // This is NOT a copy constructor. This is actually a move constructor (for stl container's sake).
   // Use at your own risk!
   (void)rhs; // avoid warning about unused parameter
   MultipleScatters &modrhs = const_cast<MultipleScatters &>( rhs );
   modrhs.s1PulseID.clear();
   modrhs.s1IsHG.clear();
   modrhs.s1Area_phd.clear();
   modrhs.s1TopArea_phd.clear();
   modrhs.s1BottomArea_phd.clear();
   modrhs.nS2s.clear();
   modrhs.s2PulseIDs.clear();
   modrhs.s2IsHG.clear();
   modrhs.s2Area_phd.clear();
   modrhs.s1TopCorrectionFactors.clear();
   modrhs.s1BottomCorrectionFactors.clear();
   modrhs.correctedS1TopAreas_phd.clear();
   modrhs.correctedS1BottomAreas_phd.clear();
   modrhs.correctedS1Areas_phd.clear();
   modrhs.s2CorrectionFactors.clear();
   modrhs.correctedS2Area_phd.clear();
   modrhs.driftTime_ns.clear();
   modrhs.weightedDriftTime_ns.clear();
   modrhs.x_cm.clear();
   modrhs.y_cm.clear();
   modrhs.correctedX_cm.clear();
   modrhs.correctedY_cm.clear();
   modrhs.correctedZ_cm.clear();
   modrhs.energyER_keV.clear();
   modrhs.energyNR_keV.clear();
}
RQ::MultipleScatters::~MultipleScatters() {
}
#endif // RQ__MultipleScatters_cxx

#ifndef RQ__Kr83mScatters_cxx
#define RQ__Kr83mScatters_cxx
RQ::Kr83mScatters::Kr83mScatters() {
}
RQ::Kr83mScatters::Kr83mScatters(const Kr83mScatters & rhs)
   : TObject(const_cast<Kr83mScatters &>( rhs ))
   , nKr83mScatters(const_cast<Kr83mScatters &>( rhs ).nKr83mScatters)
   , s1aPulseID(const_cast<Kr83mScatters &>( rhs ).s1aPulseID)
   , s1aArea_phd(const_cast<Kr83mScatters &>( rhs ).s1aArea_phd)
   , s1bPulseID(const_cast<Kr83mScatters &>( rhs ).s1bPulseID)
   , s1bArea_phd(const_cast<Kr83mScatters &>( rhs ).s1bArea_phd)
   , s2PulseID(const_cast<Kr83mScatters &>( rhs ).s2PulseID)
   , s2Area_phd(const_cast<Kr83mScatters &>( rhs ).s2Area_phd)
   , driftTime_ns(const_cast<Kr83mScatters &>( rhs ).driftTime_ns)
   , x_cm(const_cast<Kr83mScatters &>( rhs ).x_cm)
   , y_cm(const_cast<Kr83mScatters &>( rhs ).y_cm)
   , correctedX_cm(const_cast<Kr83mScatters &>( rhs ).correctedX_cm)
   , correctedY_cm(const_cast<Kr83mScatters &>( rhs ).correctedY_cm)
   , correctedZ_cm(const_cast<Kr83mScatters &>( rhs ).correctedZ_cm)
   , energy_keV(const_cast<Kr83mScatters &>( rhs ).energy_keV)
{
   // This is NOT a copy constructor. This is actually a move constructor (for stl container's sake).
   // Use at your own risk!
   (void)rhs; // avoid warning about unused parameter
   Kr83mScatters &modrhs = const_cast<Kr83mScatters &>( rhs );
   modrhs.s1aPulseID.clear();
   modrhs.s1aArea_phd.clear();
   modrhs.s1bPulseID.clear();
   modrhs.s1bArea_phd.clear();
   modrhs.s2PulseID.clear();
   modrhs.s2Area_phd.clear();
   modrhs.driftTime_ns.clear();
   modrhs.x_cm.clear();
   modrhs.y_cm.clear();
   modrhs.correctedX_cm.clear();
   modrhs.correctedY_cm.clear();
   modrhs.correctedZ_cm.clear();
   modrhs.energy_keV.clear();
}
RQ::Kr83mScatters::~Kr83mScatters() {
}
#endif // RQ__Kr83mScatters_cxx

#ifndef RQ__OtherScatters_cxx
#define RQ__OtherScatters_cxx
RQ::OtherScatters::OtherScatters() {
}
RQ::OtherScatters::OtherScatters(const OtherScatters & rhs)
   : TObject(const_cast<OtherScatters &>( rhs ))
   , nOtherScatters(const_cast<OtherScatters &>( rhs ).nOtherScatters)
   , nS1s(const_cast<OtherScatters &>( rhs ).nS1s)
   , s1PulseIDs(const_cast<OtherScatters &>( rhs ).s1PulseIDs)
   , nS2s(const_cast<OtherScatters &>( rhs ).nS2s)
   , s2PulseIDs(const_cast<OtherScatters &>( rhs ).s2PulseIDs)
   , nSPEs(const_cast<OtherScatters &>( rhs ).nSPEs)
   , spePulseIDs(const_cast<OtherScatters &>( rhs ).spePulseIDs)
   , nSEs(const_cast<OtherScatters &>( rhs ).nSEs)
   , sePulseIDs(const_cast<OtherScatters &>( rhs ).sePulseIDs)
   , nOthers(const_cast<OtherScatters &>( rhs ).nOthers)
   , otherPulseIDs(const_cast<OtherScatters &>( rhs ).otherPulseIDs)
{
   // This is NOT a copy constructor. This is actually a move constructor (for stl container's sake).
   // Use at your own risk!
   (void)rhs; // avoid warning about unused parameter
   OtherScatters &modrhs = const_cast<OtherScatters &>( rhs );
   modrhs.nS1s.clear();
   modrhs.s1PulseIDs.clear();
   modrhs.nS2s.clear();
   modrhs.s2PulseIDs.clear();
   modrhs.nSPEs.clear();
   modrhs.spePulseIDs.clear();
   modrhs.nSEs.clear();
   modrhs.sePulseIDs.clear();
   modrhs.nOthers.clear();
   modrhs.otherPulseIDs.clear();
}
RQ::OtherScatters::~OtherScatters() {
}
#endif // RQ__OtherScatters_cxx

#ifndef RQ__PileUpScatters_cxx
#define RQ__PileUpScatters_cxx
RQ::PileUpScatters::PileUpScatters() {
}
RQ::PileUpScatters::PileUpScatters(const PileUpScatters & rhs)
   : TObject(const_cast<PileUpScatters &>( rhs ))
   , nPileUpScatters(const_cast<PileUpScatters &>( rhs ).nPileUpScatters)
   , nS1(const_cast<PileUpScatters &>( rhs ).nS1)
   , s1PulseIDs(const_cast<PileUpScatters &>( rhs ).s1PulseIDs)
   , nS2(const_cast<PileUpScatters &>( rhs ).nS2)
   , s2PulseIDs(const_cast<PileUpScatters &>( rhs ).s2PulseIDs)
{
   // This is NOT a copy constructor. This is actually a move constructor (for stl container's sake).
   // Use at your own risk!
   (void)rhs; // avoid warning about unused parameter
   PileUpScatters &modrhs = const_cast<PileUpScatters &>( rhs );
   modrhs.nS1.clear();
   modrhs.s1PulseIDs.clear();
   modrhs.nS2.clear();
   modrhs.s2PulseIDs.clear();
}
RQ::PileUpScatters::~PileUpScatters() {
}
#endif // RQ__PileUpScatters_cxx

#ifndef RQ__RQMCTruthEvent_cxx
#define RQ__RQMCTruthEvent_cxx
RQ::RQMCTruthEvent::RQMCTruthEvent() {
}
RQ::RQMCTruthEvent::RQMCTruthEvent(const RQMCTruthEvent & rhs)
   : TObject(const_cast<RQMCTruthEvent &>( rhs ))
   , runNumber(const_cast<RQMCTruthEvent &>( rhs ).runNumber)
   , derEvent(const_cast<RQMCTruthEvent &>( rhs ).derEvent)
   , baccEvent(const_cast<RQMCTruthEvent &>( rhs ).baccEvent)
   , parentParticle(const_cast<RQMCTruthEvent &>( rhs ).parentParticle)
   , parentVolume(const_cast<RQMCTruthEvent &>( rhs ).parentVolume)
   , parentPositionX_mm(const_cast<RQMCTruthEvent &>( rhs ).parentPositionX_mm)
   , parentPositionY_mm(const_cast<RQMCTruthEvent &>( rhs ).parentPositionY_mm)
   , parentPositionZ_mm(const_cast<RQMCTruthEvent &>( rhs ).parentPositionZ_mm)
   , parentEnergy_keV(const_cast<RQMCTruthEvent &>( rhs ).parentEnergy_keV)
   , parentDirectionX(const_cast<RQMCTruthEvent &>( rhs ).parentDirectionX)
   , parentDirectionY(const_cast<RQMCTruthEvent &>( rhs ).parentDirectionY)
   , parentDirectionZ(const_cast<RQMCTruthEvent &>( rhs ).parentDirectionZ)
   , parentTime_ns(const_cast<RQMCTruthEvent &>( rhs ).parentTime_ns)
{
   // This is NOT a copy constructor. This is actually a move constructor (for stl container's sake).
   // Use at your own risk!
   (void)rhs; // avoid warning about unused parameter
   RQMCTruthEvent &modrhs = const_cast<RQMCTruthEvent &>( rhs );
   modrhs.parentParticle.clear();
   modrhs.parentVolume.clear();
}
RQ::RQMCTruthEvent::~RQMCTruthEvent() {
}
#endif // RQ__RQMCTruthEvent_cxx

#ifndef RQ__RQMCTruthPulses_cxx
#define RQ__RQMCTruthPulses_cxx
RQ::RQMCTruthPulses::RQMCTruthPulses() {
}
RQ::RQMCTruthPulses::RQMCTruthPulses(const RQMCTruthPulses & rhs)
   : TObject(const_cast<RQMCTruthPulses &>( rhs ))
   , nRQMCTruthPulses(const_cast<RQMCTruthPulses &>( rhs ).nRQMCTruthPulses)
   , pulseIdentifier(const_cast<RQMCTruthPulses &>( rhs ).pulseIdentifier)
   , vertexNumber(const_cast<RQMCTruthPulses &>( rhs ).vertexNumber)
   , pheCount(const_cast<RQMCTruthPulses &>( rhs ).pheCount)
   , firstPheTime_ns(const_cast<RQMCTruthPulses &>( rhs ).firstPheTime_ns)
   , lastPheTime_ns(const_cast<RQMCTruthPulses &>( rhs ).lastPheTime_ns)
   , pmtIndices(const_cast<RQMCTruthPulses &>( rhs ).pmtIndices)
   , pmtHits(const_cast<RQMCTruthPulses &>( rhs ).pmtHits)
{
   // This is NOT a copy constructor. This is actually a move constructor (for stl container's sake).
   // Use at your own risk!
   (void)rhs; // avoid warning about unused parameter
   RQMCTruthPulses &modrhs = const_cast<RQMCTruthPulses &>( rhs );
   modrhs.pulseIdentifier.clear();
   modrhs.vertexNumber.clear();
   modrhs.pheCount.clear();
   modrhs.firstPheTime_ns.clear();
   modrhs.lastPheTime_ns.clear();
   modrhs.pmtIndices.clear();
   modrhs.pmtHits.clear();
}
RQ::RQMCTruthPulses::~RQMCTruthPulses() {
}
#endif // RQ__RQMCTruthPulses_cxx

#ifndef RQ__RQMCTruthVertices_cxx
#define RQ__RQMCTruthVertices_cxx
RQ::RQMCTruthVertices::RQMCTruthVertices() {
}
RQ::RQMCTruthVertices::RQMCTruthVertices(const RQMCTruthVertices & rhs)
   : TObject(const_cast<RQMCTruthVertices &>( rhs ))
   , nRQMCTruthVertices(const_cast<RQMCTruthVertices &>( rhs ).nRQMCTruthVertices)
   , volumeName(const_cast<RQMCTruthVertices &>( rhs ).volumeName)
   , particleName(const_cast<RQMCTruthVertices &>( rhs ).particleName)
   , time_ns(const_cast<RQMCTruthVertices &>( rhs ).time_ns)
   , positionX_mm(const_cast<RQMCTruthVertices &>( rhs ).positionX_mm)
   , positionY_mm(const_cast<RQMCTruthVertices &>( rhs ).positionY_mm)
   , positionZ_mm(const_cast<RQMCTruthVertices &>( rhs ).positionZ_mm)
   , electricFieldDirectionX(const_cast<RQMCTruthVertices &>( rhs ).electricFieldDirectionX)
   , electricFieldDirectionY(const_cast<RQMCTruthVertices &>( rhs ).electricFieldDirectionY)
   , electricFieldDirectionZ(const_cast<RQMCTruthVertices &>( rhs ).electricFieldDirectionZ)
   , energyDep_keV(const_cast<RQMCTruthVertices &>( rhs ).energyDep_keV)
   , rawS1Photons(const_cast<RQMCTruthVertices &>( rhs ).rawS1Photons)
   , rawS2Photons(const_cast<RQMCTruthVertices &>( rhs ).rawS2Photons)
   , rawScintPhotons(const_cast<RQMCTruthVertices &>( rhs ).rawScintPhotons)
   , s1PhotonHits(const_cast<RQMCTruthVertices &>( rhs ).s1PhotonHits)
   , s2PhotonHits(const_cast<RQMCTruthVertices &>( rhs ).s2PhotonHits)
   , scintPhotonHits(const_cast<RQMCTruthVertices &>( rhs ).scintPhotonHits)
   , detectedS1Photons(const_cast<RQMCTruthVertices &>( rhs ).detectedS1Photons)
   , detectedS2Photons(const_cast<RQMCTruthVertices &>( rhs ).detectedS2Photons)
   , detectedScintPhotons(const_cast<RQMCTruthVertices &>( rhs ).detectedScintPhotons)
   , s1PulseIndex(const_cast<RQMCTruthVertices &>( rhs ).s1PulseIndex)
   , s2PulseIndex(const_cast<RQMCTruthVertices &>( rhs ).s2PulseIndex)
   , scintillationPulseIndex(const_cast<RQMCTruthVertices &>( rhs ).scintillationPulseIndex)
   , artifactPulseIndices(const_cast<RQMCTruthVertices &>( rhs ).artifactPulseIndices)
{
   // This is NOT a copy constructor. This is actually a move constructor (for stl container's sake).
   // Use at your own risk!
   (void)rhs; // avoid warning about unused parameter
   RQMCTruthVertices &modrhs = const_cast<RQMCTruthVertices &>( rhs );
   modrhs.volumeName.clear();
   modrhs.particleName.clear();
   modrhs.time_ns.clear();
   modrhs.positionX_mm.clear();
   modrhs.positionY_mm.clear();
   modrhs.positionZ_mm.clear();
   modrhs.electricFieldDirectionX.clear();
   modrhs.electricFieldDirectionY.clear();
   modrhs.electricFieldDirectionZ.clear();
   modrhs.energyDep_keV.clear();
   modrhs.rawS1Photons.clear();
   modrhs.rawS2Photons.clear();
   modrhs.rawScintPhotons.clear();
   modrhs.s1PhotonHits.clear();
   modrhs.s2PhotonHits.clear();
   modrhs.scintPhotonHits.clear();
   modrhs.detectedS1Photons.clear();
   modrhs.detectedS2Photons.clear();
   modrhs.detectedScintPhotons.clear();
   modrhs.s1PulseIndex.clear();
   modrhs.s2PulseIndex.clear();
   modrhs.scintillationPulseIndex.clear();
   modrhs.artifactPulseIndices.clear();
}
RQ::RQMCTruthVertices::~RQMCTruthVertices() {
}
#endif // RQ__RQMCTruthVertices_cxx

#ifndef RQ__RQMCDarkCounts_cxx
#define RQ__RQMCDarkCounts_cxx
RQ::RQMCDarkCounts::RQMCDarkCounts() {
}
RQ::RQMCDarkCounts::RQMCDarkCounts(const RQMCDarkCounts & rhs)
   : TObject(const_cast<RQMCDarkCounts &>( rhs ))
   , nRQMCDarkCounts(const_cast<RQMCDarkCounts &>( rhs ).nRQMCDarkCounts)
   , pmtIndex(const_cast<RQMCDarkCounts &>( rhs ).pmtIndex)
   , time_ns(const_cast<RQMCDarkCounts &>( rhs ).time_ns)
{
   // This is NOT a copy constructor. This is actually a move constructor (for stl container's sake).
   // Use at your own risk!
   (void)rhs; // avoid warning about unused parameter
   RQMCDarkCounts &modrhs = const_cast<RQMCDarkCounts &>( rhs );
   modrhs.pmtIndex.clear();
   modrhs.time_ns.clear();
}
RQ::RQMCDarkCounts::~RQMCDarkCounts() {
}
#endif // RQ__RQMCDarkCounts_cxx

