#include "NIdaq.h"
#include "NIDAQmx.h"
NIdaq::NIdaq():mTaskHandGx(0),mTaskHandGy(0),mTaskHandECLK(0),mTaskHandBTrig(0),mTaskHandArmRecieve(0),mTaskHandArmTrig(0)
{

}

int NIdaq::daqInit()
{
    DAQmxCreateTask("", &mTaskHandGx);
    DAQmxCreateTask("", &mTaskHandGy);
    DAQmxCreateTask("", &mTaskHandECLK);
    DAQmxCreateTask("", &mTaskHandBTrig);
    DAQmxCreateTask("", &mTaskHandArmRecieve);
    DAQmxCreateTask("", &mTaskHandArmTrig);
    return 1;
}

int NIdaq::daqCfg()
{
    return 1;
}
