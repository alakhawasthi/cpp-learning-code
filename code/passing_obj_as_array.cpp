#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;
    static int empno;

public:
    void setid()
    {
        salary = 122;
        cout << "Enter id of Employee" << endl;
        cin >> id;
        empno++;
    }

    void getid()
    {
        cout << "ID of this Employee is " << id << " and Employee No is " << empno << endl;
    }
};

int Employee::empno;
int main(int argc, char const *argv[])
{
    // Employee harry, rohan, lovish, shruti;
    // harry.setid();
    // harry.getid();

    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setid();
        fb[i].getid();
    }

    return 0;
}