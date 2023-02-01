#include "welcomescreen.h"
#include <QGraphicsTextItem>
#include <QLineEdit>
#include <QGraphicsProxyWidget>
#include <QBrush>
#include <QImage>
#include <QPushButton>
#include <iostream>
#include "game.h"
#include "qglobal.h"
#include <QGuiApplication>
#include <QScreen>
#include <deck.h>

extern Game * game;

WelcomeScreen::WelcomeScreen()
{
    welcomeText = new QGraphicsTextItem();
    welcomeText->setPlainText("Welcome To Yahooba");
    welcomeText->setDefaultTextColor(Qt::red);
    welcomeText->setFont(QFont("Arial Black", 24, 80));
    int width = game->scene->width()/2-welcomeText->boundingRect().width()/2, height = game->scene->height()/2-welcomeText->boundingRect().height()/2-120;
    welcomeText->setPos(width,
                        height);

    game->scene->addItem(welcomeText);

    userNameLineEdit = new QLineEdit();
    userNameLineEdit->setPlaceholderText("Plase Enter Your Name");
    QGraphicsProxyWidget *userNameField = game->scene->addWidget(userNameLineEdit);
    userNameField->setGeometry(QRect(0,0,300,60));
    userNameField->setFont(QFont("times", 20));
    userNameField->setPos(game->scene->width()/2-userNameField->boundingRect().width()/2,
                  game->scene->height()/2-userNameField->boundingRect().height()/2-60);

    submitBtn = new QPushButton("");
    submitBtn->setText("Continue");
    QGraphicsProxyWidget *submitBtnProxy = game->scene->addWidget(submitBtn);
    submitBtnProxy->setPos(game->scene->width()/2-submitBtnProxy->boundingRect().width()/2,
                  game->scene->height()/2-submitBtnProxy->boundingRect().height()/2);

    QObject::connect(submitBtn, &QPushButton::clicked, this, &WelcomeScreen::setPlayerName);
}

void WelcomeScreen::setPlayerName()
{
    game->setPlayerName(userNameLineEdit->text());
    game->showGameDeck();
}
