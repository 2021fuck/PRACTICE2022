#include <iostream>
#include <cstring>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
int main()
{
    int stuNum, courseNum;
    scanf("%d%d", &stuNum, &courseNum);
    map<string, vector<int>> students;
    char name[5];
    while (courseNum--)
    {
        int stu, courseId;
        scanf("%d%d", &courseId, &stu);
        for (int i = 0; i < stu; ++i)
        {
            scanf("%s", name);
            students[name].push_back(courseId);
        }
    }
    while (stuNum--)
    {
        scanf("%s", name); printf("%s", name);
        vector<int> courses = students[name];
        sort(courses.begin(), courses.end());
        printf(" %d", courses.size());
        for (int i = 0; i < courses.size(); ++i) printf(" %d", courses[i]);
        printf("\n");
    }
    system("pause");
    return 0;
}