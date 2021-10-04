#include<iostream>
using namespace std;
enum days {mon,tue,wed,thurs,fri,sat,sun};
enum month {jan=2,feb,march,april,may,jun=10,jul,aug=3,sep,octo,nov,decm};  //we can also assign code values according to our wish
int main()
{
    days d;
    d=mon;
    cout<<d;
    cout<<endl<<tue;
    cout<<endl<<wed;
    cout<<endl<<thurs;
    cout<<endl<<fri;
    cout<<endl<<sat;
    cout<<endl<<sun;

    month m;
    m=jan;
    cout<<endl<<endl<<m;
    cout<<endl<<feb<<endl<<march<<endl<<april<<endl<<may;
    cout<<endl<<jun<<endl<<jul<<endl<<aug<<endl<<sep<<endl<<octo<<endl<<nov<<endl<<decm;
    return 0;
}