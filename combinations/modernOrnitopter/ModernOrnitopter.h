//
// Created by syoma on 14.04.2022.
//

#ifndef LABARATORY_3_MODERNORNITOPTER_H
#define LABARATORY_3_MODERNORNITOPTER_H


#include "../../mover/flappingWing/FlappingWing.h"
#include "../../mover/jetNozzle/AircraftWithJetNozzle.h"

class ModernOrnitopter: public FlappingWing, public AircraftWithJetNozzle {
private:
    int version;
public:
    ModernOrnitopter(int version, int lengthWing, int dateLastClear, int temperature, int age, string color );
    void fly();
    void accelerate();
};


#endif //LABARATORY_3_MODERNORNITOPTER_H
