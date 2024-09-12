#include "strukture.h"

bool setName(StudentS& student, const string& newName) {
    if (tester(newName)) {
        student.name = newName;
        return true;
    }
    return false;
}

string getName(const StudentS& student) {
    return student.name;
}

bool setAge(StudentS& student, int newAge) {
    if (testers(newAge)) {
        student.age = newAge;
        return true;
    }
    return false;
}

int getAge(const StudentS& student) {
    return student.age;
}

bool setMajor(StudentS& student, const string& newMajor) {
    if (tester(newMajor)) {
        student.major = newMajor;
        return true;
    }
    return false;
}

string getMajor(const StudentS& student) {
    return student.major;
}

bool tester(const string& test) {
    return !test.empty();
}

bool testers(int tests) {
    return tests > 0;
}

