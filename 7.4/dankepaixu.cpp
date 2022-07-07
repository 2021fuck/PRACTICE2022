#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(int m,int n)
{
    return m>n;
}
int main()
{
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
    vector<int> scores;
    int num;
    for(int i=0;;i++)
    {
        while(cin>>num){
		scores.push_back(num);
		if(cin.get()=='\n') break;}
		if(num==0) break;
        sort(scores.begin(),scores.end(),cmp);
        for(int j=0;j<scores.size();j++){
        cout<<scores[j]<<" ";
        }
        cout<<endl;
        scores.clear();
    }    
    return 0;
}