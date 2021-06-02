#include "mainwindow.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSqlDatabase dbase = QSqlDatabase::addDatabase("QSQLITE");
    dbase.setDatabaseName("my_db.sqlite");
    if (!dbase.open()) {
            qDebug() << "Что-то пошло не так!";
            return -1;
        }
   /* QSqlQuery a_query;
        // DDL query
    QString str = "CREATE TABLE Questions ("
                "ID integer PRIMARY KEY NOT NULL, "
                "Text VARCHAR(255), "
                "Answer integer"
                ");";
    bool b = a_query.exec(str);
    if (!b) {
            qDebug() << "не удается создать таблицу";
        }
    str = "CREATE TABLE Variants ("
                    "ID integer PRIMARY KEY NOT NULL, "
                    "Text VARCHAR(255), "
                    "QuestionID integer"
                    ");";
    b = a_query.exec(str);
        if (!b) {
                qDebug() << "не удается создать таблицу";
            }
    */QSqlQuery a_query;
    QString str_insert = "INSERT INTO Questions(ID, Text, Answer) "
                    "VALUES (%1, '%2', %3);";
    QString str = str_insert.arg("2")
                    .arg("Q2")
                    .arg("2");
    a_query.exec(str);
    str_insert = "INSERT INTO Variants(ID, Text, QuestionID) "
                        "VALUES (%1, '%2', %3);";
        str = str_insert.arg("5")
                        .arg("2variant1")
                        .arg("2");
    a_query.exec(str);
    str_insert = "INSERT INTO Variants(ID, Text, QuestionID) "
                        "VALUES (%1, '%2', %3);";
        str = str_insert.arg("6")
                        .arg("2variant2")
                        .arg("2");
    a_query.exec(str);
    str_insert = "INSERT INTO Variants(ID, Text, QuestionID) "
                        "VALUES (%1, '%2', %3);";
        str = str_insert.arg("7")
                        .arg("2variant3")
                        .arg("2");
    a_query.exec(str);
    str_insert = "INSERT INTO Variants(ID, Text, QuestionID) "
                        "VALUES (%1, '%2', %3);";
        str = str_insert.arg("8")
                        .arg("2variant4")
                        .arg("2");
    a_query.exec(str);
    MainWindow w(2323);
    w.show();
    return a.exec();
}
