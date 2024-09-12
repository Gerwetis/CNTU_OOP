#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using namespace std;

class Student
{
private:

    string name;
    int age;
    string major;

    bool tester (string test);
    bool testers(int tests);

public:
    Student();

    bool setName(string newName);
    string getName() { return name; }

    bool setAge(int newAge);
    int getAge() { return age; }

    bool setMajor(string newMajor);
    string getMajor() { return major; }
};

#endif // STUDENT_H





