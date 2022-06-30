#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;scanf("%d", &n);
	string arr[n];
	for (int i = 0;i < n;i ++) cin >> arr[i];
	
	sort(arr, arr + n, [](string s1, string s2) {
		int sum1 = 0, sum2= 0;
		for (int i = 0;s1[i] != '\0';i ++) sum1 += (s1[i] - '0');
		for (int i = 0;s2[i] != '\0';i ++) sum2 += (s2[i] - '0');
		return sum1==sum2? s1>s2:sum1>sum2;
	});
	
	for (int i = 0;i < n;i ++) cout << arr[i] << ' ';
	return 0;
}
