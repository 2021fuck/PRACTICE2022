#include <iostream>
using namespace std;
const int maxn = 100;
void merge(int num[], int L1, int R1, int L2, int R2) {
  int left = L1, right = L2;
  int temp[maxn], index = 0;
  while (left <= R1 && right <= R2) {
    if (num[left] <= num[right])
      temp[index++] = num[left++];
    else
      temp[index++] = num[right++];
  }
  while (left <= R1) temp[index++] = num[left++];
  while (right <= R2) temp[index++] = num[right++];
  for (int i = 0; i < index; i++) num[L1 + i] = temp[i];
}
void mergeSort(int num[], int left, int right) {
  int mid;
  if (left < right) {
    mid = (right + left) / 2;
    mergeSort(num, left, mid);
    mergeSort(num, mid + 1, right);
    merge(num, left, mid, mid + 1, right);
  }
}
int main() {
  int n;
  while (cin >> n) {
    int num[n];
    for (int i = 0; i < n; i++) cin >> num[i];
    mergeSort(num, 0, n - 1);
    for (int i = 0; i < n; i++) cout << num[i] << " ";
    cout << endl;
  }
  system("pause");
  return 0;
}