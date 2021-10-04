/*#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float pi=3.14,r,area;
    cout<<"Enter the value of radius:";
    cin>>r;
    area=pi*pow(r,2);
    cout<<"The area = "<<area<<" square units";
    return 0;
}*/

//another method--by using typecasting
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float r,area;
    cout<<"Enter the value of radius:";
    cin>>r;
    area=(float)22/7*pow(r,2);            //typecasting method is used
    cout<<"The area = "<<area<<" square units";
    return 0;
}