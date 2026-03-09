#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;
#include "Student.h"
#include "Professor.h"

class University
{
private:
    vector<Student> students;
    vector<Professor> professors;

public:
    void addStudentDetails(string name, int id, string department)
    { for (int i = 0; i < students.size(); i++)
        {
            if (students[i].getid() == id)
            {
                cout << "Student ID already exists.\n";
                return;
            }
        }
        Student s(name, id, department);
        students.push_back(s);
        cout << "Student added successfully.\n";
    }
    void addProfessorDetails(string name, int id, string department)
    { for (int i = 0; i < professors.size(); i++)
        {
            if (professors[i].getid() == id)
            {
                cout << "Professor ID already exists.\n";
                return;
            }
        }
        Professor p(name, id, department);
        professors.push_back(p);
        cout << "Professor added successfully.\n";
    }
    void displaystudent()
    {
        if (students.empty())
        {
            cout << "No students found.\n";
            return;
        }
        for (int i = 0; i < students.size(); i++)
        {
            cout << "Student " << i + 1 << ": ";
            students[i].display();
            cout << endl;
        }
    }
    void displayprofessor()
    {
        if (professors.empty())
        {
            cout << "No professors found.\n";
            return;
        }
        for (int i = 0; i < professors.size(); i++)
        {
            cout << "Professor " << i + 1 << ":";
            professors[i].display();
            cout << endl;
        }
    }
    void searchstudent(int searchid)
    {
        if (students.empty())
        {
            cout << "List is empty" << endl;
            return;
        }
        for (int i = 0; i < students.size(); i++)
        {
            if (students[i].getid() == searchid)
            {
                students[i].display();
                return;
            }
        }
        cout << "Student not found." << endl;
    }
    void searchprofessor(int searchid)
    {
        if (professors.empty())
        {
            cout << "No list found \n";
            return;
        }
        for (int i = 0; i < professors.size(); i++)
        {
            if (professors[i].getid() == searchid)
            {
                professors[i].display();
                return;
            }
        }
        cout << "Professor not Found \n";
    }
    void eraseStudent(int searchid)
    {
        for (int i = 0; i < students.size(); i++)
        {
            if (students[i].getid() == searchid)
            {
                students.erase(students.begin() + i);
                cout << "Student with ID " << searchid << " erased successfully.\n";
                return;
            }
        }
        cout << "Student not found.\n";
    }
    void eraseProfessor(int searchid)
    {
        for (int i = 0; i < professors.size(); i++)
        {
            if (professors[i].getid() == searchid)
            {
                professors.erase(professors.begin() + i);
                cout << "Professor with ID " << searchid << " erased successfully.\n";
                return;
            }
        }
        cout << "Professor not found.\n";
    }
};
