#include "atv.h"

Atv::Atv(Container<bool> av, unsigned int i =0, QString n ="null", unsigned int k =0, unsigned int r =0, bool xI =false, double dP =0, unsigned int tC =0, tires d =tires::SoftT, tires w =tires::SoftT)
    : OffRoadVehicle(av, i, n, k, r, xI, dP,tC, d, w) {

}

