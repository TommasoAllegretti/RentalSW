#ifndef HOME_H
#define HOME_H

#include <QGraphicsScene>
#include <QPushButton>
#include <QPalette>
#include <QBrush>
#include <QDebug>
#include <QLabel>

class Home: public QGraphicsScene {
    Q_OBJECT
private:
    void loadButton();
    void loadBG();
    void loadLabels();
public:
    Home();
};

#endif // HOME_H
