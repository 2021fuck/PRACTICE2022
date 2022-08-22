#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
const int maxn = 100010;
int A[maxn], n;  // A存所有整数 n为个个数
//随机选择主元 ，对区间[left,right]进行划分
int randPartition(int A[], int left, int right) {
  int p = (round(1.0 * rand() / RAND_MAX* (right - left) + left));
  swap(A[left], A[p]);
  int temp = A[left];
  while (left < right) {
    while (left < right && A[right] > temp) right--;
    A[left] = A[right];
    while (left < right && A[left] <= temp) left++;
    A[right] = A[left];
  }
  A[left] = temp;
  return left;
}
//随机选择算法，从A[left,right]中找到第K大的数并进行切分
void randSelect(int A[], int left, int right, int K) {
  if (left == right) return;
  int p = randPartition(A, left, right);
  int M = p - left + 1;
  if (K == M) return;
  if (K < M) {
    randSelect(A, left, p - 1, K);
  } else {
    randSelect(A, p + 1, right, K - M);
  }
}
int main() {
  srand((unsigned)time(NULL));
  int Sum = 0, sum = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> A[i];
    Sum += A[i];
  }
  randSelect(A, 0, n - 1, n / 2);
  for (int i = 0; i < n / 2; i++) sum += A[i];
  cout << (Sum - sum) - sum;
  return 0;
}