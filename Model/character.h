#ifndef CHARACTER_H
#define CHARACTER_H

#include <QWidget>
#include <QPixmap>

class Character : public QWidget
{
    Q_OBJECT
public:
    enum Direction{UP,DOWN,LEFT,RIGHT};
    explicit Character(int x, int y,QWidget *parent = 0);
    void draw(QPainter * qp) const;
    void move(Direction dir);
signals:

public slots:

private:
    int x;
    int y;
    QPixmap * character;
};

#endif // CHARACTER_H
