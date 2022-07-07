#include<iostream>>
using namespace std;
int main()
{
    int n,x;
    char a;
    cin>>n>>a;
    float m=n/2.0;
    if(m+0.5>=n/2+1) x=n/2+1;
    else x=n/2; 
    for(int j=0;j<x;j++)
    {
        if(j==0||j==x-1){ for(int i=0;i<n;i++) cout<<a;cout<<endl; }
        else{
            cout<<a;
            for(int i=0;i<n-2;i++) cout<<" ";
            cout<<a<<endl;
        }
    }
    return 0;
} 