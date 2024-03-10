#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}
int add(int a, int b, int c)
{
    return a + b + c;
}

int main(int argc, char const *argv[])
{
    cout<<add(3,6)<<endl;
    cout<<add(3,6,7)<<endl;
    return 0;
}