#ifndef LABARATORY_3_AIRCRAFTWITHPADDLEPROPELLER_H
#define LABARATORY_3_AIRCRAFTWITHPADDLEPROPELLER_H


#include "../../aircraft/Aircraft.h"

    class AircraftWithPaddlePropeller : public Aircraft {
private:
    bool direction;
public:
    AircraftWithPaddlePropeller(bool direction, int age, string color);
    void run();
    void replacementPaddlePropeller();
    void reverse();
};


#endif //LABARATORY_3_AIRCRAFTWITHPADDLEPROPELLER_H
