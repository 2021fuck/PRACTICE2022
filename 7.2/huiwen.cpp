#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0,j=s.size()-1;i<s.size()/2;i++,j--)
    {
        if(s[i]!=s[j]) {
            cout<<"NO";
            return 0;
        }
    }
cout<<"YES";

    return 0;
}