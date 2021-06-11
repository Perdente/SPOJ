//https://www.spoj.com/problems/ETF/
#include<bits/stdc++.h>
using namespace std;
#define int long long int

void Malena(){
	int n;cin>>n;
	auto Phi=[&](int n)->int{
		int result=n;
		if(n%2==0){
			while(n%2==0)n/=2;
			result-=result/2;
		}
		for(int i=3;i*i<=n;i+=2){
			if(n%i==0){
				while(n%i==0)n/=i;
				result-=result/i;
			}
		}
		if(n>1)result-=result/n;
		return result;
	};
	cout<<Phi(n)<<'\n';
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
