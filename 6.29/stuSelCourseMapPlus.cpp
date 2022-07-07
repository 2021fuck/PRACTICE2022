#include <bits/stdc++.h>
using namespace std;
int main() {
  int stuNum, courseNum, index, courseId;
  cin >> stuNum >> courseNum;
  map<int, vector<string>> MyMap;
  while (stuNum--) {
    string s;
    cin >> s >> index;
    for (int i = 0; i < index; i++) {
      cin >> courseId;
      MyMap[courseId].push_back(s);
    }
  }
  for (int i = 1; i <= courseNum; i++) sort(MyMap[i].begin(), MyMap[i].end());
  for (int i = 1; i <= courseNum; i++) {
    cout << i << " " << MyMap[i].size() << endl;
    for (int j = 0; j < MyMap[i].size(); j++) cout << MyMap[i][j] << endl;
  }
  system("pause");
  return 0;
}