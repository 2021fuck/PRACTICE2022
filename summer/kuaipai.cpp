#include <iostream>
#include<algorithm>
#include<cmath>
#include<ctime>
using namespace std;
int Partition(int A[], int left, int right) {
  int p = (round(1.0*rand()/RAND_MAX*(right-left)+left));
  swap(A[p],A[left]);
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
void quickSort(int A[], int left, int right) {
  if (left < right) {
    int pos = Partition(A, left, right);
    quickSort(A, left, pos - 1);
    quickSort(A, pos + 1, right);
  }
}
int main() {
  int n;
  srand((unsigned)time(NULL));
  while (cin >> n) {
    int num[n];
    for (int i = 0; i < n; i++) cin >> num[i];
    quickSort(num, 0, n - 1);
    for (int i = 0; i < n; i++) cout << num[i];
  }
  system("pause");
  return 0;
}