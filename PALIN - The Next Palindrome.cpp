//https://www.spoj.com/problems/PALIN/
#include<bits/stdc++.h>
using namespace std;
#define int long long int

void Malena(){
	string s;cin>>s;
	int n=s.size();
	string str=s;
	for(int i=0;i<n/2;++i){
		str[n-1-i]=str[i];
	}
	if(str>s){
		cout<<str<<'\n';return;
	}
	for(int i=(n-1)/2;i>=0;--i){
		if(s[i]!='9'){
			s[i]++;break;
		}else{
			s[i]='0';
		}
	}
	for(int i=n/2;i<n;++i){
		s[i]=s[n-1-i];
	}
	if(s[0]=='0'){
		cout<<'1'<<string(n-1,'0')<<'1'<<'\n';return;
	}
	cout<<s<<'\n';
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
