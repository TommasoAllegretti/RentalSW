#include "homecontroller.h"

HomeController::HomeController() : Controller(), scene(new Home){

}

QGraphicsScene* HomeController::getScene() const { return scene; }
