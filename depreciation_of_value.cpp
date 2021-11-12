#include<iostream>

using namespace std;

int main()
{
    float a, p, r, t;
   
    cout<<"Enter the Initial maount : ";
    cin>>p;
    cout<<"Enter the rate of depreciation per year : ";
    cin>>r;
    cout<<"Enter the number of years : ";
    cin>>t;
    
    float x, y;
    y=1;
    x = (1-(r/100));
    for(int i=1; i<=t; i++)
    {
        y*=x;
      
    }
    a = p*y;
    cout<<"depreciation of value : "<<a;
    
    return 0;
}
