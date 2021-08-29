#ifndef SHOWROOMVEHICLE_H
#define SHOWROOMVEHICLE_H

#include "rentalobject.h"

enum class security { None, Low, Medium, High };

class ShowroomVehicle: public RentalObject {
private:
    QString showName;
    bool rentRoom;
    unsigned int specN;
    security showSec;
public:
    ShowroomVehicle(unsigned int, QString, unsigned int, unsigned int, bool, double, QString, bool, unsigned int, security);
    double getRentAmount() const override { return 0; }
    double getRefundAmount() const override { return 0; }
    void bookTimeframe() override {  }
    void freeTimeframe() override {  }

    ShowroomVehicle* clone() const override;
};

#endif // SHOWROOMVEHICLE_H
