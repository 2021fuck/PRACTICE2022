#include <iostream>
#include <map>
using namespace std;
int main() {
  pair<float, float> point[3];
  while (1) {
    int n;
    cin >> n;
    if (n == 0) break;
    while (n--) {
      for (int i = 0; i < 3; i++) {
        float x, y;
        cin >> x >> y;
        point[i].first = x;
        point[i].second = y;
      }
      float X = 0, Y = 0;
      for (int i = 0; i < 3; i++) {
        X += point[i].first;
        Y += point[i].second;
      }
      printf("%.1f %.1f\n", X / 3.0, Y / 3.0);
    }
  }
  system("pause");
  return 0;
}