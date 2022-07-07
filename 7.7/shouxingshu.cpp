#include<iostream>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int a=n*n;
        if(n<10)
        {
            if(a%10==n) cout<<"Yes!"<<endl;
            else cout<<"No!"<<endl;
        }
        else if(a%100==n) cout<<"Yes!"<<endl;
        else cout<<"No!"<<endl;
    }
    return 0;
}
