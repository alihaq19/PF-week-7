#include <iostream>
using namespace std;
main()
{
    for(int i=30;i>=1;i--)
    {
        for(int j=i;j>=1;j--)
        {
            cout<<" ";
        }
        for(int j=30;j>=i;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int x=1;x<=30;x++)
    {
        for(int y=1;y<=x;y++)
        {
            cout<<" ";
        }
        for(int y=30;y>=x;y--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}