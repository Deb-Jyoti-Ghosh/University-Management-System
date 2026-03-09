#include <iostream>
#include "University.h"
using namespace std;
int main()
{
    University u;
    int sid, pid, choice;
    string sname, sdepartment, pname, pdepartment;
    do
    {
        cout << "\n1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student by ID\n";
        cout << "4. Add Professor\n";
        cout << "5. Display All Professors\n";
        cout << "6. Search Professor by ID\n";
        cout << "7. TO erase Student Data\n";
        cout << "8. To erase Professor Data\n";
        cout << "9. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter Student ID: ";
            cin >> sid;
            cin.ignore(1000,'\n');
            cout << "Enter Student Name: ";
            getline(cin, sname);
            cout << "Enter Student Department: ";
            getline(cin, sdepartment);
            u.addStudentDetails(sname, sid, sdepartment);
            break;
        case 2:
            u.displaystudent();
            break;
        case 3:
            cout << "Enter Student ID to search: ";
            cin >> sid;
            u.searchstudent(sid);
            break;
        case 4:
            cout << "Enter Professor ID: ";
            cin >> pid;
            cin.ignore(1000,'\n');
            cout << "Enter Professor Name: ";
            getline(cin, pname);
            cout << "Enter Professor Department: ";
            getline(cin, pdepartment);
            u.addProfessorDetails(pname, pid, pdepartment);
            break;
        case 5:
            u.displayprofessor();
            break;
        case 6:
            cout << "Enter Professor ID to search: ";
            cin >> pid;
            u.searchprofessor(pid);
            break;
        case 7:
            cout << "Enter Student ID to erase: ";
            cin >> sid;
            u.eraseStudent(sid);
            break;
        case 8:
            cout << "Enter Professor ID to erase: ";
            cin >> pid;
            u.eraseProfessor(pid);
            break;
        case 9:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 9);
    return 0;
}