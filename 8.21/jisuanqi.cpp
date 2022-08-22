
#include<iostream>
#include<stack>
#include<map>
#include<string>
#include<cmath>
using namespace std;

int main()
{
    stack<int> num;
    stack<char> ch;
    map<char,int> fh;
    string str;
    //定义要运算符优先级
    fh['+']=fh['-']=1;
    fh['*']=fh['/']=2;
    getline(cin,str);
        for(string ::iterator it = str.end();it!=str.begin();it--)
        {
            if(*it==' ') str.erase(it);//把表达式中的空格全部去掉
        }
    // for(int i=0;i<str.size();i++)
    // {
    //     int index=i,NUM=0,time=0;
    //     while(str[index++]>='0'&&str[index++]<='9')
    //     {
    //         NUM+=pow(str[index]-'0',time);
    //         time++;
    //     }num.push(NUM);
    //     i+=time;
    //     if(str[i]<'0'||str[i]>'9')
    //     {
    //         ch.push(str[i]);
    //     }
    // }
    system("pause");
    return 0;
}