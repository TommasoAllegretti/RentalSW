#ifndef SHOWROOMVEHICLE_H
#define SHOWROOMVEHICLE_H

#include "rentalobject.h"


class ShowroomVehicle: protected RentalObject
{
private:
    std::string showName;
    bool rentRoom;
    unsigned int specN;
    enum security { None, Low, Medium, High };
public:
    ShowroomVehicle();
    double getRentAmount() const override { return 0; }
    double getRefundAmount() const override { return 0; }
};

#endif // SHOWROOMVEHICLE_H
