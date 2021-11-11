#include<iostream>

using namespace std;
 
 void pattern()
 {
     int n;
     cout<<"enter he number of column";
     cin>>n;
     
     for(int i=1; i<=n; i++)
     {
         for(int j=1; j<=i; j++)
         {
             cout<<"*";
             
             
         }
         cout<<endl;
     }
     
 }
