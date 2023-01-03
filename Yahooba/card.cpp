#include "card.h"

Card::Card(QGraphicsItem *parent, QString name): QObject(), QGraphicsPixmapItem(parent) {
    setStats(name);

    setPos(10,10);
    setPixmap(QPixmap(":/images/"+name+".jpeg"));
    setScale(scaleRatio);

}

int Card::getHealth() const
{
    return health;
}

void Card::setHealth(int newHealth)
{
    health = newHealth;
}

void Card::setStats(QString name)
{
    setName(name);
    if (name == "bomba") {
        setHealth(425);
        setDamage(250);
        setType("Explosive");
    }
    else if (name == "nuker") {
        setHealth(350);
        setDamage(350);
        setType("Explosive");
    }
    else if (name == "detonator") {
        setHealth(350);
        setDamage(300);
        setType("Explosive");
    }
    else if (name == "pop") {
        setHealth(275);
        setDamage(375);
        setType("Explosive");
    }
    else if (name == "eradicator") {
        setHealth(300);
        setDamage(410);
        setType("Explosive");
    }
    else if (name == "Yogi") {
        setHealth(350);
        setDamage(189);
        setType("Hunter");
    }
    else if (name == "gogo") {
        setHealth(400);
        setDamage(200);
        setType("Hunter");
    }
    else if (name == "Leo") {
        setHealth(390);
        setDamage(193);
        setType("Hunter");
    }
    else if (name == "avatar") {
        setHealth(380);
        setDamage(190);
        setType("Hunter");
    }
    else if (name == "ventura") {
        setHealth(196);
        setDamage(369);
        setType("Hunter");
    }
    else if (name == "golem") {
        setHealth(1500);
        setDamage(50);
        setType("Giant");
    }
    else if (name == "Yeti") {
        setHealth(1400);
        setDamage(55);
        setType("Giant");
    }
    else if (name == "Grimm") {
        setHealth(1300);
        setDamage(60);
        setType("Giant");
    }
    else if (name == "pekka") {
        setHealth(1200);
        setDamage(65);
        setType("Giant");
    }
    else if (name == "colossal") {
        setHealth(1000);
        setDamage(75);
        setType("Warrior");
    }
    else if (name == "ethan") {
        setHealth(450);
        setDamage(185);
        setType("Warrior");
    }
    else if (name == "harold") {
        setHealth(400);
        setDamage(192);
        setType("Warrior");
    }
    else if (name == "kane") {
        setHealth(300);
        setDamage(200);
        setType("Warrior");
    }
    else if (name == "lewis") {
        setHealth(350);
        setDamage(190);
        setType("Warrior");
    }
    else if (name == "liam") {
        setHealth(320);
        setDamage(200);
        setType("Warrior");
    }
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
