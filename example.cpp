#include <iostream>
using namespace std;
main()
{
   int number;
   cout<<"Guess my lucky number ";
   cin>>number;
   while(number!=10)
   {
    cout<<"Not valid try again!"<<endl;
    cout<<"Guess again ";
    cin>>number;
   }
   cout<<"Yes it is";
}