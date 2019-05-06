#include "Cuts.h"

Cuts::Cuts(Event* event) {
  m_event = event;
}

Cuts::~Cuts() {
  
}

bool Cuts::CoreCutsOK() {
  return (m_event->NInteractions() == 1);
}
