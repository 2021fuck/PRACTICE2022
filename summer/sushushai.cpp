#include <iostream>
using namespace std;
bool flag[100];
int main() {
  // bool flag[100];
  // for(int i=2;i<100;i++) flag[i]=true;  //bool b[100] = {false};
  // 初始化一个全为false的数组
  for (int i = 2; i < 100; i++)  // bool b[100] = {true}; 初始化一个首元素为true 其余元素为false的数组                               
  {                              //总之对数组进行初始化时 如要要对所有元素进行初始化 只能全部初始化为默认值
    if (!flag[i]) {              //除此之外需要遍历赋值
      for (int j = i; j * i < 100; j++) {
        flag[j * i] = true;
      }
    }
  }
  for (int i = 2; i < 100; i++) {
    if (!flag[i]) cout << i << endl;
  }
  system("pause");
  return 0;
}