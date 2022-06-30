#include<iostream>
using namespace std;
int main(){
    int n,index=0;
    cin>>n;
    while(n!=1)
    {
        if(n%2==0) 
        {
            n/=2;
            index++;
        }
        else 
        {
            n=(3*n+1)/2;
            index++;
        } 
    }
    cout<<index;
    system("pause");
    return 0;
}