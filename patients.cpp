#include <iostream>
using namespace std;
main()
{
    int period;
    int patients;
    int treated;
    int untreated;
    int total_treated=0;
    int total_untreated=0;
    cout<<"Enter a certain period: ";
    cin>>period;
    for(int i=1;i<=period;i++)
    {
        cout<<"Enter the number of patients: ";
        cin>>patients;
        if(patients<=7)
        {
            treated=patients;
            untreated=7-7;
            total_treated=total_treated+treated;
            total_untreated=total_untreated+untreated;
        }
        else if(patients>7)
        {
            untreated=patients-7;
            treated=patients-untreated;
            if(untreated>treated)
            {
                untreated=patients-8;
                treated=patients-untreated;
            }
            total_treated=total_treated+treated;
            total_untreated=total_untreated+untreated;
        }

       
    }
    cout<<"Treated = "<< total_treated<<endl;
    cout<<"Untreated = "<< total_untreated;

}