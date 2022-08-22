#include <iostream>
using namespace std;
int main() {
  int n, m;
  cin >> n;
  int num[n];
  for (int i = 0; i < n; i++) cin >> num[i];
  cin >> m;
  while (m--) {
    int x, y, sum = 0;
    cin >> x >> y;
    for (int i = x - 1; i < y; i++) sum += num[i];
    cout << sum << endl;
  }
  system("pause");
  return 0;
}