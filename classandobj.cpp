#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;

    void setdata(int a1, int b1, int c1);
    void getdata()
    {
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
        cout << "Value of c is " << c << endl;
        cout << "Value of d is " << d << endl;
        cout << "Value of e is " << e << endl;
    };
};

void Employee ::setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
};

int main(int argc, char const *argv[])
{
    Employee harry;
    // harry.a = 134;
    harry.e = 34;
    harry.d = 21;
    harry.setdata(1,2,4);
    harry.getdata();
    return 0;
}