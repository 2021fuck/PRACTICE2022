#include<iostream>
#include<string>
#include<map>
#include<sstream>
using namespace std;
int main()
{
    string s;
    map<int,string> myMap;
    myMap[0]="ling",myMap[1]="yi",myMap[2]="er",myMap[3]="san",myMap[4]="si",myMap[5]="wu",myMap[6]="liu",myMap[7]="qi",myMap[8]="ba",myMap[9]="jiu";
    int sum=0;
    cin>>s;
    for(int i=0;i<s.size();i++) sum+=s[i]-'0';
    string S=to_string(sum);
    for(int i=0;i<S.size();i++)
    cout<<myMap[S[i]-'0']<<" ";
    return 0;
}