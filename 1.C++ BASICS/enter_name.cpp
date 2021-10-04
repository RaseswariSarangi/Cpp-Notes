//enter your name to print

//1-only first name will be taken
/*#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"may I know your name"<<endl; //endl-a newline character
    cin>>name;
    cout<<"hello mr/mrs "<<name;
    return 0;
}*/

//2-total name can be taken
#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"may I know your name"<<endl;
    getline(cin,name);
    cout<<"hello mr/mrs "<<name;   //getline-takes whole name as input from user
    return 0;
}