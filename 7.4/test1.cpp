#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    if(fabs((0.1+0.2)-0.3)<1e-6) cout<<"666";
    else cout<<"888";
    system("pause");
    return 0;
}