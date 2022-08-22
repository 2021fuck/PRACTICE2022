#include<iostream>
#define maxn 100000
using namespace std;
void fun1(int num[],int L1,int R1,int L2,int R2)
{
    int i=L1,j=L2;
    int temp[maxn],index=0;
    while (i<=R1&&j<=R2)
    {
        if(num[i]<=num[j]) temp[index++]=num[i++];
        else temp[index++]=num[j++];
    }
    while(i<=R1) temp[index++]=num[i++];
    while(j<=R2) temp[index++]=num[j++];
    for(i=0;i<index;i++) num[L1+i]=temp[i];
}
void fun2(int num[],int left,int right)
{
    if(left<right){
        int mid=(left+right)/2;
        fun2(num,left,mid);
        fun2(num,mid+1,right);
        fun1(num,left,mid,mid+1,right);
    }
}
int main()
{
    int n;scanf("%d",&n);
    while (n--)
    {
        int m;scanf("%d",&m);
        int num[m];
        for(int i=0;i<m;i++) scanf("%d",&num[i]);
        fun2(num,0,m-1);
        for(int i=0;i<m;i++) printf("%d\n",num[i]);
    }
    system("pause");
    return 0;
}