#include "student.h"
#include <iostream>

Student::Student() {}

bool Student::setName(string newName)
{
    if (tester(newName))
    {
        this->name = newName;
        return true;
    }
    return false;
}

bool Student::setMajor(string newMajor)
{
    if (tester(newMajor))
    {
        this->major = newMajor;
        return true;
    }
    return false;
}

bool Student::setAge(int newAge)
{
    if (testers(newAge))
    {
        this->age = newAge;
        return true;
    }
    return false;
}
bool Student::tester(string test)
{
    if (test.length() > 0)
    {
        return true;
    }
    return false;
}

bool Student::testers(int tests)
{
    if (tests > 14)
    {
        return true;
    }
    else
    {
        std::cout << "Вік замалий для студента" << std::endl;
    }
    return false;
}
