//use of strlen() function---for counting the length of the string
/*#include<iostream>
#include<cstring>             //header file for which contains string functions
using namespace std;
int main()
{
    char s[20];
    cout<<"Enter your name:";
    cin.getline(s,20);
    cout<<"The length of string is "<<strlen(s);

    char t[20];
    cout<<"Enter:";
    cin>>t;
    cout<<"Length = "<<strlen(t);             //here it only measures length of first word as it takes only first word
    return 0;
}*/
//character pointer is not working for this compiler


//use of strcat() and strncat() function-----for concatenation of two strings
/*#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[20];
    cout<<"Enter destination:";
    cin.getline(s1,20);

    char s2[20];
    cout<<"Enter source:";
    cin.getline(s2,20);

    strcat(s1,s2);
    cout<<s1<<endl;

    strcat(s2,s1);            //the source and destination string can be reversed according to our wish
    cout<<s2<<endl;

    strncat(s1,s2,3);
    cout<<s1<<endl;

    strncat(s2,s1,4);         //the source and destination string can be reversed according to our wish 
    cout<<s2;
    return 0;
}*/



//use of strcpy() and strncpy() function-----for copying from one string to another
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[10],s2[10];
    cout<<"Enter string:";
    cin.getline(s2,10);
    /*strcpy(s1,s2);
    cout<<s1<<endl;*/

    strncpy(s1,s2,3);
    cout<<s1<<endl;
    return 0;
}
