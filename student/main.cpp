#include <QCoreApplication>
#include "student.h"
#include "strukture.h"
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    char order = '\0';
    int InputNum;
    string Input;
    string Innput;

    Student *student = new Student;
    StudentS IStudent;

    cout << "OOP/Strukt (O/S)?" << endl;
    cin >> order;
    cin.ignore();
    switch (order) {
    case 'o':
    case 'O':

        cout << "Enter name: " << endl;
        getline(cin, Input);
        if (student->setName(Input))
        {
            cout << "Name: " << student->getName() << endl;
        }
        else
        {
            cout << "Eror 1" << endl;
        }


        cout << "Enter age " << endl;
        cin >> InputNum;
        if (student->setAge(InputNum))
        {
            cout << "Age: " << student->getAge() << endl;
        }
        else
        {
            cout << "Eror 2" << endl;
        }

        cout << "Enter major: " << endl;
        cin >> Innput;
        if (student->setMajor(Innput))
        {
            cout << "Major: " << student->getMajor() << endl;
        }
        else
        {
            cout << "Eror 1" << endl;
        }

        return 0;


    case 's':
    case 'S':

        cout << "Введіть імя: " << endl;
        getline(cin, Input);
        if (setName(IStudent, Input)) {
            cout << "Імя: " << getName(IStudent) << endl;
        }
        else {
            cout << "Некоректні дані" << endl;
        }

        cout << "Зазначте вік студента: " << endl;
        cin >> InputNum;
        if (setAge(IStudent, InputNum)) {
            cout << "Вік: " << getAge(IStudent) << endl;
        }
        else {
            cout << "Вік замалий для студента" << endl;
        }

        cout << "Введіть спеціальність: " << endl;
        getline(cin, Innput);
        if (setName(IStudent, Innput)) {
            cout << "Спеціальність: " << getName(IStudent) << endl;
        }
        else {
            cout << "Некоректні дані" << endl;
        }

        return 0;

    default:
        cout << "Некоректний запит" << endl;
        delete student;
        return 0;
    }


    delete student;

    return a.exec();
}
