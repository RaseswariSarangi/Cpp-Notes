#include<iostream>
using namespace std;
typedef int marks;
int main()
{
    marks m1,m2,m3,m4,m5;
    float avg;
    cout<<"Enter the marks secured in 5 subjects:";
    cin>>m1>>m2>>m3>>m4>>m5;
    //avg=(float)(m1+m2+m3+m4+m5)/5;     //typecasting
    avg=(m1+m2+m3+m4+m5)/5.0;            //here we can use 5.0 which is a float value to give overall result as float or we can use typecasting
    if(avg>=60)
        cout<<"A grade"<<" "<<avg;
    else if(avg<60 && avg>=35)
        cout<<"B grade"<<" "<<avg;
    else  cout<<"C grade"<<" "<<avg;
    return 0;

}