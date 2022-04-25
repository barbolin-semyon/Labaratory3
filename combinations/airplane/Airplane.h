    //
// Created by syoma on 14.04.2022.
//

#ifndef LABARATORY_3_AIRPLANE_H
#define LABARATORY_3_AIRPLANE_H


#include "../../mover/paddlePropeller/AircraftWithPaddlePropeller.h"
#include "../../mover/jetNozzle/AircraftWithJetNozzle.h"

class Airplane : public AircraftWithJetNozzle, public AircraftWithPaddlePropeller {
private:
    int dateLastClearToilet;

public:
    Airplane(
            int dateLastClearToilet,
            int dateLastClearJetNozzle,
            int temperature,
            bool directionPaddlePropeller,
            int age,
            string color
            );
    void changeOfOwnership(int ownership);
    void clearToilet();
};


#endif //LABARATORY_3_AIRPLANE_H
