#include <iostream>
#include <stack>
using namespace std;
int main() {
  stack<int> st;
  int num;
  cin >> num;
  while (num != 0) {
    st.push(num % 8);
    num /= 8;
  }
  while (!st.empty()) {
    printf("%d",st.top());
    st.pop();
  }
  system("pause");
  return 0;
}