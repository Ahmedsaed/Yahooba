#ifndef CARD_H
#define CARD_H

#include <QString>
#include <QKeyEvent>
#include <QGraphicsPixmapItem>

class Card : public QGraphicsPixmapItem
{
public:
    Card(QString name="", QGraphicsItem *parent=0);

    QString getName() const;
    void setName(const QString &newName);

    QString getType() const;
    void setType(const QString &newType);

    int getDamage() const;
    void setDamage(int newDamage);

    int getHealth() const;
    void setHealth(int newHealth);

    void setStats(QString name);

    double scaleRatio = 0.2;
    bool picked = false;
    int owner; // 0 -> player, 1 -> opponent
    void mousePressEvent(QGraphicsSceneMouseEvent * event);

private:
    QString name="", type="";
    int damage, health;
};

#endif // CARD_H
