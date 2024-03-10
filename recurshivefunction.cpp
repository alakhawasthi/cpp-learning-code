#include <iostream>
using namespace std;

// Factorial of a Number

int Factorial(int n)
{
    if (n<=1)
    {
        return 1;
    }
    return n * Factorial(n - 1);
}

int main(int argc, char const *argv[])
{

    cout << Factorial(3);

    return 0;
}