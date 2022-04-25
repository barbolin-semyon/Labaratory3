
#ifndef LABARATORY_3_AIRCRAFTWITHJETNOZZLE_H
#define LABARATORY_3_AIRCRAFTWITHJETNOZZLE_H

#include "../../aircraft/Aircraft.h"

class AircraftWithJetNozzle : protected Aircraft {
private:
    int dateLastClear;
    int temperature;
public:
    AircraftWithJetNozzle(int dateLastClear, int temperature, int age, string color);
    void run() override;
    void clearJetNozzle();
    void checkTemperature();
};


#endif //LABARATORY_3_AIRCRAFTWITHJETNOZZLE_H
