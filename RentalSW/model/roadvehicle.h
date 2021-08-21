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
    double getRentAmount() const override;
    double getRefundAmount() const override;
};

#endif // ROADVEHICLE_H
