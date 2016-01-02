#ifndef CORE_H
#define CORE_H
#include <QVector>
#include <QDate>
#include <QString>
#include <QTime>

//заголовок класса TaskBase(задача)
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

// Наследуемый класс подзадачи 
class SubTask : public TaskBase
{
public:
    SubTask(QDate start_t, QDate end_t, QString nam, int prior, int complet, QTime start_tim, QTime end_time);
    void addSubtask(TaskBase t); // Метод добавляет подзадачу в вектор subtasks
private:
    QVector<TaskBase> subtasks;//массив подзадач
};


// Класс, содержащий БД и отвечающий за работу с ней: добавление, удаление, редактирование записей. Так же содержит средства для реализации механизма сериализации
class DataBase
{
public:
    QVector<SubTask> database; //База задач
    void addTask(SubTask task); // Добавляет задачу в БД
    void deleteTask(QString name); //Удаляет задачу по ее названию
    void editTask(QString name); // Редактирует задачу по названию задачи
private:
    bool serialize(); // Сериализует объект базы и сохраняет в файл
    bool deserialize(); // Дисериализует объект и сохраняет в database
}

#endif // CORE_H


