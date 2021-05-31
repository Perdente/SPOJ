//https://www.spoj.com/problems/LASTDIG/
#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int mod=10;
int binpow(int a,int b)
{
	int res=1;
	while(b>0)
	{
		if(b%2)res=(res*1LL*a)%mod;
		a=(a*1LL*a)%mod;
		b>>=1;
	}
	return res;
}
void Malena(){
	int n,m;
	cin>>n>>m;
	cout<<binpow(n,m)<<endl;
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
