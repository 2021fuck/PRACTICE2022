#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    vector<int> number;
    int n,t;;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        number.push_back(t);
    }
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[number[i]]=i;
    }
    int m,target;
    cin>>m;
    for(int j=0;j<m;j++)
    {
        cin>>target;
        bool find=false;
        for(int i=0;i<n&&!find;i++)
        {
            if (mp.find(target-number[i])!=mp.end())
            {
                cout<<"["<<mp[number[i]]<<","<<mp[target-number[i]]<<"]"<<endl;
                find=true;
                break;
            }
        }
        if(!find) cout<<"no\n";
    }
    return 0;
}