#ifndef CARD_H
#define CARD_H

#include <QObject>
#include <QString>
#include <QGraphicsPixmapItem>

class Card : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Card(QGraphicsItem *parent=0);

    QString getName() const;
    void setName(const QString &newName);

    QString getType() const;
    void setType(const QString &newType);

    int getDamage() const;
    void setDamage(int newDamage);

    int getHealth() const;
    void setHealth(int newHealth);

private:
    QString name="", type="";
    int damage, health;
};

#endif // CARD_H
