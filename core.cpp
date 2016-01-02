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
//описание set-аксессоров TaskBase
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

//описание get-аксессоров TaskBase

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

//описание класса SubTask
//конструктор класса SubTask
SubTask::SubTask(QDate start_t, QDate end_t, QString nam, int prior, int complet, QTime start_tim, QTime end_tim) : TaskBase(start_t, end_t, nam, prior, complet, start_tim, end_tim) {}
//добавление подзадачи
void Task::addSubtask(TaskBase t)
{
    subtasks.push_back(t);
}

//описание класса DataBase
//добавление задачи
void DataBase::addTask(SubTask task)
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
{   cout << "1 - Изменить имя задачи" << endl;
    cout << "2 - Изменить день начала задачи" << endl;
    cout << "3 - Изменить день конца задачи" << endl;
    cout << "4 - Изменить приоритет задачи" << endl;
    cout << "5 - Изменить процент завершенности задачи" << endl;
    cout << "6 - Изменить время начала задачи" << endl;
    cout << "7 - Изменить время конца задачи" << endl;

    int n;
    cin  >> n; // ? предлагаю заменить на getch(), или другой обработчик нажатых клавиш

    if (n == 1)
    {
        cout << "Введите имя: ";
        QString nam;
        cin >> nam;
        SubTask.setName(nam);
    }

    else if (n == 2)
    {
        cout << "Введите день начала задачи: ";
        QDate startday;
        cin >> startday;
        SubTask.setStartDay(startday);
    }

    else if (n == 3)
    {
        cout << "Введите день конца задачи: ";
        QDate endday;
        cin >> endday;
        SubTask.setEndDay(endday);
    }

    else if (n == 4)
    {
        cout << "Введите приоритет задачи: ";
        int prior;
        cin >> prior;
        SubTask.setPriority(prior);
    }

    else if (n == 5)
    {
        cout << "Введите процент завершенности задачи: ";
        int com;
        cin >> com;
        SubTask.setCompleteness((com);
    }

    else if (n == 6)
    {
        cout << "Введите время начала задачи: ";
        QTime starttime;
        cin >> starttime;
        SubTask.setStartTime(starttime);
    }

    else if (n == 7)
    {
        cout << "Введите время конца задачи: ";
        QTime endtime;
        cin >> endtime;
        SubTask.setEndTime(endtime);
    }

    else cout << "Ошибка ввода!"

}
