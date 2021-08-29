#ifndef OFFROADVEHICLE_H
#define OFFROADVEHICLE_H

#include "rentalobject.h"

enum class tires { SoftT, MediumT, HardT };

class OffRoadVehicle: public RentalObject {
private:
    unsigned int trackCredits;
    tires defaultT;
    tires wantedT;
public:
    OffRoadVehicle(Container<bool>, unsigned int, QString, unsigned int, unsigned int, bool, double, unsigned int, tires, tires);
    //double getRentAmount() const override { return 0; }
    //double getRefundAmount() const override { return 0; }
};

#endif // OFFROADVEHICLE_H
