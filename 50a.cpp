#include<bits/stdc++.h>
using namespace std;
int main()
{
    int M,N,d;
    cin>>M>>N;
    if((M*N)%2!=0)
    {
        d=ceil(M*N)/2;
    }
    else
        d=(M*N)/2;
    cout<<d<<endl;
}
