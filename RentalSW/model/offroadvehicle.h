#ifndef OFFROADVEHICLE_H
#define OFFROADVEHICLE_H

#include "rentalobject.h"

class OffRoadVehicle : protected RentalObject
{
private:
    unsigned int trackCredits;
    enum tires { SoftT, MediumT, HardT };
public:
    OffRoadVehicle();
    double getRentAmount() const override;
    double getRefundAmount() const override;
};

#endif // OFFROADVEHICLE_H
