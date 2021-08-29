#include "mainwindow.h"
#include "mainwindowview.h"

#include "controller/controller.h"
#include "controller/homecontroller.h"

#include <QGraphicsScene>


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), view(new MainWindowView()), controller(new HomeController()) {
    setWindowTitle("QRental SW");
    setMinimumSize(QSize(1024, 480));
    setCentralWidget(view);
    setScreen(Routes::HomeScreen);
}

MainWindow::~MainWindow()
{
    delete view;
}

void MainWindow::setScreen(Routes r){
    if(controller)
        delete controller;
    switch(r) {
        default:
    case Routes::HomeScreen:
        controller = new HomeController;
    break;/*
    case Routes::ProductScreen:
        controller = new ProductController;
    break;
    case Routes::CheckoutScreen:
        controller = new CheckoutController;
    break;
    case Routes::MyRentsScreen:
        controller = new MyRentsController;
    break;
    case Routes::CancelScreen:
        controller = new CancelController;
    break;
    case Routes::EditScreen:
        controller = new EditController;
    break;*/

    }

    connect(controller, &Controller::goToScene, this, &MainWindow::setScreen);

    view->setScene(controller->getScene());

}











