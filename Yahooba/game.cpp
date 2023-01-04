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
    player = new Player(nRounds);
    WelcomeScreen *screen = new WelcomeScreen();
    screen->show();

    // Play Background music
//    QMediaPlayer * music = new QMediaPlayer();
//    music->setMedia(QUrl("qrc:/sounds/bgsound.mp3"));
    //    music->play();
}

void Game::setPlayerName(const QString &newPlayerName)
{
    player->playerName = newPlayerName;
}
