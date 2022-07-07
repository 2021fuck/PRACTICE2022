#include<iostream>
using namespace std;
int main()
{
    int n,index;
    char c;
    cin>>n>>c;
    for(int i=0;i<=n;i++) if(i%2==1) index++;
    index=index/2;
    for(int i=0;i<index;i=i+2)
    {
        if(i==0)
        {
            for(int j=0;j<index;j++) 
            cout<<c; cout<<endl;}
        else 
        {
            for(int m=0;m<i-1   ;m++) cout<<" ";
            for(int j=0;j<index-i;j++) cout<<c; cout<<endl;
        }
    }
    return 0;
} 