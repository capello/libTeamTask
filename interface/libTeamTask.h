#ifndef libTeamTask_H
#define libTeamTask_H

#include <QtCore/QObject>

class libTeamTask : public QObject
{
Q_OBJECT
public:
    libTeamTask();
    virtual ~libTeamTask();
private slots:
    void output();
};

#endif // libTeamTask_H
