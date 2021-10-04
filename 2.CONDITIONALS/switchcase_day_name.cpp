//example of switch case statement
//find the day name from the given day number
#include<iostream>
using namespace std;
int main()
{
    int day_num;
    cout<<"Enter the day number:";
    cin>>day_num;
    switch (day_num)
    {
    case 1:cout<<"MONDAY";
           break;
    case 2:cout<<"TUESDAY";
            break;
    case 3:cout<<"WEDNESDAY";
            break;
    case 4:cout<<"THURSDAY";
            break;
    case 5:cout<<"FRIDAY";
            break;
    case 6:cout<<"SATURDAY";
            break;
    case 7:cout<<"SUNDAY";
            break;
    default:cout<<"INVALID DAY NUMBER";
            break;
    }
    return 0;
}