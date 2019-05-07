#export DATABKG=/projecta/projectdirs/lz/data/MDC2/background/LZAP-3.1.0-PHYSICS-3.1.0
#export DATACAL=/projecta/projectdirs/lz/data/MDC2/calibration/LZAP-3.1.0-PHYSICS-3.1.0


# THESE LINES FOR SL6 
#source /cvmfs/sft.cern.ch/lcg/views/ROOT-latest/x86_64-slc6-gcc49-opt/setup.sh
#source /cvmfs/sft.cern.ch/lcg/app/releases/ROOT/6.06.08/x86_64-slc6-gcc49-opt/root/bin/thisroot.sh
#export LZANA_BUILD_CONFIG=x86_64-slc6-gcc49-opt


# THESE LINES FOR CENTOS 7 using CVMFS versions only
source /cvmfs/lz.opensciencegrid.org/external/gcc/8.2.0/x86_64-centos7/setup.sh 
source /cvmfs/lz.opensciencegrid.org/external/ROOT/6.16.00/x86_64-centos7-gcc7-opt/bin/thisroot.sh
export LZANA_BUILD_CONFIG=x86_64-centos7-gcc49-opt

