#include<iostream>

using namespace std;

int main()
{
    int n;
    int i;
    cout<<"Enter the number to check";
    cin>>n;
    
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            cout<<"is not prime";
            break;
        }
        
    }
    if((i*i)>n)
    {
        cout<<"is prime";
    }
    cout<<endl;
    
    return 0;
}
