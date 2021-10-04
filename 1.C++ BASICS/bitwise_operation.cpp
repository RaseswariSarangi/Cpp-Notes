/*#include<iostream>
using namespace std;
int main()
{
    int x=11,y=7,z,a,b,c;
    z=x&y;        //and operator
    a=x|y;        //or operator
    b=x^y;        //x-or operator
    cout<<endl<<z;
    cout<<endl<<a;
    cout<<endl<<b;

    char r=5,s,t,u;
    s=~r;          //not operator
    cout<<endl<<(int)s;

    t=r<<1;       //left shift operator
    u=r>>1;       //right shift operator
    cout<<endl<<(int)t;
    cout<<endl<<(int)u;
    cout<<endl<<(float)u;
    return 0;

}*/

//by instructor
//Bitwise Operators
//Program to Demonstrate bitwise operators
#include <iostream>
using namespace std;
int main()
{
    int a=11,b=7,c;
    c=a&b;
    cout<<c<<endl;

    int d=11,e=7,f;
    f=d|e;
    cout<<f<<endl;

    int g=11,h=7,i;
    i=g^h;
    cout<<i<<endl;

    char j=5,k;
    k=j<<1;
    cout<<(int)k<<endl;

    char l=20,m;
    m=l>>1;
    cout<<(int)m<<endl;

    char x=5,y;
    y= ~ x;
    cout<<(int)y<<endl;
    return 0;
}