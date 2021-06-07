//https://www.spoj.com/problems/BYTESM2/
#include<bits/stdc++.h>
using namespace std;
#define int long long int

void Malena(){

	int n,m;cin>>n>>m;
	vector<vector<int>>mat(n+2,vector<int>(m+2)),dp(n+2,vector<int>(m+2));
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j){
			cin>>mat[i][j];
		}
	}
	for(int j=1;j<=m;++j){
		dp[1][j]=mat[1][j];
	}
	for(int i=2;i<=n;++i){
		for(int j=1;j<=m;++j){
			dp[i][j]+= max({dp[i-1][j],dp[i-1][j-1],dp[i-1][j+1]})+mat[i][j];
		}
	}
	// for(int i=0;i<=n+1;++i){
	// 	for(int j=0;j<=m+1;++j){
	// 		cout<<dp[i][j]<<" ";
	// 	}cout<<endl;
	// }
	
	int ans=-1;
	for(int j=1;j<=m;++j)
		ans=max(ans,dp[n][j]);
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
