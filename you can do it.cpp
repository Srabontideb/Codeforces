#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    string s;
    cin>>n;
    while(n--)
    {
        cin>>s;
        if(s=="Tetrahedron")
        {
            c=c+4;
        }
        if(s=="Cube")
        {
            c=c+6;
        }
        else if(s=="Octahedron")
        {
            c=c+8;
        }
        else if(s=="Dodecahedron")
        {
            c=c+12;
        }
        if(s=="Icosahedron")
        {
            c=c+20;
        }
    }
    cout<<c<<endl;
}
