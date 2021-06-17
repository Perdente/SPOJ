//https://www.spoj.com/problems/DEFKIN/
cin>>w>>h>>k;
	V v,u;
	lp(i,k)cin>>a>>b,v.pb(a),u.pb(b);
	v.pb(0),v.pb(w+1),u.pb(0),u.pb(h+1);
	srt(v)srt(u)
	x=0,y=0;
	lp(i,k+2){
		if(i){
			x=max(x,v[i]-v[i-1]-1);
			y=max(y,u[i]-u[i-1]-1);
		}
	}
	// joker(v)
	// joker(u)
	cout<<x*y;
