//https://www.spoj.com/problems/INVCNT/
#include<bits/stdc++.h>
using namespace std;
#define int long long int
 
void Malena(){
	int n;cin>>n;
	vector<int>v(n);
 
	function<int(int,int,int)>merge=[&](int l,int m,int r)->int{
		int inv=0;
		int left=m-l+1;
		int right=r-m;
		vector<int>a(left),b(right);
		for(int i=0;i<left;++i){
			a[i]=v[l+i];
		}
		for(int i=0;i<right;++i){
			b[i]=v[m+i+1];
		}
		int i=0,j=0,k=l;
		while(i<left and j<right){
			if(a[i]<=b[j]){
				v[k++]=a[i++];
			}else{
				v[k++]=b[j++];
				inv+=left-i;
			}
		}
		while(i<left)v[k++]=a[i++];
		while(j<right)v[k++]=b[j++];
		return inv;
	};
 
	function<int(int,int)>mergeSort=[&](int l,int r)->int{
		int inv=0;
		if(l<r){
			int m=l+(r-l)/2;
			inv+=mergeSort(l,m);
			inv+=mergeSort(m+1,r);
			inv+=merge(l,m,r);
		}
		return inv;
	};
	for(int i=0;i<n;++i){
		cin>>v[i];
	}
	cout<<mergeSort(0,n-1)<<'\n';
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
 
