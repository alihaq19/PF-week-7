#include <iostream>
using namespace std;
void fib(int number1,int number2,int length);
main()
{
    int number1,number2,number;
    cout<<"Enter a number ";
    cin>>number;
    fib(number1,number2,number);

}
void fib(int number1,int number2,int length)
{
    number1=0;
    number2=1;
    int nextnum=0;
    for(int i=0;i<=length;i++)
    {
        cout<<nextnum << endl;
        number1=number2;
        number2=nextnum;
        nextnum=number1+number2;
    }


}