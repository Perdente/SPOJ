//https://www.spoj.com/problems/FCTRL2/
//big-numbers
#include<bits/stdc++.h>
using namespace std;
#define int long long int

void Malena(){
	int n;cin>>n;
	vector<int>v(200);
	v[0]=1;
	int m=1;
	for(int i=1;i<=n;++i){
		int temp=0;
		for(int index=0;index<m;++index){
			int x=i*v[index]+temp;
			v[index]=x%10;
			temp=x/10;
		}
		while(temp>0){
			v[m++]=temp%10;
			temp/=10;
		}
	}
	for(int i=m-1;i>=0;--i){
		cout<<v[i];
	}cout<<'\n';
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
