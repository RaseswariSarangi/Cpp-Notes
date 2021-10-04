//overflow example of char
/*#include<iostream>
using namespace std;
int main()
{
    char x=127,y=-128,z=130;
    x++;y--;z++;
    cout<<(int)x;               //here type-casting is done in order to return a int type value instead of character 
    cout<<endl<<(int)y;         //here type-casting is done in order to return a int type value instead of character 
    cout<<endl<<(int)z;
    return 0;
}*/



//overflow example of int
/*#include<iostream>
using namespace std;
int main()
{
    int x=INT_MAX,y=INT_MIN;
    int a=INT_MAX;a++;
    cout<<y<<" to "<<x;
    cout<<endl<<a;
    return 0;
}*/



//by instructor
//Program to Demonstrate Overflow
#include <iostream>
using namespace std;
int main()
{
    char a=128;
    cout<<(int)a<<endl;

    char b=127;
    b++;
    cout<<(int)b<<endl;

    char c=-129;
    cout<<(int)c<<endl;

    char d=-128;
    d--;
    cout<<(int)d<<endl;

    int e=INT_MAX;
    e++;
    cout<<(int)e<<endl;
    return 0;
}