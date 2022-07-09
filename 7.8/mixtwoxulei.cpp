#include <algorithm>
#include <iostream>
using namespace std;
int merge(int A[], int B[], int C[], int n, int m) {
  int i = 0, j = 0, index = 0;
  while (i < n && j < m) {
    if (A[i] <= B[j])
      C[index++] = A[i++];
    else
      C[index++] = B[j++];
  }
  while (i < n) C[index++] = A[i++];
  while (j < m) C[index++] = B[j++];
//   for (int i = 0; i < m + n; i++) cout << C[i] << " ";
}
int main() {
  int m, n;
  while (cin >> m >> n) {
    int num1[m], num2[n], num3[m + n];
    for (int i = 0; i < m; i++) cin >> num1[i];
    for (int i = 0; i < n; i++) cin >> num2[i];
    sort(num1, num1 + m), sort(num2, num2 + n);
    merge(num1, num2, num3, m, n);
    for(int i=0;i<m+n;i++) cout<<num3[i]<<" ";
  }
  system("pause");
  return 0;
}