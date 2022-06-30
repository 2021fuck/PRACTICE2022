#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char arr[1000][20];
    int n,m,index=0;
    cin>>n>>m;
    if(n>20000||m>20000) return 0;
    for(int i=0;i<m+n;i++)
    {
        cin>>arr[i];
    }
    for (int j = 0; j < m; j++)
    {
    for (int i = 0; i < m; i++)
    {
        if (strcmp(arr[i],arr[m+j])==0) index++;
    }
    cout<<index<<endl;
    index=0;
    }
    
system("pausse");
    return 0;
}