//dynamic declaration example
/*#include<iostream>
using namespace std;
int main()
{
    int a=12,b=10;
    if(true)
    {
        int c=a+b;  //c variable is declared, executed and available in the scope of if block only 
        cout<<c;
    }
    //cout<<c;   //here the error message is showing that c is undeclared, coz it's only available to the cope of if block
    return 0;
}*/


//dynamic declaration example-2(newest method used in cpp-17 version)
/*#include<iostream>
using namespace std;
int main()
{
    int a=5,b=9;
    //int c=a+b;         //here the var c declared is available throughout the program and is not limited to any scope
    if(int c=a+b;c>10)    //by declaring here it will only be available to the scope of if block and reduce memory accumulation
    {
        cout<<c;
    }
    return 0;
}*/


//or-method of example-2
/*#include<iostream>
using namespace std;
int main()
{
    int a=5,b=9;
    {                  //dummy bracket which restricts the scope of c variable
    int c=a+b;         //here the var c declared is available throughout the program and is not limited to any scope
    if(c>10)    
    {
        cout<<c;
    }
    }                //dummy bracket which restricts the scope of c variable
    //cout<<c;         //here the error message is showing that c is undeclared, coz it's only available to the scope of if block
    return 0;
}*/

//demo-dynamic declaration(by instructor)
#include <iostream>
using namespace std;
int main()
{
    int a=10,b=5;
    if(true)
    {
    int c=a+b;
    cout<<c<<endl;
    }
    {
    int d=a-b;
    if(true)
    {
        cout<<d<<endl;
    }
    }
    if(int e=a*b)
    {
    cout<<e<<endl;
    }
}