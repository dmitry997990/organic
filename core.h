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
    Task(QDate start_t, QDate end_t, QString nam, int prior, int complet, QTime start_tim, QTime end_tim); // Конструктор
<<<<<<< HEAD
    void addSubtask(Task t); // Метод добавляет подзадачу в вектор subtasks
=======
    void addSubtask(Task t); //метод добавляет подзадачу
>>>>>>> 569d87f4c6e642d6babd0e4534b2c85fa08b4fdf
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


