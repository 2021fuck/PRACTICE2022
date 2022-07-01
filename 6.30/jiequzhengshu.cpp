#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long s;
    int m,index=0,sum=0,Index=0;
    scanf("%ld",&s);
    while(s!=0){
        m=s%10; 
        if(index%2==1){ 
            sum+=m*pow(10,Index);
            Index++;
        }            
        index++;
        s/=10;
    }
    cout<<sum;
    return 0;
}