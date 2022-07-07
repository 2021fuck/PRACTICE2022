#include <algorithm>
#include <iostream>
#include <map>
using namespace std;
struct student {
  string name;
  int yuwen, shuxue;
};
bool cmp(struct student m, struct student n) {
  if ((m.yuwen + m.shuxue) != (n.yuwen + n.shuxue))
    return (m.yuwen + m.shuxue) > (n.yuwen + n.shuxue);
  else {
    if (m.yuwen != n.yuwen)
      return m.yuwen > n.yuwen;
    else
      return m.name < n.name;
  }
}
int main() {
  int n;
  cin >> n;
  struct student stu[n];
  for (int i = 0; i < n; i++) cin >> stu[i].name;
  for (int i = 0; i < n; i++) cin >> stu[i].yuwen;
  for (int i = 0; i < n; i++) cin >> stu[i].shuxue;
  sort(stu, stu + n, cmp);
  for (int i = 0; i < n; i++)
    cout << stu[i].name << " " << stu[i].shuxue + stu[i].yuwen << endl;
  return 0;
}
