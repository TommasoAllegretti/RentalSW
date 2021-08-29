#ifndef CAR_H
#define CAR_H

#include "roadvehicle.h"

class Car: public RoadVehicle {
private:
    bool ac;
    bool autoWind;
    bool gps;
public:
    Car(unsigned int, QString, unsigned int, unsigned int, bool, double, double, unsigned int, bool, bool, bool, bool);
    double getRentAmount() const override { return 0; }
    double getRefundAmount() const override { return 0; }
};

#endif // CAR_H
