#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int marks[4] = {23, 45, 56, 89};
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    // for (int i = 0; i < 4; i++)
    // {
    //    cout<<marks[i]+1 <<endl;
    // };

    int* p = marks;

   for (int i = 0; i < 4; i++)
   {
    cout<<"the value of marks at [] "<<*(p + i)<< endl ;
   }
   
    
    return 0;
}
