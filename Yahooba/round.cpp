#include "round.h"
#include <QGuiApplication>
#include <QScreen>
#include "game.h"
#include <QGraphicsTextItem>
#include <QDebug>
#include <stdlib.h>
#include <QTimer>

extern Game * game;

Round::Round()
{
    state = 1;

    header = new QGraphicsTextItem();
    header->setPlainText("Round "+QString::number(round));
    header->setDefaultTextColor(Qt::red);
    header->setFont(QFont("Arial Black", 32, 80));
    header->setPos(game->scene->width()/2-header->boundingRect().width()/2,
                        game->scene->height()/2-header->boundingRect().height()/2-50);

    game->scene->addItem(header);

    text = new QGraphicsTextItem();
    text->setPlainText("Pick a card to fight with");
    text->setDefaultTextColor(Qt::red);
    text->setFont(QFont("Arial Black", 20, 80));
    text->setPos(game->scene->width()/2-text->boundingRect().width()/2,
                        game->scene->height()/2-text->boundingRect().height()/2+50);

    game->scene->addItem(text);

    displayCards();
}

void Round::displayCards()
{
    for(int i = 0; i < game->nRounds; i++) {
        Card *card = &game->player->cards[i];
        card->setPixmap(QPixmap(":/images/"+card->getName()+".jpeg"));
        int x = game->width/2 - card->boundingRect().width()*card->scaleRatio*(game->nRounds)/2;
        int y = game->height - card->boundingRect().height()*card->scaleRatio;
        card->setPos(x+(i*card->boundingRect().width()*card->scaleRatio), y);
        card->owner = 0;
        game->scene->addItem(card);
    }

    for(int i = 0; i < game->nRounds; i++) {
        Card *card = &game->op->cards[i];
        card->setPixmap(QPixmap(":/images/card_back.jpg").scaledToWidth(QPixmap(":/images/gogo.jpeg").width()));
        int x = game->width/2 - card->boundingRect().width()*card->scaleRatio*(game->nRounds)/2;
        int y = 0;
        card->setPos(x+(i*card->boundingRect().width()*card->scaleRatio), y);
        card->owner = 1;
        game->scene->addItem(card);
    }
}

void Round::handleMouseClick(Card *playerCard)
{
    if (state != 1) return;
    state = 2;
    if (!playerCard->picked) {
        Card *opCard;
        moveCard(playerCard);
        while(true) {
            int n = rand() % game->nRounds;
            opCard = &game->op->cards[n];
            if (opCard->picked == true) continue;
            moveCard(opCard);
            break;
        }
        header->setPlainText("VS");
        header->setFont(QFont("Arial Black", 32, 80));
        header->setPos(game->scene->width()/2-header->boundingRect().width()/2,
                       game->scene->height()/2-header->boundingRect().height()/2);
        game->scene->removeItem(text);

        QTimer * timer = new QTimer();
        QObject::connect(timer, &QTimer::timeout, this, [&, playerCard, opCard]{ playRound(playerCard, opCard); });
        timer->start(1000);
        timer->setSingleShot(true);
    }
}

void Round::moveCard(Card *card)
{
    int x = game->scene->width()/2-card->boundingRect().width()*card->scaleRatio/2,
        y = game->scene->height()/2-card->boundingRect().height()*card->scaleRatio/2;
    if (card->owner == 0) x -= 200;
    else {
        x += 200;
        card->setPixmap(QPixmap(":/images/"+card->getName()+".jpeg"));
    }
    card->picked = true;
    card->setPos(x, y);
}

void Round::playRound(Card *playerCard, Card *opCard)
{
    while(true) {
        playerCard->setHealth(playerCard->getHealth() - opCard->getDamage());
        opCard->setHealth(opCard->getHealth() - playerCard->getDamage());
        if (playerCard->getHealth() <= 0 && opCard->getHealth() <= 0) {
            game->scene->removeItem(playerCard);
            game->scene->removeItem(opCard);
            header->setPlainText("The Round eneded in a draw");
            header->setPos(game->scene->width()/2-header->boundingRect().width()/2,
                           game->scene->height()/2-header->boundingRect().height()/2);
            break;
        }
        else if (playerCard->getHealth() <= 0) {
            game->scene->removeItem(playerCard);
            header->setPlainText(opCard->getName()+" has won the round");
            header->setPos(game->scene->width()/2 - header->boundingRect().width(),
                           game->scene->height()/2 - header->boundingRect().height()/2);
            game->score--;
            break;
        }
        else if (opCard->getHealth() <= 0) {
            game->scene->removeItem(opCard);
            header->setPlainText(playerCard->getName()+" has won the round");
            header->setPos(game->scene->width()/2,
                           game->scene->height()/2 - header->boundingRect().height()/2);
            game->score++;
            break;
        }
    }
    QTimer * timer = new QTimer();
    QObject::connect(timer, &QTimer::timeout, this, [&, playerCard, opCard]{ startNextRound(playerCard, opCard); });
    timer->start(1000);
    timer->setSingleShot(true);
}


void Round::startNextRound(Card *playerCard, Card *opCard)
{
    game->scene->removeItem(playerCard);
    game->scene->removeItem(opCard);

    if (round == 5) {
        state = 0;

        QString winner;

        if (game->score > 0) winner = game->player->playerName+" has won the game";
        else if (game->score < 0) winner = "The computer has won the game";
        else winner = "The game ended in a draw!";

        header->setPlainText(winner);
        header->setDefaultTextColor(Qt::red);
        header->setFont(QFont("Arial Black", 40, 80));
        header->setPos(game->scene->width()/2-header->boundingRect().width()/2,
                            game->scene->height()/2-header->boundingRect().height()/2);

        return;
    }

    header->setPlainText("Round "+QString::number(++round));
    header->setDefaultTextColor(Qt::red);
    header->setFont(QFont("Arial Black", 32, 80));
    header->setPos(game->scene->width()/2-header->boundingRect().width()/2,
                        game->scene->height()/2-header->boundingRect().height()/2-50);

    game->scene->addItem(header);

    text = new QGraphicsTextItem();
    text->setPlainText("Pick a card to fight with");
    text->setDefaultTextColor(Qt::red);
    text->setFont(QFont("Arial Black", 20, 80));
    text->setPos(game->scene->width()/2-text->boundingRect().width()/2,
                        game->scene->height()/2-text->boundingRect().height()/2+50);

    game->scene->addItem(text);

    state = 1;
}
