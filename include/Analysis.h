#ifndef Analysis_H
#define Analysis_H

#include <string>

class TStopwatch;

class Event;
class Cuts;
class HistSvc;
class ConfigSvc;

class Analysis {

public:
  Analysis();
  virtual ~Analysis();
  void Run(std::string filelist = "MDC3_BackgroundFiles.list", std::string outname = "hists.root");
  bool Load(std::string filelist);
  void Write(std::string name, std::string mode);
  // Methods that must be implemented in derived class
  virtual void Initialize() = 0;
  virtual void Execute() = 0;
  virtual void Finalize() = 0;


protected:
  Event* m_event;
  Cuts* m_cuts;
  HistSvc* m_hists;
  ConfigSvc* m_config;
  TStopwatch* m_clock;

private:

};

#endif
