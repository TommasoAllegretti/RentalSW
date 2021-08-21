#ifndef RENTALOBJECT_H
#define RENTALOBJECT_H

#include <String>

class RentalObject{
private:
    unsigned int id;
    string name;
    unsigned int daysN;
    static double dailyPrice;
    unsigned int km;
    unsigned int rating;
    bool extraInsurance;
protected:
public:
    double startRent();
    double getRentAmount() const;
    double terminateRent();
    double getRefundAmount() const;
    void extendContract();
    void reduceContract();

}

#endif // RENTALOBJECT_H
