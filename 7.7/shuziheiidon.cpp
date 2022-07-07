#include <bits/stdc++.h>
using namespace std;
bool cmp(char m, char n) { return m >= n; }
int main() {
  // freopen("input.txt","r",stdin);
  // freopen("output.txt","w",stdout);
  string s, S;
  int num1, num2,i , ans = 0;
  cin>>s;
    while (1) {
      S = s;
      sort(s.begin(), s.end());
      sort(S.begin(), S.end(), cmp);
      num1 = stoi(S), num2 = stoi(s);
      ans = num1 - num2;
      if (ans == 0) {
        cout << S << " " << '-' << " " << s << " " << '='<<" ";
        for ( i = 0; i < s.size(); i++) cout << 0;
        cout << endl;
        break;
      }
      printf("%04d - %04d = %04d\n",num1,num2,ans);
      // cout << S << " " << '-' << " " << s << " " << '=' << " " << ans << endl;
      if (num1-num2 == 6174) break;
      s = to_string(ans);
    }
  system("pause");
  return 0;
}