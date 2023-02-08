#include <iostream>
using namespace std;
int sum(int number);
main()
{
    int number,add;
    cout<<"Enter a number to print its sum: ";
    cin>>number;
    add=sum(number);
    cout<<add;

}
int sum(int number)
{
    int total;
    int digit=0;
    int i=0;
    while(number>0)
    {
       i=i+1;
       total=number%10;
       digit=digit+total;
       number=number/10;
    }
    return digit;
}
