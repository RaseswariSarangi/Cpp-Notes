//count the number of vowels and words present in the string
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter string:";
    getline(cin,s);
    int vowel=0,consonant=0,words=0;
    for(int j=0;s[j]!='\0';j++)
        {
            if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'||s[j]=='A'||s[j]=='E'||s[j]=='I'||s[j]=='O'||s[j]=='U')
                vowel++;
            else if(s[j]==' ')
                words++;
            else consonant++;
        }
    cout<<"The number of vowels are "<<vowel<<endl;
    cout<<"The number of consonant are "<<consonant<<endl;
    cout<<"The number of words are "<<words+1<<endl;
    return 0;
}
