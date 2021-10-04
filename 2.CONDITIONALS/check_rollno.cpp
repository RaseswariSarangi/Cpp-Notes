#include<iostream>
using namespace std;
int main()
{
    int roll;
    cout<<"Enter roll number:";
    cin>>roll;
    if(roll>=1)
    {
        cout<<"The roll number "<<roll<<" is valid";
    }
    else
    {
        cout<<"The roll number is invalid";
    }
    return 0;
}