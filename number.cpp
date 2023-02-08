#include <iostream>
using namespace std;
int number(int num);
main()
{
    int num,result;
    cout<<"Enter a number: ";
    cin>>num;
    result=number(num);
    cout<<result;

}
int number(int num)
{
    int sum=0;
    for(int i=0;i<=num;i++)
    {
        sum=sum+i;
    }
    return sum;
}
