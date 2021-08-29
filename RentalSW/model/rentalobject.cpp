#include "rentalobject.h"

RentalObject::RentalObject(Container<bool> av, unsigned int i =0, QString n ="null", unsigned int k =0, unsigned int r =0, bool xI =false, double dP =0)
                        : availability(av), id(i), name(n), km(k), rating(r), extraInsurance(xI), dailyPrice(dP) {

}
