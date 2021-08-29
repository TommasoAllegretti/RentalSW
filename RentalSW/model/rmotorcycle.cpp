#include "rmotorcycle.h"

RMotorcycle::RMotorcycle(Container<bool> av, unsigned int i =0, QString n ="null", unsigned int k =0, unsigned int r =0, bool xI =false, double dP =0, double rF =0, unsigned int pN =0, bool hP =false, handleBars dHB =handleBars::Scrambler, handleBars wHB =handleBars::Scrambler)
    : RoadVehicle(av, i, n, k, r, xI, dP, rF, pN, hP), defaultHB(dHB), wantedHB(wHB) {

}
