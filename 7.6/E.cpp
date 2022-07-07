#include <bits/stdc++.h>
using namespace std;
int fun(int up, int down, int height) {
    int sum=0;
    if(height=0) return sum;
    if(up>0){
        height*=2;
        up--;
        fun(up,down,height);
    }
    if(down>0){
        height-=1;
        down--;
        fun(up,down,height);
    }
}
int main() {
  int up, down, height, sum;
  cin >> up >> down >> height;
  sum = fun(up, down, height);
  cout << sum;
  system("pause");
  return 0;
}