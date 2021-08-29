#include "car.h"

Car::Car(unsigned int i =0, QString n ="null", unsigned int k =0, unsigned int r =0, bool xI =false, double dP =0, double rF =0, unsigned int pN =0, bool hP =false, bool a =false, bool aW =false, bool g =false)
    : RoadVehicle(i, n, k, r, xI, dP, rF, pN, hP), ac(a), autoWind(aW), gps(g) {

}
