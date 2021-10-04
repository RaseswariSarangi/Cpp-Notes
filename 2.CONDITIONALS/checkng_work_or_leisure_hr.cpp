#include<iostream>
using namespace std;
int main()
{
    int hr;
    cout<<"Enter hr(0-23):";
    cin>>hr;
    if(hr>=9 && hr<=18)
    {
        cout<<"Working Hours";
    }
    else
    {
        cout<<"Leisure Hours";
    }
    return 0;
}