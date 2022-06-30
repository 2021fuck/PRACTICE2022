#include<iostream>
#include<cstring>
#include<algorithm>
#include<map>
#include<vector>
using  namespace std;
int main()
{
    int stuNum,courseNum;
    cin>>stuNum>>courseNum;
    map<string,vector<int>> students;
    string name;
    while(courseNum--){
        int stu,courseId;
        cin>>courseId>>stu;
        for(int i=0;i<stu;++i){
            cin>>name;
            students[name].push_back(courseId);
        }
    }
    while (stuNum--)
    {
        cin>>name;cout<<name;
        vector<int> courses=students[name];
        sort(courses.begin(),courses.end());
        cout<<" "<<courses.size();
        for(int i=0;i<courses.size();++i){
            cout<<" "<<courses[i];
        }cout<<endl;
    }
    return 0;
}