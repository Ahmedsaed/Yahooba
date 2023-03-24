#include "game.h"
#include <QBrush>
#include <QImage>
#include <QMediaPlayer>
#include "player.h"
#include "welcomescreen.h"
#include <QScreen>
#include <QGuiApplication>
#include <QGraphicsProxyWidget>

Game::Game() : nRounds(5)
{
    scene = new QGraphicsScene();
    screen = QGuiApplication::primaryScreen();
    QRect  screenGeometry = screen->geometry();
    height = screenGeometry.height();
    width = screenGeometry.width();
    scene->setSceneRect(0,0,width,height);
    scene->setBackgroundBrush(QBrush(QImage(":/Assets/Images/background.jpg").scaledToWidth(width)));
    setScene(scene);
    setWindowState(Qt::WindowFullScreen);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    player = new Player(nRounds);

    muteBtn = new QPushButton("");
    muteBtn->setText("Mute");
    muteBtnProxy = scene->addWidget(muteBtn);
    muteBtnProxy->setPos(width-muteBtnProxy->boundingRect().width()-10,
                  height-muteBtnProxy->boundingRect().height()-10);

    quitBtn = new QPushButton("");
    quitBtn->setText("Quit");
    quitBtnProxy = scene->addWidget(quitBtn);
    quitBtnProxy->setPos(width-quitBtnProxy->boundingRect().width()-muteBtnProxy->boundingRect().width()-20,
                  height-quitBtnProxy->boundingRect().height()-10);

    QObject::connect(muteBtn, &QPushButton::clicked, this, &Game::quitGame);
    QObject::connect(quitBtn, &QPushButton::clicked, this, &Game::quitGame);

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
        if (item == muteBtnProxy || item == quitBtnProxy) continue;
        scene->removeItem(item);
    }
}

void Game::quitGame()
{
    QGuiApplication::quit();
}


