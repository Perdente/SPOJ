//https://www.spoj.com/problems/SUMFOUR/
#include<bits/stdc++.h>
using namespace std;
#define int long long int

void Malena(){
	int n;cin>>n;
	vector<int>a(n),b(n),c(n),d(n);
	for(int i=0;i<n;++i){
		cin>>a[i]>>b[i]>>c[i]>>d[i];
	}
	vector<int>ab;
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			ab.push_back(a[i]+b[j]);
		}
	}
	int ans=0;
	sort(ab.begin(),ab.end());
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			int cd=-(c[i]+d[j]);
			auto bound=equal_range(ab.begin(),ab.end(),cd);
			ans+=bound.second-bound.first;
		}
	}
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
	//cin>>t;
	while(t--){
		Malena();
	}
	return 0;
}
