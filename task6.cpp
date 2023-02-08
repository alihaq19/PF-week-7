#include <iostream>
using namespace std;
int GCD(int num1,int num2);
int LCM(int num1,int num2);
main()
{
    int num1,num2,lcm,gcd;
    cout<<"Enter a number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    gcd=GCD(num1,num2);
    lcm=LCM(num1,num2);
    cout<<"The GCD is "<< gcd<<endl;
    cout<<"The LCM is "<< lcm;

}
int GCD(int num1,int num2)
{
    int total,gcd;
    while(num2!=0)
    {
        total=num2;
        num2=num1%num2;
        num1=total;
        gcd=num1;
    }
    return gcd;

                                                                                                                                                                                                                                                                                                                    
}
int LCM(int num1,int num2)
{
    int lcm,total;
    lcm=num1*num2;
    total=lcm/GCD(num1,num2);
    return total;
}