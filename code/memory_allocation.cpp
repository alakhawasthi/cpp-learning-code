#include <iostream>
using namespace std;

class Shop
{
private:
    int itemID[100];
    int itemPrice[100];
    int counter;

public:
    void intcounter() { counter = 0; };
    void getprice();
    void setprice();
};

void Shop ::setprice()
{
    cout << "Enter id of your item " << counter + 1 << endl;
    cin >> itemID[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::getprice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "Price of item with id " << itemID[i] << " is 1" << itemPrice[i] << endl;
    }
}

main(int argc, char const *argv[])
{
    Shop dukaan;
    dukaan.intcounter();
    for (int i = 0; i < 3; i++)
    {
        dukaan.setprice();
    }
    dukaan.getprice();

    return 0;
}
