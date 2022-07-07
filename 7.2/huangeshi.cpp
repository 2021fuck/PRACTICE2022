#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        for(int j=0;j<s[i]-'0';j++)
        {
            if(i==0) cout<<'B';
            if(i==1) cout<<'S';
            if(i==2) cout<<j+1;
        }
    }

    return 0;
}