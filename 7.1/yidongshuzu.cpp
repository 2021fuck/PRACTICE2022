#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> num;
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        num.push_back(n);
    }
    int m;
    cin>>m;
    for(int i=m;i<num.size();i++) cout<<num[i]<<" ";
    for(int i=0;i<m;i++) cout<<num[i]<<" ";
    
    return 0;
}