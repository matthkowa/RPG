#include "cell.h"
#include <QPainter>
Cell::Cell(Type _type,int _x,int _y,QWidget *parent) : QWidget(parent)
{
    this->type = _type;
    this->x = _x;
    this->y = _y;
    cell = new QPixmap(":/img/trees_plants_rocks.png");
    town = new QPixmap(":/img/town.png");
}


void Cell::draw(QPainter * qp) const {
        switch (type) {
            case GROUND:
                qp->drawPixmap(x,y,32,32,*cell,128,384,32,32);
            break;
            case GRASS:
                qp->drawPixmap(x,y,32,32,*cell,32,448,32,32);
            break;
            case ROCK:
                qp->drawPixmap(x,y,32,32,*cell,128,384,32,32);
                qp->drawPixmap(x,y,32,32,*cell,32,320,32,32);
            break;
            case ROOF_FRONT_LEFT:
                qp->drawPixmap(x,y,32,32,*town,416,64,32,32);
            break;
            case ROOF_FRONT_RIGHT:
                qp->drawPixmap(x,y,32,32,*town,480,64,32,32);
            break;
            case ROOF_FRONT:
                qp->drawPixmap(x,y,32,32,*town,448,64,32,32);
            break;
            case ROOF_BACK_LEFT:
                qp->drawPixmap(x,y,32,32,*cell,128,384,32,32);
                qp->drawPixmap(x,y,32,32,*town,416,0,32,32);
            break;
            case ROOF_BACK_RIGHT:
                qp->drawPixmap(x,y,32,32,*cell,128,384,32,32);
                qp->drawPixmap(x,y,32,32,*town,480,0,32,32);
            break;
            case ROOF_BACK:
                qp->drawPixmap(x,y,32,32,*town,448,0,32,32);
            break;
            case ROOF_RIGHT:
                qp->drawPixmap(x,y,32,32,*town,480,32,32,32);
            break;
            case ROOF_LEFT:
                qp->drawPixmap(x,y,32,32,*town,416,32,32,32);
            break;
            case ROOF:
                qp->drawPixmap(x,y,32,32,*town,448,32,32,32);
            break;
            case WALL:
                qp->drawPixmap(x,y,32,32,*town,448,160,32,32);
            break;
            case WALL_RIGHT:
                qp->drawPixmap(x,y,32,32,*town,480,160,32,32);
            break;
            case WALL_LEFT:
                qp->drawPixmap(x,y,32,32,*town,416,160,32,32);
            break;
            case WINDOW:
                qp->drawPixmap(x,y,32,32,*town,448,160,32,32);
                qp->drawPixmap(x,y,32,32,*town,224,344,32,32);
            break;
            case DOOR:
                qp->drawPixmap(x,y,32,32,*town,448,160,32,32);
                qp->drawPixmap(x,y,32,32,*town,224,344,32,32);
            break;
        }

}
