#include <iostream>
using namespace std;

// inline int product(int a, int b)
// {
//     return a*b;
// }
inline int product(int a, int b)
{
    // static int c = 0; //value is stored when updated

    // c = c + 1;
    return a * b;
}

float moneyreceved(int currentMoney, float factor = 1.04)
{
    return currentMoney * factor;
}

// constant function

int main(int argc, char const *argv[])
{

    // while (true)
    // {
    //     int a, b;
    //     cout << "enter the value of a and b" << endl;
    //     cin >> a >> b;
    //     cout << "The Product of a and b is " << product(a, b) << endl;
    // }

    // int a, b;
    // cout << "enter the value of a and b" << endl;
    // cin >> a >> b;
    // cout << "The Product of a and b is " << product(a, b) << endl;

    int money = 10000;

    cout << "if you have " << money << " you will get " << moneyreceved(money) << " Rs after 1 year" << endl;
    cout << "For VIP: if you have " << money << " you will get " << moneyreceved(money, 1.1) << " Rs after 1 year";

    return 0;
}