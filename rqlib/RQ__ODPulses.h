//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Mon May  6 11:34:43 2019 by ROOT version 6.06/08)
//      from the StreamerInfo in file /hepstore/burdin/data/lz_Miniproduction_1_lzap.root
//////////////////////////////////////////////////////////


#ifndef RQ__ODPulses_h
#define RQ__ODPulses_h
namespace RQ {
class ODPulses;
} // end of namespace.

#include "TObject.h"
#include "Riostream.h"
#include <vector>
namespace std {} using namespace std;
namespace std {} using namespace std;
namespace std {} using namespace std;
namespace std {} using namespace std;
namespace std {} using namespace std;
namespace std {} using namespace std;
namespace std {} using namespace std;
namespace std {} using namespace std;
namespace std {} using namespace std;

namespace RQ {
class ODPulses : public TObject {

public:
// Nested classes declaration.

public:
// Data Members.
   int         nPulses;     /// Number of pulses found in this detector in this event
   int         maxCoincidence;    //maximum coincidence of pulses in this event, may be useful for energy recon
   vector<int> pulseID;           /// ID of the pulse (time ordered)
   vector<int> pulseStartTime_ns;    /// [ns]; Start time of pulse relative to event trigger time
   vector<int> pulseEndTime_ns;      //[ns]; End time of pulse relative to event trigger time
   vector<bool> saturated;            //Is at least one channel of the pulse saturated
   vector<int>  nSaturatedChannels;    //Number of saturated channels
   vector<vector<unsigned int> > saturatedChannelIDs;    //ChannelIDs of the channels that are saturated
   vector<float>                 pulseArea_phd;          //[phd]; Total area of summed pod from pulse start to end
   vector<float>                 positiveArea_phd;       //[phd]; Total positive area of summed pod from pulse start to end
   vector<float>                 negativeArea_phd;       //[phd]; Total negative area of summed pod from pulse start to end
   vector<float>                 peakAmp;                //[phd/sample]; Max amplitude of summed pod within pulse
   vector<int>                   peakTime_ns;            //[ns]; Time at which summed pod reaches maximum within pulse
   vector<int>                   areaFractionTime1_ns;    //[ns]; Time at which summed pod reaches 1% of total area; ns relative to pulse start
   vector<int>                   areaFractionTime5_ns;    //[ns]; Time at which summed pod reaches 5% of total area; ns relative to pulse start
   vector<int>                   areaFractionTime10_ns;    //[ns]; Time at which summed pod reaches 10% of total area; ns relative to pulse start
   vector<int>                   areaFractionTime25_ns;    //[ns]; Time at which summed pod reaches 25% of total area; ns relative to pulse start
   vector<int>                   areaFractionTime50_ns;    //[ns]; Time at which summed pod reaches 50% of total area; ns relative to pulse start
   vector<int>                   areaFractionTime75_ns;    //[ns]; Time at which summed pod reaches 75% of total area; ns relative to pulse start
   vector<int>                   areaFractionTime90_ns;    //[ns]; Time at which summed pod reaches 90% of total area; ns relative to pulse start
   vector<int>                   areaFractionTime95_ns;    //[ns]; Time at which summed pod reaches 95% of total area; ns relative to pulse start
   vector<int>                   areaFractionTime99_ns;    //[ns]; Time at which summed pod reaches 99% of total area; ns relative to pulse start
   vector<int>                   promptFraction200ns;      //
   vector<float>                 promptFraction50ns;       //Fraction of summed pod area in 50 ns window at start of pulse relative to total pulse area; 50 ns window defined from 10 ns before to 40 ns after aft5
   vector<int>                   rmsWidth_ns;              //[ns];
   vector<int>                   coincidence;              //Number of channels that had non-zero contribution to pulse
   vector<float>                 pulseZPosition;           //
   vector<float>                 pulsePhiPosition;         //
   vector<float>                 pulseTheta;               //reconstructed angle in theta
   vector<vector<int> >          chID;                     //Channel ID for the corresponding channel in the chPulseArea_phd branch
   vector<vector<float> >        chPulseArea_phd;          //[phd]; Pulse area for each channel. If channel is not present in chID branch, then pulse area is zero for that channel.
   vector<vector<float> >        chPeakAmp;                //[phd/sample]; Pulse height for each channel.
   vector<vector<int> >          chPeakTime_ns;            //[ns]; Time of peak for each channel; ns relative to pulse start time
   vector<vector<bool> >         chSaturated;              //Saturation flag for each channel.
   vector<vector<int> >          chPhotonCount;            //Pulse photon count for each channel. Photon count is not evaluated for all pulses.
   vector<vector<float> >        chZPosition;              //
   vector<vector<float> >        chPhiPosition;            //

   ODPulses();
   ODPulses(const ODPulses & );
   virtual ~ODPulses();

   ClassDef(ODPulses,4); // Generated by MakeProject.
};
} // namespace
#endif