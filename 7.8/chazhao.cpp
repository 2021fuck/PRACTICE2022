#include<iostream>
#include<algorithm>
using namespace std;
bool fun(int num[],int left,int right,int x)
{
    int mid;
    while (left<=right)
    {
        mid=(left+right)/2;
        if(num[mid]==x) return true;
        else if(num[mid]>x) right=mid-1;
        else left=mid+1;
    }
    
    return false; 
}
int main()
{
    int n;
    while (cin>>n)
    {
        int num[n];
        for(int i=0;i<n;i++) cin>>num[i];
        sort(num,num+n);
        int m;cin>>m;
        while (m--)
        {
            int x;cin>>x;
            if(fun(num,0,n,x)) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    system("pause");
    return 0;
}