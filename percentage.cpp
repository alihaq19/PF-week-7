#include <iostream>
using namespace std;
main()
{
    int range;
    int number;
    float p1=0.0;
    float p2=0.0;
    float p3=0.0;
    float percentage1;
    float percentage2;
    float percentage3;
    cout<<"Enter a range for the count of numbers: ";
    cin>>range;
    for(int i=1;i<=range;i++)
    {
        cout<<"Enter number: ";
        cin>>number;
        if(number%2==0)
        {
            p1=p1+1;
        }
        if(number%3==0)
        {
            p2=p2+1;
        }
        if(number%4==0)
        {
            p3=p3+1;
        }
    }
    percentage1=(p1/range)*100;
    percentage2=(p2/range)*100;
    percentage3=(p3/range)*100;
    cout<<percentage1<<endl;
    cout<<percentage2<<endl;
    cout<<percentage3<<endl;
}