//short circuit method example
//eg-1
/*#include<iostream>
using namespace std;
int main()
{
    int a=9,b=7,i=5;
    if(a<b && ++i<b){}
    cout<<i;
    return 0;
}*/
//here the value of i will be printed as 5 as second condition will not be executed as the first condition is false and && operator is used

//eg-2
/*#include<iostream>
using namespace std;
int main()
{
    int a=9,b=7,i=5;
    if(a>b && ++i<b){}
    cout<<i;
    return 0;
}*/
//here the value of i will be printed as 6 as second condition will be executed as the first condition is True and && operator is used


//eg-3
/*#include<iostream>
using namespace std;
int main()
{
    int a=9,b=7,i=5;
    if(a>b || ++i<b){}
    cout<<i;
    return 0;
}*/
//here the value of i will be printed as 5 as second condition will not be executed becoz || operator is used and first condition is true

//eg-4
#include<iostream>
using namespace std;
int main()
{
    int a=9,b=7,i=5;
    if(a<b || ++i<b){}
    cout<<i;
    return 0;
}//here the value of i will be printed as 6 as second condition will be executed becoz || operator is used and first condition is False
