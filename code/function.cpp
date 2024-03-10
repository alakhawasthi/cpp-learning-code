#include <iostream>
using namespace std;

int sum(int num1, int num2)
{
    int c = num1 + num2;
    return c;
}

// this will not work
// void swap(int num1, int num2)
// {
//     int temp = num1;
//     num1 = num2;
//     num2 = temp;
// }

// Call by reference using pointer

void swapPointer(int* num1, int* num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

// Call by reference using C++ Reference Variables

int & swapReferenceVar(int &num1, int &num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;

    return num1;
}

int main(int argc, char const *argv[]){
    int a = 4, b = 5;
    // cout<<"the sum of 4 and 5 is "<<sum(a,b)<<endl;

    cout<<"the value of a and b is "<<endl<<a<<endl<<b<<endl;
    // this will not work swap(a,b);

    // swapPointer(&a,&b); this will  swap using Pointer

    // swapReferenceVar(a,b); // using var
    swapReferenceVar(a,b) = 766; // using var
    cout<<"the value of a and b is "<<endl<<a<<endl<<b<<endl;


return 0;
}