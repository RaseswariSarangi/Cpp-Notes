#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c,r1,r2;
    cout<<"Enter the values of a,b and c:";
    cin>>a>>b>>c;
    r1=(-b+sqrt(b*b-4*a*c))/(2*a);
    r2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);    //another method of writing power
    cout<<"The roots are "<<r1<<" and "<<r2;
    return 0;
}