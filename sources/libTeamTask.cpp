#include "libTeamTask.h"

#include <QTimer>
#include <iostream>

libTeamTask::libTeamTask()
{
    QTimer* timer = new QTimer(this);
    connect( timer, SIGNAL(timeout()), SLOT(output()) );
    timer->start( 1000 );
}

libTeamTask::~libTeamTask()
{}

void libTeamTask::output()
{
    std::cout << "Hello World!" << std::endl;
}

#include "libTeamTask.moc"
