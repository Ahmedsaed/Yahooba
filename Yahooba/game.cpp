#include "game.h"
#include <QBrush>
#include <QImage>
#include <QMediaPlayer>

Game::Game(QWidget *parent)
{
    playerName = "";

    // Create the scene
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,800,600);
    scene->setBackgroundBrush(QBrush(QImage(":/images/background.jpg")));

    // set the scene which will be displayed at the widget
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(800,600);



    card = new Card();
    scene->addItem(card);

    // Play Background music
//    QMediaPlayer * music = new QMediaPlayer();
//    music->setMedia(QUrl("qrc:/sounds/bgsound.mp3"));
//    music->play();

    //    show();
}

QString Game::getPlayerName() const
{
    return playerName;
}

void Game::setPlayerName(const QString &newPlayerName)
{
    playerName = newPlayerName;
}
