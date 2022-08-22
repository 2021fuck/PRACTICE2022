#include <iostream>
#include <queue>
using namespace std;
class MyStack {
 public:
  queue<int> queue1;
  queue<int> queue2;
  MyStack() {}
  void push(int x) {
    queue1.push(x);
    while (!queue2.empty()) {
      queue1.push(queue2.front());
      queue2.pop();
    }
    swap(queue1, queue2);
  }
  int pop() {
    int r = queue2.front();
    queue2.pop();
    return r;
  }
  int top() { return queue2.front(); }
  bool empty() { return queue2.empty(); }
};

int main() { return 0; }