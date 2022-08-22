#include <iostream>
#include <stack>
using namespace std;
const int maxn = 1010;
int arr[maxn];
stack<int> st;
int main() {
  int m, n, T;
  scanf("%d%d%d", &m, &n, &T);
  while (T--) {
    while (!st.empty()) st.pop();
    for (int i = 1; i <= n; i++) scanf("%d", &arr[i]);
    int current = 1;  //指向要弹出的元素
    bool flag = true;

    for (int i = 1; i <= n; i++) {
      st.push(i);
      if (st.size() > m) {
        flag = false;
        break;
      }
      //栈顶元素与出栈当前位置的元素相同
          while (!st.empty() && st.top() == arr[current]) {
        printf("\n%d",st.top());  //反复弹栈并令current++
        st.pop();
        current++;
      }
    }
    if (st.empty() == true && flag == true) {
      printf("yes\n");
    } else {
      printf("no\n");
    }
  }

  system("pause");
  return 0;
}