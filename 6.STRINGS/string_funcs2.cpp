//use of strtol() and strtof() function to find out long int number and float number from string
/*#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[10];
    cout<<"Enter any number:";
    cin.get(s1,10);
    long int x=strtol(s1,NULL,10);
    cout<<x<<endl<<x+10<<endl;             //to confirm whether it's a string or number
    cin.ignore();
    char s2[10];
    cout<<"Enter any float number:";
    cin.get(s2,10);
    float y=strtof(s2,NULL);
    cout<<y<<endl<<y-10;
    return 0;
}*/


//use of strtok() to find tokens by using given delimeter
//example-1
/*#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[]="x=10;y=20;z=30;";
    char *token=strtok(s1,"=;");                   //= and ; are two delimiters can be given in any order =; or ;=----will give same result
    while(token!=NULL)
    {
        cout<<token<<endl;
        token=strtok(NULL,";=");
    }
    return 0;
}*/

//example-2
/*#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[]="x=10;y=20;z=30;";
    char *token=strtok(s1,";");                   
    while(token!=NULL)
    {
        cout<<token<<endl;
        token=strtok(NULL,";");
    }
    return 0;
}*/

//example-3
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[]="x/10?y/20?z/30?";
    char *token=strtok(s1,"?");                   
    while(token!=NULL)
    {
        cout<<token<<endl;
        token=strtok(NULL,"?");
    }
    return 0;
}