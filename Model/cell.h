#ifndef CELL_H
#define CELL_H

#include <QWidget>



class Cell : public QWidget
{
    Q_OBJECT
public:
    enum Type{EMPTY, //0
              GRASS,
              GROUND,
              ROCK,
              WALL,
              WALL_LEFT,//5
              WALL_RIGHT,
              ROOF_BACK_LEFT,
              ROOF_BACK_RIGHT,
              ROOF_BACK,
              ROOF_FRONT_LEFT,//10
              ROOF_FRONT_RIGHT,
              ROOF_FRONT,
              ROOF_RIGHT,
              ROOF_LEFT,
              ROOF,//15
              WINDOW,
              DOOR};
    explicit Cell(Type type,int _x,int _y,QWidget *parent = 0);
    void draw(QPainter * qp) const;

signals:

public slots:

private:
    Type type;
    int x;
    int y;
    QPixmap * cell;
    QPixmap * town;
};

#endif // CELL_H
