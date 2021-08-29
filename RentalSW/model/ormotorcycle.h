#ifndef ORMOTORCYCLE_H
#define ORMOTORCYCLE_H

#include "offroadvehicle.h"

class ORMotorcycle: public OffRoadVehicle {
public:
    ORMotorcycle(unsigned int, QString, unsigned int, unsigned int, bool, double, unsigned int, tires, tires);
    double getRentAmount() const override { return 0; }
    double getRefundAmount() const override { return 0; }
};

#endif // ORMOTORCYCLE_H
