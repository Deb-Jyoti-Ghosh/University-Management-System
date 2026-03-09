#pragma once
#include <string>
#include "Person.h"
using namespace std;


class Professor : public Person
{
    public:
    Professor(string name, int id, string department)
        : Person(name, id, department) {}
    
};
