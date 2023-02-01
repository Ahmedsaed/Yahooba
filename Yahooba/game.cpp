#include "game.h"
#include <QBrush>
#include <QImage>
#include <QMediaPlayer>
#include "player.h"
#include "welcomescreen.h"
#include <QScreen>
#include <QGuiApplication>

Game::Game() : nRounds(5)
{
    scene = new QGraphicsScene();
    screen = QGuiApplication::primaryScreen();
    QRect  screenGeometry = screen->geometry();
    height = screenGeometry.height();
    width = screenGeometry.width();
    scene->setSceneRect(0,0,width,height);
    scene->setBackgroundBrush(QBrush(QImage(":/images/background.jpg").scaledToWidth(width)));
    setScene(scene);
    setWindowState(Qt::WindowFullScreen);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    player = new Player(nRounds);

    // Play Background music
//    QMediaPlayer * music = new QMediaPlayer();
//    music->setMedia(QUrl("qrc:/sounds/bgsound.mp3"));
    //    music->play();

    show();
}

void Game::setPlayerName(const QString &newPlayerName)
{
    player->playerName = newPlayerName;
}

void Game::showWelcomeScreen()
{
    welcomScreen = new WelcomeScreen();
}

void Game::showGameDeck()
{
    clearScene();
    deck = new Deck();
}

void Game::clearScene()
{
    foreach (QGraphicsItem *item, scene->items()) {
        scene->removeItem(item);
    }
}


