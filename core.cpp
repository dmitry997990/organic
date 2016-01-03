#include <QVector>
#include <QDate>
#include <QString>
#include <QTime>
#include "core.h"


//реализация класса Task
//Task - класс, содержащий задачу
//
//Task конструктор
Task::Task(QDate start_t, QDate end_t, QString nam, int prior, int complet, QTime start_tim, QTime end_tim)
{
    start_time = start_tim;
    end_time = end_tim;
    start_day = start_t;
    end_day = end_t;
    name = nam;
    completeness = complet;
    priority = prior;
    //subtasks.reserve(10);
}
//описание set-аксессоров TaskBase
void Task::setStartDay(QDate start_day)
{
    this->start_day = start_day;
}
void Task::setEndDay(QDate end_day)
{
    this->end_day = end_day;
}
void Task::setName(QString name)
{
    this->name = name;
}
void Task::setPriority(int prior)
{
    this->priority = prior;
}
void Task::setCompleteness(int com)
{
    this->completeness = com;
}
void Task::setStartTime(QTime start_time)
{
    this->start_time = start_time;
}
void Task::setEndTime(QTime end_time)
{
    this->end_time = end_time;
}

//описание get-аксессоров TaskBase

QDate Task::getStartDay()
{
    return start_day;
}
QDate Task::getEndDay()
{
    return end_day;
}
QString Task::getName()
{
    return name;
}
int Task::getPriority()
{
    return priority;
}
int Task::getCompleteness()
{
    return completeness;
}
QTime Task::getStartTime()
{
    return start_time;
}
QTime Task::getEndTime()
{
    return end_time;
}
//добавление подзадачи в Task
void Task::addSubtask(SubTask st)
{
    subtasks.push_back(st);
}

//описание класса DataBase
//добавление задачи
void DataBase::addTask(Task task)
{    
    database.push_back(task);
}

//удаление задачи
void DataBase::deleteTask(QString name)
{
   // database.erase(DataBase.database);
}

//редактирование задачи
void DataBase::editTask(QString name)
{

}
