#include <QApplication>
#include "game.h"
#include <QObject>

Game * game;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    game = new Game();
    game->showWelcomeScreen();

    return a.exec();
}
