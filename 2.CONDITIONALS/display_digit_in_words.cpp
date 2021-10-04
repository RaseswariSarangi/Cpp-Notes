//example of else-if ladder
//display given digit in term of words
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the num:";
    cin>>num;
    if(num==0)
        cout<<"ZERO";
    else if(num==1)
        cout<<"ONE";
    else if(num==2)
        cout<<"TWO";
    else if(num==3)
        cout<<"THREE";
    else if(num==4)
        cout<<"FOUR";
    else if(num==5)
        cout<<"FIVE";
    else if(num==6)
        cout<<"SIX";
    else if(num==7)
        cout<<"SEVEN";
    else if(num==8)
        cout<<"EIGHT";
    else if(num==9)
        cout<<"NINE";
    else if(num==10)
        cout<<"TEN";
    else cout<<"The number is not between 0-10";
    return 0;
}