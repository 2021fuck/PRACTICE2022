#include <iostream>
using namespace std;
int main() {
  int num[200], index, m;
  for (int i = 0;; i++) {
    cin >> num[i];
    index = i + 1;
    if (cin.get() == '\n') break;
  }
  cin >> m;
  for (int i = 0; i < m; i++) {
    int min = i;
    for (int j = i; j < index; j++) {
      if (num[j] < num[min]) min = j;
    }
    if (i != min) {
      int temp = num[i];
      num[i] = num[min];
      num[min] = temp;
    }
  }
  for (int i = 0; i < index; i++) cout << num[i] << " ";
  return 0;
}