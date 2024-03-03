#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long int n,m,a,d,e;
    scanf("%lld%lld%lld",&m,&n,&a);
    if(n%a!=0)
    {
        d=(n/a)+1;
    }
    else
        d=(n/a);
    if(m%a!=0)
    {
        e=(m/a)+1;
    }
    else
        e=(m/a);
        cout<<d*e<<endl;
    return 0;
}

