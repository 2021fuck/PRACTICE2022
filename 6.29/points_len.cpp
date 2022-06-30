#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x1,x2,y1,y2;
    double length=0;
    while (scanf("%d%d%d%d",&x1,&y1,&x2,&y2)!=EOF)
    {
        length=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        printf("%.2f\n",length);
    }
    return 0;
}