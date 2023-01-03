#include "welcomescreen.h"
#include <QGraphicsTextItem>
#include <QLineEdit>
#include <QGraphicsProxyWidget>
#include <QBrush>
#include <QImage>
#include <QPushButton>
#include <iostream>
#include "game.h"
#include <QGuiApplication>
#include <QScreen>

extern Game * game;

WelcomeScreen::WelcomeScreen(QWidget *parent)
{
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

    welcomeText = new QGraphicsTextItem();
    welcomeText->setPlainText("Welcome To Yahooba");
    welcomeText->setDefaultTextColor(Qt::red);
    welcomeText->setFont(QFont("Arial Black", 24, 80));
    welcomeText->setPos(scene->width()/2-welcomeText->boundingRect().width()/2,
                        scene->height()/2-welcomeText->boundingRect().height()/2-120);

    scene->addItem(welcomeText);

    userNameLineEdit = new QLineEdit();
    userNameLineEdit->setPlaceholderText("Plase Enter Your Name");
    QGraphicsProxyWidget *userNameField = scene->addWidget(userNameLineEdit);
    userNameField->setGeometry(QRect(0,0,300,60));
    userNameField->setFont(QFont("times", 20));
    userNameField->setPos(scene->width()/2-userNameField->boundingRect().width()/2,
                  scene->height()/2-userNameField->boundingRect().height()/2-60);

    submitBtn = new QPushButton("");
    submitBtn->setText("Continue");
    QGraphicsProxyWidget *submitBtnProxy = scene->addWidget(submitBtn);
    submitBtnProxy->setPos(scene->width()/2-submitBtnProxy->boundingRect().width()/2,
                  scene->height()/2-submitBtnProxy->boundingRect().height()/2);

    QObject::connect(submitBtn, &QPushButton::clicked, this, &WelcomeScreen::setPlayerName);
}

void WelcomeScreen::setPlayerName()
{
    game->setPlayerName(userNameLineEdit->text());
    hide();
    game->deck->show();
}
