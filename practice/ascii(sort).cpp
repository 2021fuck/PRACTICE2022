#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    string str;
    while (cin>>str)
    {
        sort(str.begin(),str.end());
        for(int i=0;i<str.size();i++)
        cout<<str[i]<<" ";
    }
    return 0;
}