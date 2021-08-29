#include "rentalobject.h"

RentalObject::RentalObject(unsigned int i =0, QString n ="null", unsigned int k =0, unsigned int r =0, bool xI =false, double dP =0)
                        : id(i), name(n), km(k), rating(r), extraInsurance(xI), dailyPrice(dP) {
    for(int i = 0; i < 30; i++){
        AV[i] = false;
    }
}

double RentalObject::startRent() {

}
