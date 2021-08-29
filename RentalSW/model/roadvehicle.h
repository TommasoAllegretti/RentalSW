#ifndef ROADVEHICLE_H
#define ROADVEHICLE_H

#include "rentalobject.h"


class RoadVehicle: public RentalObject {
private:
    double roadFee;
    unsigned int passengersN;
    bool highwayPass;
public:
    RoadVehicle(unsigned int, QString, unsigned int, unsigned int, bool, double, double, unsigned int, bool);
    //double getRentAmount() const override { return 0; }
    //double getRefundAmount() const override { return 0; }
};

#endif // ROADVEHICLE_H
