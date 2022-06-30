#include<iostream>
#include<cmath>
using namespace std;
int fun(int num,int n){
	int index=0,sum=0,m=0 ;
        while(num!=0){
            m=num%10;
            if(m==n){
                sum+=m*pow(10,index);
                index++;
            }
            num/=10;    
	    }
    return sum;
}
int main()
{
    long num1,num2;
	int n1,n2,sum=0;
 	cin>>num1>>n1>>num2>>n2;
	sum=fun(num1,n1)+fun(num2,n2);
    cout<<sum;
    return 0;
}