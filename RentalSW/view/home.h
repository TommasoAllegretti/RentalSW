#ifndef HOME_H
#define HOME_H

#include <QGraphicsScene>
#include <QPushButton>
#include <QPalette>
#include <QBrush>
#include <QtXml>
#include <QDebug>
#include <QFile>
#include <QLabel>

class Home: public QGraphicsScene {
    Q_OBJECT
private:
    void loadButton();
    void loadBG();
    void readXml();
    void printXml(const QDomNode&);
public:
    Home();
};

#endif // HOME_H
