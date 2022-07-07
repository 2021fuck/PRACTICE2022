#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    istringstream ss(s);
    int num[100]={0},i=0;
    while(ss>>num[i])i++;
    for(int i=0;num[i]!=0;i++)
    {
    cout<<num[i]<<" ";
    }
    system("pause");
    return 0;
}