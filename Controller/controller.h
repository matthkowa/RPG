#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "Model/map.h"
#include "Model/character.h"

#include <QWidget>
#include <QTimer>

class Controller : public QWidget
{
    Q_OBJECT
public:
    explicit Controller(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);
    void keyPressEvent(QKeyEvent * k);
signals:

public slots:

private:
    Map * grid;
    Character * character;
    QTimer * timer;
};

#endif // CONTROLLER_H
