//declaration of string
/*#include<iostream>
using namespace std;
int main()
{
    char s[10];
    cout<<"Enter your name:";
    cin>>s;                                    //it only takes the first word or the first name and leaves the rest
    cout<<"Welcome "<<s<<endl;

    char e[50];
    cout<<"Enter name:";
    //cin.getline(e,50);                               //50--here the maximum number of characters that can be taken in a string
    cin.get(e,50);                                     //get and getline (built-in fuctions) will take the whole sentence instead of first word
    cout<<"Welcome "<<e<<endl;                                  
    return 0;                                          

}*/
//though e[50] is declared but in getline(e,50)---50 is the maxm character length that can be inserted

//to avoid the error in multiple string inputs by get function 
#include<iostream>
using namespace std;
int main()
{
    char s[10];
    cout<<"Enter your name:";
    cin.get(s,20);                                    
    cout<<"Welcome "<<s<<endl;

    cin.ignore();             //this func will ignore the newline or any other character when we hit enter, so we will be able to take the second input

    char s1[10];
    cout<<"Enter your name:";
    cin.get(s1,20);                                    //it only takes the first word or the first name and leaves the rest
    cout<<"Welcome "<<s1<<endl;

    return 0;
}
