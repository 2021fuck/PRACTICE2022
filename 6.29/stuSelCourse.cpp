#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct Stu{
    string name;
    vector<int> courseId;
};
int select(string name,vector<Stu> &stud){
    for(int i=0;i<stud.size();i++){
        if (name==stud[i].name) return i;
    }
    return -1;
}
int main()
{
    vector<Stu> students;
    int stuNum,courseNum,courseId,regCourseNum,index;
    cin>>stuNum>>courseNum;
    while(courseNum--){
        cin>>courseId>>regCourseNum;
        string name;
        for(int j=0;j<regCourseNum;j++){
            cin>>name;
		    Stu stu;
            index=select(name,students);
            if(index!=-1){ //如果这名学生已经在studens中存在，则在该那名学生的索引下添加courseId即可   
                students[index].courseId.push_back(courseId);
            }else{
            	stu.name=name;
                stu.courseId.push_back(courseId);
                students.push_back(stu);
            }
        }
    }
    for(int i=0 ;i<students.size();i++)
    	sort(students[i].courseId.begin(),students[i].courseId.end());
    string Name;
    while (stuNum--){
    	cin>>Name;
    	index=select(Name,students);
    	if(index!=-1) 
		{
		    cout<<Name<<" "<<students[index].courseId.size()<<" ";
            for (int j = 0; j < students[index].courseId.size(); j++)
			{
                cout<<students[index].courseId[j]<<" ";
            }cout<<endl;
        }else cout<<Name<<" "<<0<<endl; 
    }
    return 0;
} 