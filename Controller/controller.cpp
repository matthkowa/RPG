#include "controller.h"
#include <QPainter>
#include <QKeyEvent>
Controller::Controller(QWidget *parent) : QWidget(parent)
{
    grid = new Map(this);
    character = new Character(128,128,this);

    timer=new QTimer(this);
    connect(timer, SIGNAL(timeout()),this, SLOT(update()));
    timer->start(50);

}


void Controller::paintEvent(QPaintEvent *)
{
    QPainter qp(this);

    /* Get State of the character */

    grid->draw(&qp);
    character->draw(&qp);
}

void Controller::keyPressEvent(QKeyEvent * k){

      switch(k->key()){
        case Qt::Key_Up:
            character->move(Character::Direction::UP);
            break;
        case Qt::Key_Down:
            character->move(Character::Direction::DOWN);
          break;
        case Qt::Key_Left:
            character->move(Character::Direction::LEFT);
            break;

        case Qt::Key_Right:
            character->move(Character::Direction::RIGHT);

            break;

        /*case Qt::Key_Return:
            pause = !pause;
            break;*/

        case Qt::Key_Space:

            break;
        }


}
