#pragma once
#include <string>
#include "Person.h"
using namespace std;

class Student : public Person
{
   public:
    Student(string name, int id, string department)
        : Person(name, id, department) {}
 
};
