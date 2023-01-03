#ifndef CARD_H
#define CARD_H

#include <QObject>
#include <QString>
#include <QGraphicsPixmapItem>

class Card : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Card(QGraphicsItem *parent=0, QString name="");

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

private:
    QString name="", type="";
    int damage, health;
};

#endif // CARD_H
