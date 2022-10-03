#ifndef NIDAQ_H
#define NIDAQ_H

#include "NIDAQmx.h"

class NIdaq
{
private:
    TaskHandle mTaskHandGx;//AO 0
    TaskHandle mTaskHandGy;//AO 1
    TaskHandle mTaskHandECLK;//
    TaskHandle mTaskHandBTrig;//
    TaskHandle mTaskHandArmRecieve;//
    TaskHandle mTaskHandArmTrig;//
public:
    NIdaq();
    int daqInit();
    int daqCfg();// cfg each channel(timing,triggr), prepare data for Gx, Gy, Btrig,
    int daqStart();// arm the daq
};

#endif // NIDAQ_H
