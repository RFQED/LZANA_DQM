#ifndef Cuts_H
#define Cuts_H

#include "Event.h"

class Cuts {
public:
  Cuts(Event* event);
  ~Cuts();

  bool CoreCutsOK();

private:
  
  Event* m_event;

};

#endif
