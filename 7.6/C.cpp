#include <bits/stdc++.h>
using namespace std;
// long long fab(int n) {
//   if (n == 1 || n == 2)
//     return 1;
//   else
//     return fab(n - 1) + fab(n - 2);
// }
int main() {
  int n;
    long long num[92]={0};
    num[1]=1,num[2]=1;
    for(int i=1;i<92;i++)
    {
        num[i+1]=num[i]+num[i-1];
    }
    while(cin>>n){
        cout<<num[n]<<" ";
        if(getchar()=='\n') break;
    }
//   system("pause");
  return 0;
}