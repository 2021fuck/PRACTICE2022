/*
解题思路：
1、 创建结构体，储存学生姓名和课程索引（courseId）使用vector容器，因为一名学生可能会选择多门课程;
2、 使用vector创建学生数组，
*/
#include<iostream>
#include<vector>
using namespace std;
struct Stu{
    string name;
    vector<int> courseId;
};
bool select(string name,vector<Stu> stud){
    for(int i=0;i<stud.size();i++){
        if (name==stud[i].name) return i;
    }
    return 0;
}
int main()
{
    vector<Stu> students;
    int stuNum,courseNum,courseId,regCourseNum,index=0;
    cin>>stuNum>>courseNum;
    for(int i=0;i<stuNum;i++){
        cin>>courseId>>regCourseNum;
        string name;
        for(int j=0;j<regCourseNum;i++){
            Stu stu;
            cin>>name;
            if (index=select(name,students)){//如果这名学生已经在studens中存在，则在该那名学生的索引下添加courseId即可   
                students[index].courseId.push_back(courseId);
            }else{
                stu.name=name;
                stu.courseId[i]=courseId;
                students.push_back(stu);
            }
        }
    }
    string Name;
    while (cin>>Name){
        for (int i = 0; i < stuNum; i++){
            if (students[i].name==Name){
                cout<<Name<<" "<<students[i].courseId.size()<<" ";
                for (int j = 0; j < students[i].courseId.size(); i++){
                    cout<<students[i].courseId[j]<<" "<<endl;
                }break;
            }
            if (i==9) cout<<Name<<" "<<0<<endl; 
        }
    }
    return 0;
}