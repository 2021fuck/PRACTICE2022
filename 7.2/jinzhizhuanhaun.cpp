#include<iostream>
#include<cmath>
using namespace std;
int sum(int num,int n)
{
    int Sum,i=0,Num;
    while(1){
        Num=num%n;
        Sum+=Num*pow(10,i);
        i++; if(num==0) break;
        num=num/n;
    }
    return Sum;
}
int main()
{
    int a,b,n;
    cin>>a>>n;
    cout<<sum(a,n);
    return 0;
}