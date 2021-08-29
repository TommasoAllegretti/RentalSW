#ifndef RENTAL_H
#define RENTAL_H

#include "container.h"
#include "deepptr.h"
#include "rentalobject.h"
#include "showroomvehicle.h"

class Rental {
private:
    Container<DeepPtr<RentalObject>> lst;
public:
    Rental();
};

#endif // RENTAL_H
