/*精妙解法：将学生名字的字母组合转换为数字，然后作为下标一一对应，这样就少去了查找这一步，节省了大量时间。
*/
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
const int M = 26 * 26 * 26 * 10 + 1;
const int N = 40010;
using namespace std;
vector<int>selectcourse[M];
int getID(char nums[]) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum = sum * 26 + (nums[i] - 'A');
    }
    sum = sum * 10 + (nums[3] - '0');
    return sum;
}
int main() {
    char name[5];
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i = 0; i < k; i++) {
        int course, x;
        scanf("%d%d", &course, &x);
        for (int j = 0; j < x; j++) {
            scanf("%s", name);
            int ID = getID(name);
            selectcourse[ID].push_back(course);
        }
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%s", name);
        int id = getID(name);
        sort(selectcourse[id].begin(), selectcourse[id].end());
        printf("%s %d", name, selectcourse[id].size());
        for (int i = 0; i < selectcourse[id].size(); i++) {
            printf(" %d", selectcourse[id][i]);
        }
        printf("\n");
    }
    return 0;
}
