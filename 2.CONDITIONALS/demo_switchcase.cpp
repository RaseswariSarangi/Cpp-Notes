//example of switch case program
#include<iostream>
using namespace std;
int main()
{
    int x=7;
    switch (x)
    {
    case 1: cout<<"ONE";
           break;
    case 2: cout<<"TWO";
            break;
    case 3: cout<<"THREE";
            break;
    default: cout<<"Not in the case";
            break;
    }
    return 0;
}