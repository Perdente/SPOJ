//https://www.spoj.com/problems/CHOCOLA/
//https://www.geeksforgeeks.org/minimum-cost-cut-board-squares/
//https://www.youtube.com/watch?v=9DckVBRzuQU
//greedy
cin>>n>>m;
	n--,m--;
	V r(n),c(m);
	lp(i,n)cin>>r[i];
	lp(i,m)cin>>c[i];
	grtsrt(r)grtsrt(c)
	h=1,v=1;
	i=0,j=0;
	ans=0;
	while(i<n or j<m){
		if(i<n and j<m){
			if(r[i]>c[j]){
				ans+=v*r[i];
				h++;i++;
			}else{
				ans+=h*c[j];
				v++;j++;
			}
		}
		else{		
			if(i<n){
				ans+=v*r[i];
				h++;i++;
			}
			else if(j<m){
				ans+=h*c[j];
				v++;j++;
			}
		}
	}
	cout<<ans;

//dp
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
const int mx=1e3+5;
 
void solve(){
	int n,m;cin>>n>>m;
	n--,m--;
	vector<int>a(n),b(m);
	vector<vector<int>>cost(n+1,vector<int>(m+1,0));
	
	for(int i=0;i<n;++i)cin>>a[i];
	for(int i=0;i<m;++i)cin>>b[i];
	
	sort(a.begin(),a.end(),greater<ll>());
	sort(b.begin(),b.end(),greater<ll>());
	
	cost[0][0]=0;
	for(int i=1;i<=n;++i){
		cost[i][0]=cost[i-1][0]+a[i-1];
	}
	
	for(int j=1;j<=m;++j){
		cost[0][j]=cost[0][j-1]+b[j-1];
	}
	
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=m;++j)
		{
			cost[i][j]=min(cost[i-1][j]+(j+1)*a[i-1],cost[i][j-1]+(i+1)*b[j-1]);
		}
	}
	cout<<cost[n][m]<<endl;
	
}
 
signed main()
{
	int t;cin>>t;
	while(t--){solve();}
	return 0;
}
 
