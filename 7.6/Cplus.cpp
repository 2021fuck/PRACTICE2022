#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fiboTail(ll n, ll acc, ll cal) 
//acc充当收集器的左右，收集上一次运行栈的返回值，因为之后栈空间会被回收
//cal是每一次递归的计算
{
    if (n == 1) return acc;
    if (n == 2) return cal;
    return fiboTail(n - 1, cal, acc+cal);
}
int main(){
//  freopen("in.in","r",stdin);
// freopen("out.in","w",stdout);
 ll n;
 while(cin>>n){
    cout<<fiboTail(n,1,1)<<" ";
    if(getchar()=='\n')break;
 }
return 0;
}
