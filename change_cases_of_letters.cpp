//change the cases of the letters in the string
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter string:";
    getline(cin,s);
    for(int i=0;s[i]!='\0';i++)
    {
        if('a'<=s[i]&&s[i]<='z')
            s[i]=s[i]-32;
        else 
            s[i]=s[i]+32;
    }
    cout<<s<<endl;
    return 0;
}*/


//another method
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter string:";
    getline(cin,s);
    string::iterator i;
    for(i=s.begin();i!=s.end();i++)
    {
        if('a'<=*i && *i<='z')
            *i=*i-32;
        else 
            *i=*i+32;
    }
    cout<<s<<endl;
    return 0;
}*/


//change mixed cases and digits into uppercase
//the digits will remain constant
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter string:";
    getline(cin,s);
    int count=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>='a'&& s[i]<='z')
            s[i]=s[i]-32; 
    }
    cout<<s<<endl;
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
    string::iterator i;
    for(i=s.begin();i!=s.end();i++)
    {
        if('a'<=*i && *i<='z')
            *i=*i-32;
    }
    cout<<s<<endl;
    return 0;
}