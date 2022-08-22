#include <iostream>
#include <set>
#include <vector>
using namespace std;
void ans(set<int> a, set<int> b) {
  int num = 0, m = a.size(), n = b.size();
  for (set<int>::iterator it = a.begin(); it != a.end(); it++) {
    if (b.find(*it) != b.end()) num++;
  }
  double down = m + n - num;
  printf("%.1lf\%\n", (num / down) * 100);
}
int main() {
  int n, index = 0, times;
  scanf("%d", &n);
  vector<int> num[n];
  while (n--) {
    int m;
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
      int M;
      scanf("%d", &M);
      num[index].push_back(M);
    }
    index++;
  }
  cin >> times;
  while (times--) {
    int up, down;
    scanf("%d%d", &up, &down);
    set<int> Up, Down;
    for (int i = 0; i < num[up - 1].size(); i++) Up.insert(num[up - 1][i]);
    for (int i = 0; i < num[down - 1].size(); i++)
      Down.insert(num[down - 1][i]);
    ans(Up, Down);
  }
  return 0;
}