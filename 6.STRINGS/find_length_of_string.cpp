//find the length of the string
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string:";
    getline(cin,s);
    int count=0;
    for(int i=0;s[i]!='\0';i++)
        count++;
    cout<<"The length of the string is "<<count;
    return 0;
}*/

//another method
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter string:";
    getline(cin,s);
    string::iterator it;
    int count=0;
    for(it=s.begin();it!=s.end();it++)
    {
        count++;
    }
    cout<<s;
    return 0;
}