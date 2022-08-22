#include<iostream>
using namespace std;
struct stu
{
    int id,scores;
    stu* next;
};
int main()
{
    int n,m,ID,SC;
    cin>>n>>m;
    int num=m+n;
    stu* p,*pre,*head;
    head->next==NULL;
    p=head->next;
    while(num--)
    {
        stu* q=new stu;q->next=NULL;
        cin>>q->id>>q->scores;
        p=q;
        p->next=q->next;
    }
    stu* i=new stu;
    i=
    while (i)
    {
        /* code */
    }
    
    
    system("pause");
    return 0;
}