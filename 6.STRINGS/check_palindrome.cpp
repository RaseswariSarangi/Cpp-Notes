// A Simple C++ program to reverse a string and check palindrome 
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
    cout<<"Enter a string:";
    getline(cin,str);
    int len=(int)str.length();
    string rev="";
    rev.resize(len);
    for(int i=0,j=len-1;i<len;i++,j--)
    {
        rev[i]=str[j];
    }
    rev[len]='\0';
    cout<<"The reversed string is "<<rev<<endl;
    if(str.compare(rev)==0)
    cout<<"String is palindrome";
    else cout<<"String is not palindrome";
	return 0;
}