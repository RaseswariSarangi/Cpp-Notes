#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float x1,x2,y1,y2,dist;
    cout<<"Enter the values of x1,x2,y1,y2:";
    cin>>x1>>x2>>y1>>y2;
    dist=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    cout<<"Distance = "<<dist<<" units";
    return 0;
}