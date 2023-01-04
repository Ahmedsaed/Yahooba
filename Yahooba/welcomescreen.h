#ifndef WELCOMESCREEN_H
#define WELCOMESCREEN_H
#include <QGraphicsView>
#include <QString>
#include <QLineEdit>
#include <QPushButton>


class WelcomeScreen : public QGraphicsView
{
public:
    WelcomeScreen();

    QGraphicsScene *scene;
    QGraphicsTextItem *welcomeText;
    QLineEdit *userNameLineEdit;
    QPushButton *submitBtn;

public slots:
    void setPlayerName();
};

#endif // WELCOMESCREEN_H
