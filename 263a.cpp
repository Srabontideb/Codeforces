#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,m,n,o[6][6];
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cin>>o[i][j];
        }
    }
for(i=1;i<=5;i++)
{
    for(j=1;j<=5;j++)
    {
        if(o[i][j]==1)
        {
            m=i;
            n=j;
        }
    }
}
if(m<3)
{
    m=3-m;
}
else
    m=m-3;
if(n<3)
{
    n=3-n;
}
else
    n=n-3;
cout<<m+n<<endl;
}
