#ifndef RMOTORCYCLE_H
#define RMOTORCYCLE_H

#include "roadvehicle.h"

enum class handleBars { CafeRacer, Scrambler, Sport, ApeHangers };

class RMotorcycle: public RoadVehicle {
private:
    handleBars defaultHB;
    handleBars wantedHB;
public:
    RMotorcycle(Container<bool>, unsigned int, QString, unsigned int, unsigned int, bool, double, double, unsigned int, bool, handleBars dHB, handleBars wHB);
    double getRentAmount() const override { return 0; }
    double getRefundAmount() const override { return 0; }
};

#endif // RMOTORCYCLE_H
