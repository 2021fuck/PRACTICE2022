#include <algorithm>
#include <iostream>
#include<cmath>
using namespace std;
struct goods {
  double weight, money;
  double danjia;
}good[2000];
bool cmp(struct goods m, struct goods n) { return m.danjia>n.danjia ; }
int main() {
  int n, index = 0, w, Sum = 0; 
  double sum=0;
  for (int i = 0;; i++) {
    double x;
    cin>>x;
    good[i].weight=x;
    index = i + 1;
    if (cin.get() == '\n') break;
  }
  for (int i = 0;; i++) {
     double x;
    cin>>x;
 good[i].money=x;
    if (cin.get() == '\n') break;
  }
  for (int i = 0;i<index; i++) {
    good[i].danjia = good[i].money / good[i].weight;
  }
  cin >> w;
  sort(good, good + index, cmp);
  for (int i = 0; i < index; i++) {
    if (Sum + good[i].weight > w) {
      sum += (w - Sum) * good[i].danjia;
      break;
    } else {
      Sum += good[i].weight;
      sum += good[i].money;
    }
  }
  printf("%.2f",sum);


  return 0;
}