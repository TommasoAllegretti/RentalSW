#include "home.h"

Home::Home() {
    //setSceneRect(0, 0, 1920, 1080);
    //loadBG();
    //loadButton();
    readXml();
}


void Home::loadButton() {
    qDebug()<< "Opened loadButton";
    QPushButton* playbtn = new QPushButton("Start");
        playbtn->setGeometry(width()/2-90, height()/2, 180, 90);
        playbtn->setStyleSheet("QPushButton {color: white;"
                               "font-size: 20px;"
                               "font-weight: bold;"
                               "background-color: rgba(0, 0, 0, 100);"
                               "border-radius: 10px;"
                               "outline: none;"
                               "outline-radius: 10px;"
                               "opacity: 0.9;}"
                               "QPushButton:hover {"
                               "background-color: rgba(150, 150, 150, 50);}");
        addWidget(playbtn);
}

void Home::loadBG() {
    QBrush brush(QColor(66, 103, 178));
    setBackgroundBrush(brush);
}

void Home::printXml(const QDomNode& node) {
    //qDebug() << "Opened printXml()";
    QDomNode domNode = node.firstChild();
    //qDebug() << domNode.toElement().text();

    while(!domNode.isNull()){
        if(domNode.isElement()){
            QDomElement domElement = domNode.toElement();
            if(!domElement.isNull()){
                if(domElement.tagName() == "car")
                    qDebug() << "ID: " << domElement.attribute("id", "");
                else
                    qDebug() << "\t" << domElement.tagName() << ":" << domElement.text();
            }
        }
        //qDebug() << "Opened while";
        //QDomElement domElement = domNode.toElement();
        //qDebug() << domElement.tagName() << " : " << domElement.text();
        printXml(domNode);
        domNode = domNode.nextSibling();
    }
}

void Home::readXml() {
    //qDebug() << "Opened readXml()" /*+ QCoreApplication::applicationDirPath()*/;
    QDomDocument doc;
    //qDebug() << "doc";
    QFile file("C:\\Users\\Tommaso\\Desktop\\RentalSW\\RentalSW\\xml\\vehicles.xml");
    //qDebug() << "Found file";
    if(file.open(QIODevice::ReadOnly)){
        //qDebug() << "1 if";
        if(doc.setContent(&file)){
            //qDebug() << "2 if";
            QDomElement elem = doc.documentElement();
           // qDebug() << elem.tagName();
            printXml(elem);
        }
        file.close();
    }
}

