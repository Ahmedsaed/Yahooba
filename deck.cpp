#include "deck.h"
#include "card.h"
#include <QMap>
#include <QScreen>
#include <QGuiApplication>
#include "game.h"
#include <QGraphicsTextItem>
#include <round.h>

extern Game * game;

Deck::Deck()
{
    state = 1;
    initCards();

    QGraphicsTextItem *text = new QGraphicsTextItem();
    text->setPlainText("Pick 5 cards to continue");
    text->setDefaultTextColor(Qt::red);
    text->setFont(QFont("Arial Black", 24, 80));
    text->setPos(30,30);

    game->scene->addItem(text);

    displayCards();
}

Deck::~Deck()
{
    state = 0;
}

void Deck::handleMouseClick(Card *card)
{
    if (card->picked) return;
    card->picked = true;

    int result = game->player->addCard(card);
    int x = game->width/2 - card->boundingRect().width() * card->scaleRatio*game->nRounds/2;
    int y = game->height - card->boundingRect().height() * card->scaleRatio;
    card->setPos(x+((result-1) * card->boundingRect().width() * card->scaleRatio), y);
    if (result == 5) startRound();
}

void Deck::initCards()
{
    cards["bomba"] = new Card("bomba");
    cards["avatar"] = new Card("avatar");
    cards["colossal"] = new Card("colossal");
    cards["detonator"] = new Card("detonator");
    cards["eradicator"] = new Card("eradicator");
    cards["ethan"] = new Card("ethan");
    cards["gogo"] = new Card("gogo");
    cards["harold"] = new Card("harold");
    cards["leo"] = new Card("leo");
    cards["kane"] = new Card("kane");
    cards["liam"] = new Card("liam");
    cards["lewis"] = new Card("lewis");
    cards["nuker"] = new Card("nuker");
    cards["pop"] = new Card("pop");
    cards["ventura"] = new Card("ventura");
    cards["yeti"] = new Card("yeti");
}

void Deck::displayCards()
{
    int x = 100, y = 100;
    for(auto &card : cards) {
        card->setPos(x, y);
        game->scene->addItem(card);
        if (x >= game->width-100-card->boundingRect().width()*card->scaleRatio) {
            x = 100;
            y += card->boundingRect().height()*card->scaleRatio;
        }
        else x += card->boundingRect().width()*card->scaleRatio;
    }
}

void Deck::startRound()
{
    state = 0;
    game->clearScene();
    game->op = new Opponent();
    game->round = new Round();
}
