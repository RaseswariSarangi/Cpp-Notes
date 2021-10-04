#include<iostream>
using namespace std;
int main()
{
    int option;
    cout<<"MENU:\n1.ADD\n2.SUBTRACT\n3.MULTIPLY\n4.DIVIDE"<<endl<<"Enter option:";
    cin>>option;
    int a,b;float c;
    cout<<"enter 2 numbers:";
    cin>>a>>b;
    switch (option)
    {
    case 1: c=a+b;
           break;
    case 2: c=a-b;
            break;
    case 3: c=a*b;
            break;
    case 4: c=(float)a/b;
            break;
    }
    cout<<"The result = "<<c;
    return 0;
}