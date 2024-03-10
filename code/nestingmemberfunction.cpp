#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read();
    void chk_bin();
    void ones();
    void display();
};

void binary ::read()
{
    cout << "enter a binary number" << endl;
    cin >> s;
}

void binary ::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary ::ones()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display()
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}

main(int argc, char const *argv[])
{
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones();
    b.display();
    return 0;
}