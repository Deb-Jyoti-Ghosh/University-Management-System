#pragma once

#include <iostream>
#include <string>
using namespace std;
class Person
{
protected:
    string name;
    int id;
    string department;

public:
    Person(string name, int id, string department)
    {
        this->name = name;
        this->id = id;
        this->department = department;
    }
    int getid()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Department: " << department << endl;
    }
};
