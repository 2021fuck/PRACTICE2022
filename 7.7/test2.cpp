#include <bits\stdc++.h>
using namespace std;
bool num[10001] = {true};
int ans[10001] = {0};
int main() {
  int n, index = 0;
  for (int i = 2; i < 10001; i += 2) {
    if (num[i]) {
      ans[index++] = i;
      for (int j = i + i; j < 10001; j += i) num[j] = false;
    }
  }
    cin>>n;
    for(int i=0;;i++)
    {
        if(ans[i]<=n)
        cout<<ans[i];
        else break;
    }
  system("pause");
  return 0;
}