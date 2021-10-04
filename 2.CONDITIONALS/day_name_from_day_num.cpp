//example of else-if ladder
//find out the day name from the input of day number
#include<iostream>
using namespace std;
int main()
{
    int day_num;
    cout<<"Enter the day number:";
    cin>>day_num;
    if(day_num==1)
        cout<<"MONDAY";
    else if(day_num==2)
        cout<<"TUESDAY";
    else if(day_num==3)
        cout<<"WEDNESDAY";
    else if(day_num==4)
        cout<<"THURSDAY";
    else if(day_num==5)
        cout<<"FRIDAY";
    else if(day_num==6)
        cout<<"SATURDAY";
    else if(day_num==7)
        cout<<"SUNDAY";
    else  cout<<"INVALID DAY";
    return 0;
}