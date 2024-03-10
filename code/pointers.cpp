#include <iostream>
using namespace std;



int main(int argc, char const *argv[])
{
    while (true)
    {
        int choosemode;
        cin >> choosemode;
        if (choosemode == 0)
        {
            break;
        }
            int a = 3;
            int *b = &a;
            cout << "The address of a is " << &a << endl;
            cout << "The address of a is " << b << endl;

            cout << "The value of b is " << *b << endl;

            // Pointer to pointer

            int **c = &b;

            cout << "The address of b is " << &b << endl;
            cout << "The value at address of c is " << *c << endl;
            cout << "The value at address of c is " << **c << endl;
        
    }

    cout << "Thank you for using";

    return 0;
}