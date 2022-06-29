#include<iostream>
#include<map>
#include<cstring>
using namespace std;
int main()
{
    int m,n;
    string str;
    cin>>m>>n;
    map<string,int> myMap;
    for(int i=0;i<m;i++){
        cin>>str;
        myMap[str]++;
    }
    while (n--)
    {
        cin>>str;
        cout<<myMap[str]<<endl;
    }
    return 0;

}