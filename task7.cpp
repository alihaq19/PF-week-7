#include <iostream>
using namespace std;
void printPercentage(int number);
main()
{
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    printPercentage(number);
}
void printPercentage(int number)
{
    float add1,add2,add3,add4,add5;
    float per1,per2,per3,per4,per5;
    float range,digit;
    for(int i=1;i<=number;i++)
    {
        cout<<"Enter number: ";
        cin>>digit;
        if(range>=1&&range<200)
        {
            add1=add1+1;
            per1=(add1/number)*100;
            cout<<per1;
        }
        else if(range>=200&&range<=399)
        {
            add2=add2+1;
            per2=(add2/number)*100;
            cout<<per2;
        }
        else if(range>=400&&range<599)
        {
            add3=add3+1;
            per3=(add3/number)*100;
            cout<<per3;
        }
        else if(range>=600&&range<=799)
        {
            add4=add4+1;
            per4=(add4/number)*100;
            cout<<per4;
        }
        else if(range>800)
        {
            add5=add5+1;
            per5=(add5/number)*100;
            cout<<per5;
        }
    }
}