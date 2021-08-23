#ifndef HOMECONTROLLER_H
#define HOMECONTROLLER_H

#include <QObject>
#include "controller.h"
#include <QGraphicsScene>
#include "view/home.h"


class HomeController: public Controller {
    Q_OBJECT
private:
    Home* scene;
public:
    HomeController();
    QGraphicsScene* getScene() const;
};

#endif // HOMECONTROLLER_H
