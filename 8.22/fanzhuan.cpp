#include<iostream>
using namespace std;
typedef struct LNode{
    int data;
    struct LNode*next;
}LNode,*LinkList;
LinkList initLinklist(int n){
    LNode* p,*pre,*head;
    head=new LNode;
    head->next=NULL;
    pre=head;
    while(n--){
        p=new LNode;
        scanf("%d",&(p->data));
        pre->next=p;
        p->next=NULL;
        pre=p;
    }
    return head;
}
void reverseLinklist(LNode *head){
    LNode *p=head->next,*q;
    head->next=NULL;
    while(p){
        q=p->next;//用于扫描原来的链表
        p->next=head->next;//头插法
        head->next=p;
        p=q;
    }
}
void printLinklist(LNode *head){
    LNode *p=head->next;
    if(p){
        while(p){
            if(p!=head->next) printf(" ");
            printf("%d",p->data);
            p=p->next;
        }
        printf("\n");
    }
}
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
        if(n==0){
            printf("list is empty\n");
            continue;
        }
        LNode *L=initLinklist(n);
        printLinklist(L);
        reverseLinklist(L);
        printLinklist(L);
    }
    return 0;
}