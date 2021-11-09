//find the username of the user from the email address
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the e-mail:";
    getline(cin,str);
    int i=str.find('@');
    string s=str.substr(0,i);
    cout<<"The usernmae is "<<s<<endl;
    return 0;
}