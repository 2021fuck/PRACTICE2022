#include<iostream>
#include<algorithm>
#include<sstream>
#include<cmath>
using namespace std;
struct Goods{
    string num;
    double weig;
    double price;
    double sign_price;
}good[2000];    
bool cmp(struct Goods a,struct Goods b){
    if(fabs(a.sign_price-b.sign_price)<1e-6){
         return a.weig<b.weig;
    }
    else return a.sign_price>b.sign_price;
}
int main()
{
    int i=0;
    int count=0;
    string _ID;
    getline(cin,_ID);
    istringstream ss(_ID);
    while(ss>>good[i++].num)    //无限输入
    count=i;
    for(int j=0;j<count;j++){
        cin>>good[j].weig;  
    }
    for(int j=0;j<count;j++){
        cin>>good[j].price;
    }
    for(int j=0;j<count;j++){
        good[j].sign_price=good[j].price/good[j].weig;
    }
    sort(good,good+count,cmp);
    for(int j=0;j<count;j++){
        cout<<good[j].num<<" ";
    }
    return 0;
}
