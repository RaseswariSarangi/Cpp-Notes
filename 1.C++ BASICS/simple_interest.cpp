#include<iostream>
using namespace std;
int main()
{
    float si,principal,roi,time;
    cout<<"Enter the value of p,r,t:";
    cin>>principal>>roi>>time;
    si=(principal*roi*time)/100;
    cout<<"Simple Interest = "<<si;
    return 0;
}