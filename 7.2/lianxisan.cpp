#include <iostream>
#include <map>
using namespace std;
int main() {
  map<char, string> myMap;
  myMap['0'] = "zero", myMap['1'] = "one", myMap['2'] = "two",
  myMap['3'] = "three", myMap['4'] = "four", myMap['5'] = "five",
  myMap['6'] = "six", myMap['7'] = "seven", myMap['8'] = "eight",
  myMap['9'] = "nine";
  string s;
  int sum;
  cin >> s;
  for (int i = 0; i < s.size(); i++) sum += s[i] - '0';
  string S = to_string(sum);
  for (int i = 0; i < S.size(); i++) cout << myMap[S[i]] << " ";
  // system("pause");
  return 0;
}