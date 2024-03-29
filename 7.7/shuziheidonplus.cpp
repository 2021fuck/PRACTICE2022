#include <algorithm>
#include <iostream>
using namespace std;
bool cmp(int a, int b) { return a > b; }
void to_array(int n, int num[])  //将n的每一位存到num数组中
{
  for (int i = 0; i < 4; i++) num[i] = n % 10;
  n /= 10;
}
int to_number(int num[])  //将num数组转换为数字
{
  int sum = 0;
  for (int i = 0; i < 4; i++) sum = sum * 10 + num[i];
  return sum;
}
int main() {
  int n, MIN, MAX;
  scanf("%d", &n);
  int num[5];
  while (1) {
    to_array(n, num);         //将n转化为数组
    sort(num, num + 4);       //对num数组中元素从小到大排序
    MIN = to_number(num);     //获取最小值
    sort(num, num + 4, cmp);  //对num数组中元素从小到大排序
    MAX = to_number(num);     // 获取最大值
    n = MAX - MIN;            //得到下一个数
    printf("%04d - %04d = %04d\n", MAX, MIN,
           n);  //此处使用printf更好  格式符输出可以用0来占位
    if (n == 0 || n == 6174) break;
  }
  return 0;
}