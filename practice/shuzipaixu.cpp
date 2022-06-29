#include<iostream>
#include<cstring>
using namespace std;
int sum(string x) 
{
	int Sum=0;
	for(int i=0;i<x.length();i++)
    {
        Sum+=x[i]-'0';
    }
    return Sum;
}
bool fun(string a,string b)
{
	if(sum(a)==sum(b)) return a<b;
	else return sum(a)<sum(b);
}

int main()
{	
	int n;
    cin>>n;
	string num[n];
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(fun(num[j],num[j+1]))
			{
				string temp=num[j];
				num[j]=num[j+1];
				num[j+1]=temp;
			}
		}	
	}
	for(int i=0;i<n;i++) 
	cout<<num[i]<<" "; 
	return 0;
}
