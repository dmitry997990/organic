#ifndef CORE_H
#define CORE_H
#include <QVector>
#include <QDate>
#include <QString>
#include <QTime>

//заголовок класса Task(задача)
class TaskBase
{
public:
    TaskBase(QDate start_t, QDate end_t, QString nam, int prior, int complet, QTime start_tim, QTime end_tim); // Конструктор
    //аксессоры к полям
    void setName(QString name);
    void setStartDay(QDate start_day);
    void setPriority(int prior);
    void setEndDay(QDate end_day);
    void setCompleteness(int com);
    void setStartTime(QTime start_time);
    void setEndTime(QTime end_time);
    QString getName();
    QDate getStartDay();
    QDate getEndDay();
    int getPriority();
    int getCompleteness();
    QTime getStartTime();
    QTime getEndTime();
protected:
    QString name; // Название задачи
    QDate start_day; // Дата начала выполнения
    QDate end_day; // Дата конца выполнения
    int priority; // Приоритет задачи
    int completeness; // Процент выполнения задачи    
    QTime start_time; // Время начала выполнения
    QTime end_time; // Время конца выполнения
};

class Task : public TaskBase
{
public:
    Task(QDate start_t, QDate end_t, QString nam, int prior, int complet, QTime start_tim, QTime end_time);
    void addSubtask(TaskBase t); // Метод добавляет подзадачу в вектор subtasks
private:
    QVector<TaskBase> subtasks;//массив подзадач
};

#endif // CORE_H


