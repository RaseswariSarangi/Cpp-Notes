#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float r,h,vol;
    cout<<"Enter the value of radius and height:";
    cin>>r>>h;
    vol=3.14*pow(r,2)*h;
    cout<<"Volume = "<<vol<<" cube units";
    return 0;
}