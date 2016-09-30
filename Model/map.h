#ifndef MAP_H
#define MAP_H

#include <QWidget>
#include "cell.h"

class Map : public QWidget
{
    Q_OBJECT
public:
    explicit Map(QWidget *parent = 0);
     void draw(QPainter * qp) const;

signals:

public slots:

private:
    QVector<Cell *>  map;
};

#endif // MAP_H
