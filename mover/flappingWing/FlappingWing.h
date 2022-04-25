//
// Created by syoma on 14.04.2022.
//

#ifndef LABARATORY_3_FLAPPINGWING_H
#define LABARATORY_3_FLAPPINGWING_H

#include "../../aircraft/Aircraft.h"

class FlappingWing : Aircraft{

private:
    int lengthWing;

public:
    FlappingWing(int lengthWing, int age, string color);
    void run() override;
    void lubricationWing();
    void printLength();
};


#endif //LABARATORY_3_FLAPPINGWING_H
