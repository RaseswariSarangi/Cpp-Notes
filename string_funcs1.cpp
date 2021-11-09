//use of strstr() function to check the presence of sub string in main string
/*#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[20],s2[10];
    cout<<"Enter the main string:";
    cin.get(s1,20);
    cin.ignore();
    cout<<"Enter sub string:";
    cin.get(s2,10);
    if(strstr(s1,s2)!=NULL)
        cout<<strstr(s1,s2)<<endl;
    else cout<<"Not found";
    return 0;
}*/


//use of strchr() and strrchr() function for checking the resence of character in a string
/*#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[20],t;
    cout<<"Enter the string:";
    cin.getline(s,20);
    cout<<"Enter any character:";
    cin>>t;
    if(strchr(s,t)!=NULL)
        cout<<strchr(s,t)<<endl;
    else cout<<"Not found"<<endl;

    if(strrchr(s,t)!=NULL)
        cout<<strrchr(s,t);
    else cout<<"Not found";
    return 0;
}*/

//use of strcmp() function for comparison of two strings
//comparison of strings takes place in dictionary or alphabetical order
//the difference between the ASCII codes of upper and lower character is 32
//if string-1>string-2 then in case of strcmp(s1,s2)=1 and if string-1<string-2 then vice-versa
//if string-1==string-2 then strcmp(s1,s2)=0
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[10],s2[10];
    cout<<"Enter string 1:";
    cin.get(s1,10);
    cin.ignore();
    cout<<"Enter string 2:";
    cin.get(s2,10);
    int result=strcmp(s1,s2);
    cout<<result;
    return 0;
}
//if string-1 is Hello and string-2 is hello then the  result=-1 as ASCII code value of h is greater that H
//if string-1 is hello and string-2 is hello then the result=0 as both  the strings are same
//if string-1 is minor and string-2 is elder then the result=1 as ASCII code of m is greater than e 