#ifndef CORE_H
#define CORE_H
#include <QVector>
#include <QDate>
#include <QList>
#include <QString>
#include <QTime>

//структура подзадача
struct SubTask {
    QString name; // Название задачи
    QDate start_day; // Дата начала выполнения
    QDate end_day; // Дата конца выполнения
    int priority; // Приоритет задачи
    int completeness; // Процент выполнения задачи
    QTime start_time; // Время начала выполнения
    QTime end_time; // Время конца выполнения
};
//заголовок класса Task(задача)
class Task
{
public:
    Task(QDate start_t, QDate end_t, QString nam, int prior, int complet, QTime start_tim, QTime end_tim); // Конструктор
    //аксессоры к полям
    void setName(QString name);
    void setStartDay(QDate start_day);
    void setPriority(int prior);
    void setEndDay(QDate end_day);
    void setCompleteness(int com);
    void setStartTime(QTime start_time);
    void setEndTime(QTime end_time);
    void addSubtask(SubTask st);//добавляет подзадачу
    QString getName();
    QDate getStartDay();
    QDate getEndDay();
    int getPriority();
    int getCompleteness();
    QTime getStartTime();
    QTime getEndTime();
    QList<SubTask> subtasks; //База подзадач
protected:
    QString name; // Название задачи
    QDate start_day; // Дата начала выполнения
    QDate end_day; // Дата конца выполнения
    int priority; // Приоритет задачи
    int completeness; // Процент выполнения задачи    
    QTime start_time; // Время начала выполнения
    QTime end_time; // Время конца выполнения
};

// Класс, содержащий БД и отвечающий за работу с ней: добавление, удаление, редактирование записей. Так же содержит средства для реализации механизма сериализации
class DataBase
{
public:   
    QList<Task> database; //База задач
    void addTask(Task task); // Добавляет задачу в БД
    void deleteTask(QString name); //Удаляет задачу по ее названию
    void editTask(QString name); // Редактирует задачу по названию задачи
private:
    bool serialize(); // Сериализует объект базы и сохраняет в файл
    bool deserialize(); // Дисериализует объект и сохраняет в database
};

#endif // CORE_H


