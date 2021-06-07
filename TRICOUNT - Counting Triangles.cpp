//https://www.spoj.com/problems/TRICOUNT/
//https://www.bhaklol.com/2019/07/count-the-number-of-triangles-in-the-given-figure-formula.html
#include<bits/stdc++.h>
using namespace std;
#define int long long int

void Malena(){
	int n;cin>>n;
	int ans=n*(n+2)*(2*n+1)/8;
	cout<<ans<<'\n';
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
