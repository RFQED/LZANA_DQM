#include "DQM.h"
#include "ConfigSvc.h"
#include <string>
#include "AbsPath.h"

int main(int argc, char* argv[]) {

  // Crate config svc to read from unique config file
  string confFileRel("config/DQM.config");
  //  string confFile = (string)AbsolutePathIn + confFileRel;

  ConfigSvc* config = ConfigSvc::Instance(argc, argv, confFileRel, (string)AbsolutePathIn);

  // Create analysis code and run
  Analysis* ana = new DQM();
  ana->Run(config->FileList, config->OutName);

  // Clean up
  delete ana;
  delete config;

  return 0;
}
