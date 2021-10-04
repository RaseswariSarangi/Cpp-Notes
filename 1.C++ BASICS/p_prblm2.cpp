/*#include<iostream>
using namespace std;
int main()
{
    float basic_salary,poa,pod;
    cout<<"Enter the basic salary,percentage of allowances and percentage of deduction:";
    cin>>basic_salary>>poa>>pod;
    float net_salary = basic_salary + basic_salary*poa/100 - basic_salary*pod/100;
    cout<<"Net salary = "<<net_salary;
    return 0;
}*/


//by instructor
#include<iostream>
using namespace std;
int main()
{
    float basic;
    float percentAllow;
    float percentDeduct;
    float netSalary;
    cout<<"Enter Basic Salary:";
    cin>>basic;
    cout<<"Enter percent of Allowences:";
    cin>>percentAllow;
    cout<<"Enter percent of Deductions:";
    cin>>percentDeduct;
    netSalary=basic+basic*percentAllow/100-
    basic*percentDeduct/100;
    cout<<"Net Salary is:"<<netSalary<<endl;
    return 0;
}