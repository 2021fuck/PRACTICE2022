#include<iostream>
#include<string>
using namespace std;
int main()
{   
    int n,hours,mins;
    string time1,time2;
    cin>>n;
    while(n--)
    {
        cin>>time1>>time2;
        int flag=1,Flag=1;
        for(int i=0;i<min(time1.length(),time2.length());i++)
        {
            if(time1[i]==time2[i]) {
                if(time1[i]>='0'&&time1[i]<='9'&&flag) 
                {
                    hours=time1[i]-'0';
                    flag=0;
                }   
                if(time1[i]>='A'&&time1[i]<='N'&&flag) 
                {
                    hours=10+time1[i]-'A';
                    flag=0;
                }
                if(time1[i]>='a'&&time1[i]<='z'&&Flag) 
                {
                    mins=i;
                    Flag=0;
                }
            }
        }
    if(flag==0&&Flag==0){
    if(mins<10&&hours<10) cout<<'0'<<hours<<":"<<'0'<<mins;
    if(mins>=10&&hours>=10) cout<<hours<<":"<<mins;
    if(mins>=10&&hours<10)  cout<<'0'<<hours<<':'<<mins;
    if(mins<10&&hours>=10)  cout<<hours<<':'<<'0'<<mins;
    }else cout<<"NO";
    if(n!=0) cout<<'\n';
    }
    return 0;
}