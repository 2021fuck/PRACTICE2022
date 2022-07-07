#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include<cmath>
using namespace std;
struct things {
  string id;
  double weight, money, jiage;
};
bool cmp(struct things m, struct things n) {
    double num=m.jiage-n.jiage;
  if (num<1e-6)
      return m.weight < n.weight;
  else
  return m.jiage > n.jiage;
}
int main() {
  vector<things> Thing;
  vector<string> S;
  vector<double> weight;
  vector<double> money;
  vector<double> danja;
  int index = 0;
  string s;
  while (1) {
    cin >> s;
    S.push_back(s);
    index++;
    if (cin.get() == '\n') break;
  }
  for (int i = 0; i < index; i++) {
    double w;
    cin >> w;
    weight.push_back(w);
  }
  for (int i = 0; i < index; i++) {
    double m;
    cin >> m;
    money.push_back(m);
  }
  for (int i = 0; i < index; i++) {
    danja.push_back(money[i] / weight[i]);
  }
  for (int i = 0; i < index; i++) {
    struct things T;
    T.id = S[i], T.jiage = danja[i], T.money = money[i], T.weight = weight[i];
    Thing.push_back(T);
  }
  sort(Thing.begin(), Thing.end(), cmp);
  for (int i = 0; i < index; i++) cout << Thing[i].id << " ";
  return 0;
}