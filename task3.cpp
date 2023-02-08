#include <iostream>
using namespace std;
int totalDigits(int number);
main()
{
    int number;
    int result;
    cout<<"Enter a number ";
    cin>>number;
    result=totalDigits(number);
    cout<<result;
}
int totalDigits(int number)
{
    int count=0;
    while(number>0)
    {
        count=count+1;
        number=number/10;
    }
    return count;

}
