#include<iostream>

using namespace std;

int main()
{
    int n, sum;
    sum=0;
    cout<<"Enter the number : ";
    cin>>n;
    
    for(int i=1; i<=n; i++)
    {
        sum +=i;
    }
    cout<<"Addition of n number is : "<<sum;
    return 0;
}
