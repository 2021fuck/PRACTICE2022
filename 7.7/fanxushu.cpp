#include <iostream>
using namespace std;
int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  for (int i = 1001; i <= 1111; i++) {
    int num = i * 9;
    int a = i % 10;
    int b = i / 10 % 10;
    int c = i / 100 % 10;
    int d = i % 1000 % 10;
    int ans = a * 1000 + b * 100 + c * 10 + d;
    if (ans == num) cout << i;
  }

  return 0;
}