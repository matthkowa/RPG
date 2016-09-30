#include "character.h"
#include <QPainter>
#include <QDebug>
Character::Character(int _x,int _y,QWidget *parent) : QWidget(parent)
{

    this->x = _x;
    this->y = _y;
    character = new QPixmap(":/img/zcowxMuE.png");
}

void Character::draw(QPainter * qp) const {
    qp->drawPixmap(x,y,32,32,*character,5*64,10*64,64,64);
}

void Character::move(Direction dir){
    switch(dir) {
        case LEFT:
        if(x>=0){
            x -= qMin(32,abs(x));
        }

        break;
    case RIGHT:
        if(x<1024){
            x += qMin(32,abs(1024-x-32));
        }
        break;
    case UP:
        if(y>=0){
           y -= qMin(32,abs(y));
        }
        break;
    case DOWN:
        if(y<576){
            y += qMin(32,abs(576-y-32));
        }

        break;
    }
    qDebug()<<x<<y;
}
