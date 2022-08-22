#include <iostream>
#define N 100
int f(int n) {
  if (n == 1 || n == 2)
    return n;
  else
    return f(n - 1) + f(n - 2);
}
int main() {
  int i = 0, a[N], b[N], n;
//   while (scanf("%d", &a[i++]) && getchar() != '\n'&&i<N) n = i;
while (scanf("%d", &a[i++]) !=EOF&&i<N)
n=i;
  for (i = 0; i <= n; i++) {
    if (a[i] > 91)
      printf("error");
    else {
      b[i] = f(a[i]);
      printf("%d\n", b[i]);
    }
  }
  system("pause");
  return 0;
}
