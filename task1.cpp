#include <iostream>
using namespace std;
void table(int number);
main()
{
    int number,result;
   table(number);
   
    
}
void table(int number)
{
    int product;
    cout<<"Enter a number to print its table: ";
    cin>>number;
    for(int count=1;count<=10;count=count+1)
    {
        product=number*count;
        cout<<number << " * " << count << " = " << product<<endl;
    }
    

}