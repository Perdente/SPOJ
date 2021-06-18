//https://brilliant.org/wiki/linear-diophantine-equations-one-equation/
//https://cp-algorithms.com/algebra/linear-diophantine-equation.html
//https://www.youtube.com/watch?v=FjliV5u2IVw&t=212s
//https://www.youtube.com/watch?v=-cX9dV8sBSQ&ab_channel=CodeNCodeCodeNCode
#include<bits/stdc++.h>
using namespace std;
#define int long long int
int x=1;
void Malena(){
	int a,b,c;
	cin>>a>>b>>c;
	int g=__gcd(a,b);
	cout<<"Case "<<x++<<": ";
	if(c%g==0)cout<<"Yes\n";
	else cout<<"No\n";
}

signed main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	t=1;
	cin>>t;
	while(t--){
		Malena();
	}
	return 0;
}
