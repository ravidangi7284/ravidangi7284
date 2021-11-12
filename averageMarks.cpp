#include<iostream>

using namespace std;
    
    int main()
    {
        float n, sum, m, avg;
        sum = 0;
        cout<<"Enter the number of subject : ";
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            cout<<"Enter the "<<i<<" subject marks : ";
            cin>>m;
            sum += m;
        }
        avg = sum/n;
        cout<<"Average : "<<avg;
        
        return 0;
    }
