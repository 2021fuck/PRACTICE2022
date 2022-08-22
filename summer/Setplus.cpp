#include<iostream>
#include<vector>
#include<set>
using namespace std;
void ans(set<int> a,set<int> b)
{
    int num=0,m=a.size(),n=b.size();
    for (set<int>::iterator it = a.begin(); it != a.end(); it++) {
    if (b.find(*it) != b.end()) num++;
  }
    double down=m+n-num;
    printf("%.1lf\%\n",(num/down)*100);
}
int main()
{
    int n,index=0,times;scanf("%d",&n);
    set<int> num[n];
    while (n--)
    {
        int m;scanf("%d",&m);
        for(int i=0;i<m;i++){
            int M;scanf("%d",&M);
            num[index].insert(M);//在第一次读入数据时就放入set中  这样会节省时间  但会多耗内存
        }
        index++;
    }
    scanf("%d",&times);
    while(times--)
    {
        int up,down;scanf("%d%d",&up,&down);
        ans(num[up-1],num[down-1]);
    }
    return 0;
}