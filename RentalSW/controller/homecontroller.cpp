#include "homecontroller.h"

HomeController::HomeController() : controller(), scene(new Home){

}

QGraphicsScene* HomeController::getScene() const { return scene; }
