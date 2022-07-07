#include<bits/stdc++.h>
using namespace std;
 
int parti(vector<int>&res, int i, int j)
{
    int left = i, right = j;
    while(left < right)
    {
        while(left < right && res[i] <= res[right])
            right--;
        while(left < right && res[i] > res[left])
            left++;
        swap(res[left], res[right]);
    }
    swap(res[i], res[left]);
    return left;
}
 
int find_k(vector<int>&res, int &k, int i, int j)
{
    while(i <= j)
    {
        int index = parti(res, i, j);
        if(index > res.size()-k)
            j = index;
        else if(index < res.size()-k)
            i = index+1;
        else
            return index;
    }
 
}
 
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int m, k;
    cin >> m >> k;
    vector<int>res(m);
    for(int i=0; i<m; ++i)
        cin >> res[i];
    int index = find_k(res, k, 0, res.size()-1);
    cout <<res[index] << endl;
}