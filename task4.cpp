#include <iostream>
using namespace std;
int digit(int number,int digit);
main()
{
    int number,digit,result;
    cout<<"Enter the number: ";
    cin>>number;
    cout<<"Enter the digit: ";
    cin>>digit;
    result=(number,digit);
    cout<<result;
}
int digit(int number,int digit)
{
    int mod;
    int count=0;
    while(number!=0)
    {
        mod=number%10;
        number=number/10;
        if(mod==digit)
        {
            count=count+1;
        }
    }
    return count;
}
