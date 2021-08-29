#ifndef ATV_H
#define ATV_H

#include "offroadvehicle.h"

class Atv: public OffRoadVehicle {
public:
    Atv(Container<bool>, unsigned int, QString, unsigned int, unsigned int, bool, double, unsigned int, tires, tires);
    double getRentAmount() const override { return 0; }
    double getRefundAmount() const override { return 0; }
};

#endif // ATV_H
