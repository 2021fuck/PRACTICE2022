#include <bits/stdc++.h>
using namespace std;
long long fun(long long n)
{
    if(n==1) return 1;
    else return n*fun(n-1)%97;
}
int main() {
    long long n;
  while (cin>>n)
  {
    
    cout<<fun(n)<<" ";
    // printf("%ld ",fun(n));
    if(getchar()=='\n') break;
  }
  
//   system("pause");
  return 0;
}