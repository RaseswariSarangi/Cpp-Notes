//example of using reference variable
#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int &y=a;
    cout<<y<<endl<<a<<endl;
    a++;
    cout<<a<<endl;
    y++;
    cout<<a<<endl;

    //adress of a and y
    cout<<&a<<endl<<&y<<endl;
    return 0;
}
//so adress of variable x and y both are same which shows that reference variable doen't occupy any memory
//reference variable if used for one variable then can not be used again for any other variable