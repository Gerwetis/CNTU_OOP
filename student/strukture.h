#ifndef STRUKTURE_H
#define STRUKTURE_H

#include <string>

using namespace std;

struct StudentS {
    string name;
    int age;
    string major;
};

bool setName(StudentS& student, const string& newName);
string getName(const StudentS& student);

bool setAge(StudentS& student, int newAge);
int getAge(const StudentS& student);

bool setMajor(StudentS& student, const string& newMajor);
string getMajor(const StudentS& student);


bool tester (const string& test);
bool testers(int tests);

#endif // STRUKTURE_H



