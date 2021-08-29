#include "roadvehicle.h"

RoadVehicle::RoadVehicle(Container<bool> av, unsigned int i =0, QString n ="null", unsigned int k =0, unsigned int r =0, bool xI =false, double dP =0, double rF =0, unsigned int pN =0, bool hP =false)
    : RentalObject(av, i, n, k, r, xI, dP), roadFee(rF), passengersN(pN), highwayPass(hP) {

}
