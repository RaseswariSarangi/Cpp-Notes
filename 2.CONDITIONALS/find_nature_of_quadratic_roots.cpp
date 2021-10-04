#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c;
    float D;
    cout<<"Enter the values of a, b and c:";
    cin>>a>>b>>c;
    D=pow(b,2)-(4*a*c);
    if(D==0)
    {
        cout<<"The roots are real and equal"<<endl;
        cout<<"The roots are: "<<(-b/(2*a))<<" and "<<(-b/(2*a));
    }
    else if(D>0)
    {
        cout<<"The roots are real and unequal"<<endl;
        cout<<"The roots are: "<<((-b+sqrt(D))/(2*a))<<" and "<<((-b-sqrt(D))/(2*a));
    }
    else
    {
        cout<<"The roots are imaginary"<<endl;
        cout<<"The roots are: "<<(-b/(2*a))<<" + "<<(sqrt(-D)/(2*a))<<"i"<<" and "<<(-b/(2*a))<<" - "<<(sqrt(-D)/(2*a))<<"i";
    }
    return 0;
}