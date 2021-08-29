#include "home.h"

Home::Home() {
    setSceneRect(0, 0, 1920, 1080);
    loadBG();
    loadButton();
    //loadLabels();
}


void Home::loadButton() {
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


