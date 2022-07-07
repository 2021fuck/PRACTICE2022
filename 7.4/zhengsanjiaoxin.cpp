#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void fun(vector<int> &num)
{


}
// bool cmp(int m,int n)
// {
//     return m<n;
// }
int main()
{
    freopen("input.txt","r",stdin);
    vector<int> num;
    int n,m;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        num.push_back(m);
    }
    sort(num.begin(),num.end());
    fun(num);
    return 0;
}