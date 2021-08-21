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
    virtual double getRentAmount() const;
    double terminateRent();
    virtual double getRefundAmount() const;
    double extendContract();
    double reduceContract();
};

#endif // RENTALOBJECT_H
