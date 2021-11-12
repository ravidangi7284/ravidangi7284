#include<iostream>

using namespace std;

int main()
{
    float a, p, r, t, n;
   
    cout<<"Enter the Initial Partial Balance : ";
    cin>>p;
    cout<<"Enter the Interest Rate : ";
    cin>>r;
    cout<<"Enter the Time Period : ";
    cin>>t;
    cout<<"Enter the number of times interest applied per time period : ";
    cin>>n;
    float x, y;
    y=1;
    x = (1+(r/n));
    for(int i=1; i<=(n*t); i++)
    {
        y*=x;
        cout<<y;
    }
    a = p*y;
    cout<<"Compound Interest : "<<a;
    
    return 0;
}
