#include <bits/stdc++.h>
using namespace std;

string num2str(int n) {
  string temp;
  do {
    temp = (char)(n % 10 + '0') + temp;
    n = n / 10;
  } while (n != 0);
  return temp;
}

int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int n;
  while (cin >> n) {
    int k = n * n;
    string s1 = num2str(n);
    string s2 = num2str(k);
    int len = s1.length();
    int len2 = s2.length();

    int num = 0;
    int j = 0;
    for (int i = len2 - len; i < len2; i++) {
      if (s2[i] != s1[j]) {
        cout << "No!" << endl;
        break;
      } else {
        num++;
      }
      j++;
    }
    if (num == len) {
      cout << "Yes!" << endl;
    }
  }
  return 0;
}