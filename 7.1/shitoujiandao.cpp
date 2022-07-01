#include<iostream>
using namespace std;
int fun(char arr[3],char c)
{

    return 0;
}
int main()
{
    char num1[3]={'B','C','J'};
    char num2[3]={'B','C','J'};
    int n,index1=0,index2=0,index3=0;
    char p,q;
    cin>>n;
    while (n--)
    {
        cin>>p>>q;
        fun(num1,p);fun(num2,q);
        if(p=='C'&&q=='J'||p=='J'&&q=='B'||p=='B'&&q=='C') index1++;
        else if(p==q) index3++;
        else index2++;
    }
    cout<<index1<<" "<<index3<<" "<<index2<<endl;
    cout<<index2<<" "<<index3<<" "<<index1<<endl;
    return 0;
}