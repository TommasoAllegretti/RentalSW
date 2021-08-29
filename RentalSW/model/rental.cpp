#include "rental.h"

Rental::Rental() {
    lst.push_back(new ShowroomVehicle(1, "Special XJ600", 0, 5, true, 100.00, "Super Special Motorshow", false, 100, security::Medium));
    lst.push_back(new ShowroomVehicle(2, "BMW R45 Cafe Racer", 0, 3, true, 55.00, "Cafe Racer Show", true, 50, security::Low));
    lst.push_back(new ShowroomVehicle(3, "Suzuki DRZ400", 0, 2, true, 60.00, "Enduro Show", true, 50, security::Low));
    lst.push_back(new ShowroomVehicle(4, "Yamaha R1", 0, 4, true, 120.00, "Sport Show", false, 500, security::High));
    lst.push_back(new ShowroomVehicle(5, "Honda XL600", 0, 5, true, 80.00, "Enduro Meeting 2021", false, 10, security::None));
    lst.push_back(new ShowroomVehicle(6, "KTM Exc125", 0, 4, true, 35.00, "Off Road Racing", true, 80, security::None));
}


void Rental::printLst() {
    qDebug() << lst->id;
}
