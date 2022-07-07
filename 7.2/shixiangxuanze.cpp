#include<iostream>
using namespace std;
struct line{
    int start,end;
};
int index=1;
void fun(int x,struct line *num,int times)
{
	for(int i=0;i<times;i++){
		if(num[i].start>x) {
			++index;
			fun(num[i].end,num,times);
            break;
		}
	}
}
int main()
{
    int n,max=1;
    cin>>n;
    struct line L[n];
    for(int i=0;i<n;i++) cin>>L[i].start;
    for(int i=0;i<n;i++) cin>>L[i].end;
    for(int i=0;i<n-1;i++)
    for(int j=0;j<n-1;j++){
    	if(L[j].start>L[j+1].start){
    	struct line temp=L[j];
    	L[j]=L[j+1];
    	L[j+1]=temp;
		}
	}
//	for(int i=0;i<n;i++) 
//	cout<<L[i].start<<" ";
//	cout<<endl;
//	for(int i=0;i<n;i++) 
//	cout<<L[i].end<<" ";
    for(int i=1;i<n;++i){
        fun(L[i].end,L,n);
//        cout<<index<<endl;
        if(index>max) 
        max=index;    	
		index=1;
    }
    printf("%d",max);
    system("pause");
    return 0;
}