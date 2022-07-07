  #include <algorithm>
  #include <iostream>
  using namespace std;
  struct money {
    int size, num;
  } M[101];
  bool cmp(struct money m, struct money n) { return m.size > n.size; }
  int main() {
    int index = 0;
    for (int i = 0;; i++) {
      cin >> M[i].size;
      index = i + 1;
      if (cin.get() == '\n') break;
    }
    for (int i = 0; i < index; i++) {
      cin >> M[i].num;
      if (cin.get() == '\n') break;
    }
    int yuan, times = 0;
    cin >> yuan;
    int chushi = yuan;
    sort(M, M + index, cmp);
    for (int i = 0; i < index + 1; i++) {
      if (yuan == 0) break;
      if (yuan > M[i].num * M[i].size) {
        yuan -= M[i].num * M[i].size;
        times += M[i].num;
      } else {
        times += yuan / M[i].size;
        yuan = yuan % M[i].size;
      }
    }
    cout << times;
    // system("pause");
    return 0;
  }