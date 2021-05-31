//https://www.spoj.com/problems/COINS/
#include<bits/stdc++.h>
using namespace std;
#define int long long int

void Malena(){
	int n;
	unordered_map<int,int>mp;
	function<int(int)>fun=[&](int n)->int{
		if(n<12)return n;
		if(mp.find(n)!=mp.end()){
			return mp[n];
		}
		int sum=fun(n/2)+fun(n/3)+fun(n/4);
		mp[n]=sum;
		return sum;
	};
	while(cin>>n){
		cout<<fun(n)<<'\n';
	}
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
	//cin>>t;
	while(t--){
		Malena();
	}
	return 0;
}
