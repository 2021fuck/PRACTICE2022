#include <algorithm>
#include <iostream>
using namespace std;
struct task {
  string id;
  int start, end, len;
};
bool one(struct task p, struct task q) {
  if (p.start != q.start)
    return p.start < q.start;
  else
    return p.len < q.len;
}
bool two(struct task p, struct task q) {
  if (p.end != q.end)
    return p.end > q.end;
  else
    return p.len < q.len;
}
bool three(struct task p, struct task q) {
  if (p.len != q.len)
    return p.len < q.len;
  else
    return p.start < q.start;
}
int main() {
  int n, m;
  cin >> n >> m;
  struct task Task[n];
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    Task[i].id = s;
  }
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    Task[i].start = x;
  }
  for (int i = 0; i < n; i++) {
    int y;
    cin >> y;
    Task[i].end = y;
  }
  for (int i = 0; i < n; i++) {
    Task[i].len = Task[i].end - Task[i].start;
  }
  switch (m) {
    case 1:
      sort(Task, Task + n, one);
      break;
    case 2:
      sort(Task, Task + n, two);
      break;
    case 3:
      sort(Task, Task + n, three);
      break;
    default:
      break;
  }
  for (int i = 0; i < n; i++) {
    cout << Task[i].id << " " << Task[i].start << " " << Task[i].end << " "
         << Task[i].len << endl;
  }
  return 0;
}