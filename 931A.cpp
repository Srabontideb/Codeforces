#include <bits/stdc++.h>
using namespace std;

int a, b, s;

int main (){
	cin >> a>> b;
	s = abs(a-b);
	cout << (s/2)*(s/2+1)+(s%2)*(s/2+1);
}
