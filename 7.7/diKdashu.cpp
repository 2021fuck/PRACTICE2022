#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> mv;
    int n,num;
    cin>>n>>num;
    for(int i=0;i<n;i++)
    {
        int m;cin>>m;
        mv.push_back(m);
    }
    sort(mv.begin(),mv.end());
    cout<<mv[n-num];
    system("pause");
    return 0;
}
