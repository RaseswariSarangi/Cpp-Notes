//area of the circle by taking radius as input
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float pi=3.14,r;
    cout<<"Enter the radius:";
    cin>>r;
    float area=pi*pow(r,2);
    cout<<"The area = "<<area;
    return 0;
}
