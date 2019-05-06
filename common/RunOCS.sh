#!/bin/bash

#for rootfile in /bundle/data/LZ/MDC3_miniProduction/lz_Miniproduction_1?_lzap.root
#for rootfile in /bundle/data/LZ/fibre1*.root
for rootfile in /hepstore/efraser/OCSdata/data/PhotonSweep_FibreScan_1kPhotons_1kEvents/OCS_F[1-9]_*.root
  do
  echo "$rootfile"
  PBNum=${rootfile:77:1}
  id=${rootfile:72:6}
#     PBNum=${rootfile:54:1}
  echo "$id"
  echo "$PBNum"
  dname="LZDQ_"$id"/dqsetmeta.xml"
  echo "$dname"
  root -l -b -q ./dqplotsOCS.C+(\"$rootfile\",$((10#$PBNum)))
  root -l -b -q ./readaddxmldq2a.C+(\"testdqsets.xml\",\"$dname\",\"testdqsets.xml\")
  root -l -b -q ./readaddxmldq2a.C+(\"refdq.xml\",\"$dname\",\"refdq.xml\")
  root -l -b -q ./produceHistoryPlots.C+(\"$dname\")
#     pdfnup NphVStrwidthPB$PBNum.pdf PulseWidthVSnphPB$PBNum.pdf --nup 1x2 --no-landscape -o joint.pdf
#     pdfnup nphPB$PBNum.pdf joint.pdf -o FPGAch$PBNum.pdf
#     rm joint.pdf
done;

 
