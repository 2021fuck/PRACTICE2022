#include<bits/stdc++.h>
using namespace std;
int main() {
  string s;
    getline(cin,s);
    istringstream ss(s);
  int N[101] = {0};
  int j = 1,i=0;
  while (j--) {
   while(ss>>N[i])i++;
    int max = 0, min = 0;
    for (int k = 0; k < i-1; k++) {
      int cha = N[k + 1] - N[k];
      if (cha > 0)
        max += cha;
      else
        min += N[k] - N[k + 1];
    }
    printf("%d %d", max, min);
  }
// system("pause");
  return 0;
}
   