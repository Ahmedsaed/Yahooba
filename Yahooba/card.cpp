#include "card.h"

Card::Card(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent) {
    setPos(10,10);
    setPixmap(QPixmap(":/images/avatar.jpeg"));
    setScale(0.15);
}

int Card::getHealth() const
{
    return health;
}

void Card::setHealth(int newHealth)
{
    health = newHealth;
}

int Card::getDamage() const
{
    return damage;
}

void Card::setDamage(int newDamage)
{
    damage = newDamage;
}

QString Card::getType() const
{
    return type;
}

void Card::setType(const QString &newType)
{
    type = newType;
}

QString Card::getName() const
{
    return name;
}

void Card::setName(const QString &newName)
{
    name = newName;
}
