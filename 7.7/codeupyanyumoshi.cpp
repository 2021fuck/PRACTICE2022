#include<bits\stdc++.h>
using namespace std;
int main()
{
    map<string,int> mv;
    string s,S;
    getline(cin,s);
    istringstream str(s);
    while(str>>S)
    {
        mv[S]++;
    }
    system("pause");

    return 0;
}
/*
#include <iostream>
#include <map>
using namespace std;
map<string,int> mp;
bool isWord(char c){
    if(c>='a' && c<='z') return 1;
    else if(c>='A' && c<='Z') return 1;
    else if(c>='0' && c<='9') return 1;
    else return 0;
}
string lowcase(string str){
    for(int i=0;i<str.length();++i)
        if(str[i]>='A' && str[i]<='Z') 
            str[i] += 32;
    return str;
}
int main()
{
    string str;
    getline(cin, str);
    int i=0;
    while(i<str.length()){
        int start = i, len = 0;
        while(isWord(str[i++])) len++;
        if(len!=0){
            if(mp.find(lowcase(str.substr(start,len)))!=mp.end()) mp[lowcase(str.substr(start,len))]++;
            else mp[lowcase(str.substr(start,len))] = 1;
        }
    }
    int MAX = 0;
    string word;
    for(map<string,int>::iterator it=mp.begin();it!=mp.end();it++){
        if(it->second>MAX){
            word = it->first;
            MAX = it->second;
        }
    }
    cout << word << " " << MAX << endl;
}
*/