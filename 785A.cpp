#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,p=0;
    char name[10]={'Tetrahedron','Cube','Octahedron','Dodecahedron','Icosahedron'};
    cin>>n;
    for(int i=0;i<n;i++)
    {
    cin>>name[i];
    }
    if(name[0]){p=4;}
    if(name[1]){p=6;}
    if(name[2]){p=8;}
    if(name[3]){p=12;}
    if(name[5]){p=20;}
    for(int i=0;i<n;i++){
        cout<<name[i]<<p;
    }

}
