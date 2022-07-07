#include <bits/stdc++.h>
using namespace std;
int main() {
  int num;
  cin >> num;
  int N[101];
  int j = 0, index = 0,ch;
  int Max = 0;
  while (1) {
    int i=0;
     while (cin >> N[i++])
      if (getchar() == '\n') break;
    if (N[0]==0&&i==1) break;
    int max = 0;
    for (int k = 0; k < num - 1; k++) {
      int cha = N[k + 1] - N[k];
      if (cha >=0) max += cha;
    }j++;
    if (max > Max) {
      Max = max;
      index = j;
    }
  }
  printf("%d %d", index, Max);
//   system("pause");
  return 0;
}
