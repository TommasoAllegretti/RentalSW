#include "showroomvehicle.h"

ShowroomVehicle::ShowroomVehicle(Container<bool> av, unsigned int i =0, QString n ="null", unsigned int k =0, unsigned int r =0, bool xI =false, double dP =0, QString sN ="", bool rR =false, unsigned int spN =0, security sS =security::None)
    : RentalObject(av, i, n, k, r, xI, dP), showName(sN), rentRoom(rR), specN(spN), showSec(sS) {

}
