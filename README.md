# University Management System (C++)

## Overview

A simple console-based **University Management System** written in **C++ using Object-Oriented Programming concepts**.
The program allows management of **students and professors** with features such as adding records, displaying records, searching by ID, and deleting entries.

---

## Features

* Add Student
* Add Professor
* Display All Students
* Display All Professors
* Search Student by ID
* Search Professor by ID
* Delete Student
* Delete Professor
* Duplicate ID protection

---

## OOP Concepts Used

* Classes and Objects
* Encapsulation
* Inheritance (`Person → Student / Professor`)
* Constructors
* Header file separation
* STL `vector` for dynamic storage

---

## Project Structure

```text
Person.h
Student.h
Professor.h
University.h
main.cpp
README.md
.gitignore
```

---

## How to Compile

Using **g++**:

```bash
g++ main.cpp -o university
```

Run:

```bash
./university
```

On Windows:

```bash
university.exe
```

---

## Example Menu

```
1. Add Student
2. Display All Students
3. Search Student by ID
4. Add Professor
5. Display All Professors
6. Search Professor by ID
7. Delete Student
8. Delete Professor
9. Exit
```

---

## Possible Improvements

* Add student GPA
* Add professor subjects
* Update/edit records
* File storage for persistent data
* Introduce polymorphism

---

## Author

Deb Jyoti Ghosh
