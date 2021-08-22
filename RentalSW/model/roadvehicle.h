#ifndef ROADVEHICLE_H
#define ROADVEHICLE_H

#include "rentalobject.h"


class RoadVehicle: protected RentalObject
{
private:
    double roadFee;
    unsigned int passengersN;
    bool highwayPass;
public:
    RoadVehicle();
    double getRentAmount() const override { return 0; }
    double getRefundAmount() const override { return 0; }
};

#endif // ROADVEHICLE_H
