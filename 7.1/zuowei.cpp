#include<iostream>
#include<map>
#include<string>
using namespace std;
struct stud{
    string id;
    int kaoshi;
};
int main()
{
    string name;
    int n,m,index,shiji,kaoshi;
    cin>>n;
    map<int,stud>stu;
    for ( int i = 0; i < n; i++)
    {  
        cin>>name>>shiji>>kaoshi;
        stu[shiji].id=name,stu[shiji].kaoshi=kaoshi;
    }
    cin>>m;
    while(m--)
    {
        cin>>index;
        cout<<stu[index].id<<" "<<stu[index].kaoshi<<endl;
    }
    return 0;
}


