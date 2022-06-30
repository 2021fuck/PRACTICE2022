#include<iostream>
using namespace std;
int main()
{
    long a,b,c;
    int n;
    cin>>n;
    while (n--)
    {
        cin>>a>>b>>c;
        if (a+b>c)  cout<<"\"Case#X:true\""<<endl;
        else  cout<<"\"Case#X:false\""<<endl;
        
    }
    system("pause");
    return 0;
}