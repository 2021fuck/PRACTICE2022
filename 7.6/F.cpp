#include <bits/stdc++.h>
using namespace std;
long long num[92] = {0};
long long fun(int n) {
  if(n==1||n==2) return n;
  if (num[n] > 0)
    return num[n];
  else
    num[n] = fun(n - 1) + fun(n - 2);
  return num[n];
}
int main() {
  int n;
  while (cin >> n) {
    cout << fun(n) << " ";
    if (getchar() == '\n') break;
  }
//   system("pause");
  return 0;
}