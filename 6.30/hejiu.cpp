#include<iostream>
using namespace std;
struct person{
    int han,hua,index;
}num[2];
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        cin>>num[0].han>>num[0].hua>>num[1].han>>num[1].hua;
        if(num[0].han+num[1].han==num[0].hua&&num[0].han+num[1].han==num[1].hua) continue;
        else if (num[0].han+num[1].han==num[0].hua) num[1].index++;
        else if (num[0].han+num[1].han==num[1].hua) num[0].index++;
    }
    cout<<num[0].index<<" "<<num[1].index;
    system("pause");    
    return 0;
}