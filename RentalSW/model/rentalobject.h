#ifndef RENTALOBJECT_H
#define RENTALOBJECT_H

#include <string>
#include <QString>
#include "container.h"

class RentalObject{
private:
    bool AV[30];
    unsigned int id;
    QString name;
    unsigned int km;
    unsigned int rating;
    bool extraInsurance;
    double dailyPrice;
protected:
public:
    RentalObject(unsigned int, QString, unsigned int, unsigned int, bool, double);
    virtual ~RentalObject() =default;

    virtual void bookTimeframe() = 0;
    virtual double getRentAmount() const = 0;
    double startRent();

    virtual void freeTimeframe() = 0;
    virtual double getRefundAmount() const = 0;
    double terminateRent();
    double extendContract();
    double reduceContract();

    virtual RentalObject* clone() const =0;
};

#endif // RENTALOBJECT_H
