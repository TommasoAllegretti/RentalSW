#ifndef RENTALOBJECT_H
#define RENTALOBJECT_H

#include <string>
#include <QString>
#include "container.h"

class RentalObject{
private:
    Container<bool> availability;
    unsigned int id;
    QString name;
    unsigned int km;
    unsigned int rating;
    bool extraInsurance;
    double dailyPrice;
protected:
public:
    RentalObject(Container<bool>, unsigned int, QString, unsigned int, unsigned int, bool, double);
    double startRent();
    virtual double getRentAmount() const = 0;
    double terminateRent();
    virtual double getRefundAmount() const = 0;
    double extendContract();
    double reduceContract();
};

#endif // RENTALOBJECT_H
