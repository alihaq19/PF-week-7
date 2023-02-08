#include <iostream>
using namespace std;
main()
{
    for(int i=1;i<=15;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
    }
    for(int i=15;i>=1;i--)
    {
        for(int j=i;j>=1;j--)
        {
            cout<<" ";
        }
        for(int j=15;j>=1;j--)
        {
            cout<<"*";
        }
    }
}