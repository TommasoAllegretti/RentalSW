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
    double getRentAmount() const override;
    double getRefundAmount() const override;
};

#endif // SHOWROOMVEHICLE_H
