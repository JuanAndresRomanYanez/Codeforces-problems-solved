#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio();cin.tie(0);
using namespace std;
bool ok;
int n,q,i,j;
string g,v;
bool good[28];
int main (){
		cin>>g>>v>>q;
		n=v.size();
		for(i=0;i<g.size();i++)good[g[i]-'a']=true;
		while(q--){
			ok=false;
			cin>>g;
			i=0,j=0;
			for(;j<n&&i<g.size();){
				if(v[j]==g[i])i++,j++;
				else if(v[j]=='?'){
					if(!good[g[i]-'a']){ok=true;break;}
					i++,j++;
				}
				else if(v[j]=='*'){
					while(n-j<=g.size()-i){
						if(good[g[i]-'a']){ok=true;break;}
						i++;
					}
					j++;
				}
				else {ok=true;break;}
			}
			if(ok){cout << "NO\n";continue;}
			if(i==g.size()&&j==n||i==g.size()&&j==n-1&&v[n-1]=='*')cout << "YES\n";
			else cout << "NO\n";
		}
}
