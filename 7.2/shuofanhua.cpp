#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    vector<string> myv;
    string s;
    while(1)
    {
        cin>>s;
        if(getchar()=='\n') break;
        myv.push_back(s);
    }
    for(int i=myv.size();i>=0;i--) 
    cout<<myv[i]<<" ";
    return 0;
}