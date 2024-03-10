#include <iostream>
using namespace std;

class Employee
{

    int id;
    static int count;

public:
    void setdata()
    {
        cout << "Enter the ID" << endl;
        cin >> id;
        count++;
    }

    void getdata()
    {
        cout << "ID of this Employee is " << id << " and the Employee number is " << count << endl;
    }

    static void getcount()
    {
        cout << "The value of count is " << count << endl;
    }
};

int Employee::count; // Default Value is Zero
// int Employee::count = 1000;  Default Value is Zero ---> Allowed
int main(int argc, char const *argv[])
{
    Employee harry, rohan, lovish;

    harry.setdata();
    harry.getdata();
    Employee::getcount();

    rohan.setdata();
    rohan.getdata();
    Employee::getcount();

    lovish.setdata();
    lovish.getdata();
    Employee::getcount();
    return 0;
}
