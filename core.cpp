#include <QVector>
#include <QDate>
#include <QString>
#include <QTime>
#include "core.h"


//реализация класса Task
//Task - класс, содержащий задачу
//
//Task конструктор
TaskBase::TaskBase(QDate start_t, QDate end_t, QString nam, int prior, int complet, QTime start_tim, QTime end_tim)
{
    start_time = start_tim;
    end_time = end_tim;
    start_day = start_t;
    end_day = end_t;
    name = nam;
    completeness = complet;
    priority = prior;
}
//описание set-аксессоров
void TaskBase::setStartDay(QDate start_day)
{
    this->start_day = start_day;
}
void TaskBase::setEndDay(QDate end_day)
{
    this->end_day = end_day;
}
void TaskBase::setName(QString name)
{
    this->name = name;
}
void TaskBase::setPriority(int prior)
{
    this->priority = prior;
}
void TaskBase::setCompleteness(int com)
{
    this->completeness = com;
}
void TaskBase::setStartTime(QTime start_time)
{
    this->start_time = start_time;
}
void TaskBase::setEndTime(QTime end_time)
{
    this->end_time = end_time;
}

//описание get-аксессоров

QDate TaskBase::getStartDay()
{
    return start_day;
}
QDate TaskBase::getEndDay()
{
    return end_day;
}
QString TaskBase::getName()
{
    return name;
}
int TaskBase::getPriority()
{
    return priority;
}
int TaskBase::getCompleteness()
{
    return completeness;
}
QTime TaskBase::getStartTime()
{
    return start_time;
}
QTime TaskBase::getEndTime()
{
    return end_time;
}

//описание класса Subtask
//конструктор класса Subtask
Task::Task(QDate start_t, QDate end_t, QString nam, int prior, int complet, QTime start_tim, QTime end_tim) : TaskBase(start_t, end_t, nam, prior, complet, start_tim, end_tim) {}
//добавление подзадачи
void Task::addSubtask(TaskBase t)
{
    subtasks.push_back(t);
}
