#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    map<int,int> myMap;
    int n,num,score,m,max=0,id=0;
    cin>>n;
    while(n--){
        cin>>m>>score;
        myMap[m]+=score;
    }
    for (int i = 0; i < myMap.size(); i++)
    {
        if (myMap[i]>max)
        {
            max=myMap[i];
            id=i;
        }
    }
    cout<<id<<" "<<myMap[id];
    return 0;
}