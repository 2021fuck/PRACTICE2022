#include <algorithm>
#include <iostream>
using namespace std;

struct tv {
  int start, end, len;
};
bool cmp(struct tv m, struct tv n) { return m.end < n.end; }
int main() {
  int n, index = 1;
  struct tv Tv[n];
  while (scanf("%d",&n)==1) {
    if (n == 0) break;
    for (int i = 0; i < n; i++) {
      cin >> Tv[i].start >> Tv[i].end;
      // Tv[i].len=Tv[i].end-Tv[i].start;
      // if(cin.get()==0) break;
    }
    sort(Tv, Tv + n, cmp);
    int end = Tv[0].end;
    for (int i = 1; i < n; i++) {
      if (Tv[i].start >= end) {
        index++;
        end = Tv[i].end;
      }
    }
  }

  cout << index;
  system("pause");
  return 0;
}