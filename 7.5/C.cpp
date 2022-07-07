#include <iostream>
#include <vector>
using namespace std;
int main() {
  vector<int> mv;
  while (1) {
    int index = 0;
    mv.clear();
    for (int i = 0;; i++) {
      int x;cin >> x;
      mv.push_back(x);
      index = i + 1;
      if (cin.get() == '\n') break;
    }
    if (index == 1 && mv[0] == 0) break;
    int max = mv[0], sum = 0;
    for (int i = 0; i < index; i++) {
      sum += mv[i];
      if (sum < 0) sum = 0;
      if (sum > max) max = sum;
    }
    printf("%d\n", max);
  }
//   system("pause");
  return 0;
}