#ifndef RENTALOBJECT_H
#define RENTALOBJECT_H

#include <string>

#include "day.h"

class RentalObject{
private:
    unsigned int id;
    std::string name;
    unsigned int daysN;
    unsigned int km;
    unsigned int rating;
    bool extraInsurance;
    static double dailyPrice;
protected:
public:
    double startRent();
    virtual double getRentAmount() const = 0;
    double terminateRent();
    virtual double getRefundAmount() const = 0;
    double extendContract();
    double reduceContract();

    RentalObject();
};

#endif // RENTALOBJECT_H
