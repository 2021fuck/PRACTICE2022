#include <bits/stdc++.h>
using namespace std;
long powAndMod(long a,long b,int p)
{
    long result = 1;
    long mod=a%p;
    if(b==0) return 1;
    if(b%2==1){
        b--;
        long c=powAndMod(a,b,p);
        result=(result*mod*c)%p;
    }else{
        b/=2;
        long c=powAndMod(a,b,p);
        result=(result*c*c)%p;
    }
    return result;
}
int main() {
  int A,B,P,sum;
  while(cin>>A>>B>>P)
  {
    sum=powAndMod(A,B,P);
    if(getchar()=='\n') break;
  }
  cout<<sum;
//   system("pause");
  return 0;
}