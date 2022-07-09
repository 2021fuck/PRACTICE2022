#include <iostream>
#include<vector>
using namespace std;
int main() {
  int n,i,x;
  vector<int> num;
  cin >> n;
  while (n--) {
    int m;
    
    cin >> m;
    num.clear();
    for (int j = 0; j < m; j++) {cin >>x;num.push_back(x);}
    if (num[0] != num[1]) cout << 0 << " ";
    for ( i = 1; i < m -1; i++) {
      if ((num[i - 1] > num[i] && num[i + 1] > num[i]) ||
          (num[i - 1] < num[i] && num[i + 1] < num[i]))
        cout << i << " ";
    } if ((num[m - 1] != num[m - 2])) cout << m - 1;
    cout<<endl;
  }
  system("pause");
  return 0;
}