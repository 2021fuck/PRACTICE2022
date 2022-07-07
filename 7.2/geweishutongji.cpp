#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
    map<int,int> myMap;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        myMap[s[i]-'0']++;
    }
    map<int, int>::iterator iter;//map迭代器
     for(iter = myMap.begin(); iter != myMap.end(); iter++)//map自动按照key值升序排序
          cout<<iter->first<<":"<<iter->second<<endl;
    return 0;
}