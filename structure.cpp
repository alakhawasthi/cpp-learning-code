#include <iostream>
using namespace std;

// struct employee
// {
//     int eid;
//     char favChar;
//     float salary;
// };

typedef struct employee
{
    int eid;
    char favChar;
    float salary;
} ep;

 union money
{
    int rice;
    char car;
    float pounds;
};

int main(int argc, char const *argv[])
{

    ep harry;

    union money m1;
    m1.rice = 34;
    m1.car = 'b';
    cout<<m1.rice <<endl;
    cout<<m1.car;

    // harry.eid = 1;

    // harry.favChar = 'c';

    // harry.salary = 100000;

    // cout << harry.salary << endl;
    // cout << harry.favChar << endl;
    // cout << harry.eid << endl;

    return 0;
}