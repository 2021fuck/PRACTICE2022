#include<iostream>
using namespace std;
struct stu{
    string name,id;
    char sex;
    int scores;
};
int main()
{
    int n;
    struct stu students[n];
    for(int i=0;i<n;i++)
    {
        cin>>students[i].name>>students[i].sex>>students[i].id>>students[i].scores;
    }
    for(int i =0;i<n;i++)
    {
        
    }
    return 0;
}