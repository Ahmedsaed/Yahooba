#include <QApplication>
#include "game.h"
#include "welcomescreen.h"
#include <QObject>

Game * game;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    game = new Game();
    WelcomeScreen *screen = new WelcomeScreen();
    screen->show();

//    game->show();

    return a.exec();
}
