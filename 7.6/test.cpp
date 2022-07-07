#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long A,B,C;
    long long num[1000]={0};
    cin>>A>>B>>C;   
    for(int i=1;i<=B;i++)
    {       
        num[i]=pow(A%C,i);
    }
    cout<<num[B];
    system("pause");
    return 0;
}