#include "deck.h"
#include "card.h"
#include <QMap>
#include <QScreen>
#include <QGuiApplication>
#include "game.h"

extern Game * game;

Deck::Deck(QWidget *parent)
{
    cards["bomba"] = new Card(0, "bomba");
    cards["avatar"] = new Card(0, "avatar");
    cards["colossal"] = new Card(0, "colossal");
    cards["detonator"] = new Card(0, "detonator");
    cards["eradicator"] = new Card(0, "eradicator");
    cards["ethan"] = new Card(0, "ethan");
    cards["gogo"] = new Card(0, "gogo");
    cards["harold"] = new Card(0, "harold");
    cards["leo"] = new Card(0, "leo");
    cards["kane"] = new Card(0, "kane");
    cards["liam"] = new Card(0, "liam");
    cards["lewis"] = new Card(0, "lewis");
    cards["nuker"] = new Card(0, "nuker");
    cards["pop"] = new Card(0, "pop");
    cards["ventura"] = new Card(0, "ventura");

    scene = new QGraphicsScene();
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect  screenGeometry = screen->geometry();
    int height = screenGeometry.height();
    int width = screenGeometry.width();
    scene->setSceneRect(0,0,width,height);
    scene->setBackgroundBrush(QBrush(QImage(":/images/background.jpg").scaledToWidth(width)));
    setScene(scene);
    setWindowState(Qt::WindowFullScreen);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);


    int x = 0, y = 0;
    for(auto &card : cards) {
        card->setPos(x, y);
        scene->addItem(card);
        if (x>=700) {
            x = 0;
            y += card->boundingRect().height()*card->scaleRatio;
        }
        else x += card->boundingRect().width()*card->scaleRatio;
    }
}
