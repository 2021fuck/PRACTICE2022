#include <iostream>
#include <map>
using namespace std;
struct student {
  string name;
  int scores;
};
int main() {
  int n;
  cin >> n;
  struct student stu[n];
  for (int i = 0; i < n; i++) {
    cin >> stu[i].name;
  }
  for (int i = 0; i < n; i++) {
    cin >> stu[i].scores;
  }
  for (int i = 0; i < n - 1; i++)
    for (int j = 0; j < n - 1; j++) {
      if (stu[j].scores < stu[j + 1].scores) {
        struct student temp = stu[j];
        stu[j] = stu[j + 1];
        stu[j + 1] = temp;
      }
    }
  for (int i = 0; i < n; i++) {
    cout << stu[i].name;
  }
  return 0;
}
