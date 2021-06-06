//https://www.spoj.com/problems/CANTON/
#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int N=1e7;
signed main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	vector<string>v(N+5);
	v[1]="1/1";
	bool right=false,down=false,dig_up=false,dig_down=false;
	right=true;
	for(int i=2;i<=N;++i){
		string a="",b="";
		bool flag=false;
		for(int ch=0;ch<v[i-1].size();++ch){
			if(v[i-1][ch]=='/'){
				flag=true;
			}
			if(!flag){
				a+=v[i-1][ch];
			}else{
				if(v[i-1][ch]!='/')b+=v[i-1][ch];
			}
		}
		int x=stoll(a),y=stoll(b);
		string str="";
		if(right){
			y++;
			str+=to_string(x);str+='/';str+=to_string(y);
			v[i]=str;
			right=false;
			dig_down=true;

		}else if(down){
			x++;
			str+=to_string(x);str+='/';str+=to_string(y);
			v[i]=str;
			down=false;
			dig_up=true;

		}else if(dig_up){
			while(x>1 and i<=N){
				x--,y++;
				str="";
				str+=to_string(x);str+='/';str+=to_string(y);
				v[i++]=str;
			}
			i--;
			dig_up=false;
			right=true;

		}else{
			while(y>1 and i<=N){
				x++,y--;
				str="";
				str+=to_string(x);str+='/';str+=to_string(y);
				v[i++]=str;
			}
			i--;
			dig_down=false;
			down=true;
		}
	}
	cin>>t;
	while(t--){
		int n;cin>>n;
		cout<<"TERM "<<n<<" IS "<<v[n]<<'\n';
	}
	return 0;
}
