//example of else-if ladder
//enter the month number to display the month name same as that of day
#include<iostream>
using namespace std;
int main()
{
    int month_num;
    cout<<"Enter the number for display of month:";
    cin>>month_num;
    if(month_num==1)
        cout<<"JANUARY";
    else if(month_num==2)
        cout<<"FEBRUARY";
    else if(month_num==3)
        cout<<"MARCH";
    else if(month_num==4)
        cout<<"APRIL";
    else if(month_num==5)
        cout<<"MAY";
    else if(month_num==6)
        cout<<"JUNE";
    else if(month_num==7)
        cout<<"JULY";
    else if(month_num==8)
        cout<<"AUGUST";
    else if(month_num==9)
        cout<<"SEPTEMBER";
    else if(month_num==10)
        cout<<"OCTOBER";
    else if(month_num==11)
        cout<<"NOVEMBER";
    else if(month_num==12)
        cout<<"DECEMBER";
    else  cout<<"Invalid Month Number";
    return 0;
} 
