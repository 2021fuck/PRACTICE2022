#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int timemax(int time[][2],int n){
int max=time[0][1];
for(int i=1;i<n ;i++)if(time[i][1]>max)max=time[i][1];
return max;
}
int timemin(int time[][2],int n){
int min=time[0][0];
for(int i=1;i<n ;i++)if(time[i][0]<min)min=time[i][0];
return min;
}
int jobscx(int timelens[],int left,int right){
    for(int i=left;i<=right;i++)if(timelens[i]==0)return 0;
    return 1;
}
int main(){
    int n;
    cin>>n;
    int times[n][2],time_s[n],sum=0;
     for(int i=0;i<n ;i++){
        int a;
        cin>>a;
        times[i][0]=a;
     }
    for(int i=0;i<n ;i++){
        int a;
        cin>>a;
        times[i][1]=a;;
        time_s[i]=a-times[i][0];
     }
     map< int ,vector<int>> time_t;
     for(int i=0;i<n ;i++){
      time_t[time_s[i]].push_back(times[i][0]);
      time_t[time_s[i]].push_back(times[i][1]);
     }
     sort(time_s,time_s+n);
     int timesmax=timemax(times,n),timesmin=timemin(times,n);
     int timelen[timesmax+1]={0};//划分可用时间区间，1为可用，0为已使用或不存在;
     for(int i=timesmin;i<=timesmax;i++)timelen[i]=1;
     for(int i=0,k=0;i<n ;i++){
        int flag;
        if(i!=0&&time_s[i]==time_s[i-1])k+=2;
        else k=0;
    int timeleft=time_t[time_s[i]][k],timeright=time_t[time_s[i]][k+1];
    flag=jobscx(timelen,timeleft,timeright);
    if (flag)
    {
        for(int i=timeleft;i<=timeright;i++)timelen[i]=0;
        sum++;
    }
}
printf("%d",sum);
system("pause");
return 0;
}