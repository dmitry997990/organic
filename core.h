#ifndef CORE_H
#define CORE_H
#include <QVector>
#include <QDate>
#include <QString>
#include <QTime>

//заголовок класса Task(задача)
class Task
{
public:
    Task(); // Конструктор
private:
    QString name; // Название задачи
    QDate start_day; // Дата начала выполнения
    QDate end_day; // Дата конца выполнения
    int priority; // Приоритет задачи
    int completeness; // Процент выполнения задачи
    QVector<Task> subtasks; // Массив с подзадачами
    QTime start_time; // Время начала выполнения
    QTime end_time; // Время конца выполнения
};

#endif // CORE_H


