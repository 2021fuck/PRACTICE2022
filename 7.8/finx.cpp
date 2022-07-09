#include <iostream>
using namespace std;
int main() {
  int n, j = 0, x;
  int index[100];
  int num[200];
  while (cin >> n) {
    for (int i = 0; i < n; i++) cin >> num[i];
    cin >> x;
    index[j] = -1;
    for (int i = 0; i < n; i++) {
      if (num[i] == x) {
        index[j] = i;
        break;
      }
    }
    j++;
  }
  for (int k = 0; k < j; k++) cout << index[k] << endl;
  system("pause");
  return 0;
}