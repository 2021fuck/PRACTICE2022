#include<iostream>
#include<queue>
using namespace std;
int main()
{
    int que[11];
    for(int i=0;i<10;i++) scanf("%d",&que[i]);
    int minindex=0,maxindex=0;
    for(int i=0;i<10;i++){
        if(que[minindex]>que[i]){
            minindex=i;
        }
        if(que[maxindex]<que[i]){
            maxindex=i;
        }   
    }
    swap(que[0],que[minindex]);
    if(maxindex==0) maxindex=minindex;
    swap(que[9],que[maxindex]);
    for(int i=0;i<10;i++)
    {
        printf("%d",que[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}