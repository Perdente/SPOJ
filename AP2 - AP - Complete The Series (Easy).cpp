//https://www.spoj.com/problems/AP2/
#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int N=1e7+5;

void Malena(){
	int c,x,sum;cin>>c>>x>>sum;
	int n=(2*sum)/(c+x);
	int d=(x-c)/(n-5);
	int a=c-2*d;
	cout<<n<<'\n';
	for(int i=1;i<=n;++i){
		cout<<a+(i-1)*d<<" ";
	}
	cout<<endl;
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
