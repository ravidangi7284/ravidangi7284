#include<iostream>

using namespace std;
int main(){
    int n, i, fm, marks, m;
    float cgpa;
    int tm=0;
    float per, percentage;
    
    cout<<"enter the number of subjects";
    cin>>n;
    cout<<"enter the full marks of each subjects";
    cin>>m;
    fm=m*n;
    for(i=1; i<=n; i++){
        cout<<"enter the obtained marks of "<<i<<"  subjects";
        cin>>marks;
        tm+=marks;
    
    }
    per=(float)tm/(float)fm;
    percentage=per*100;
    cgpa=(float)percentage/9.5;
    cout<<"obtained percentage marks = "<<percentage<<"%";
    cout<<"  obtained CGPA = "<<cgpa;
    
    return 0;
    
}
