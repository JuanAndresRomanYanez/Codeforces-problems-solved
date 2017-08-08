#include<bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
    int c,d,i,n,m,k,x,j,a[3000003];
    set<int>v;
    set<int>::iterator it;
main(){
    optimizar_io
	cin>>n>>m;
	for(i=0;i<=n;i++) v.insert(i+1);
	for(i=1;i<=m;i++){
		cin>>c>>d>>k;
		it=v.lower_bound(c);
		while(*it<=d){
			if(*it!=k){a[*it]=k;v.erase(it++);}else
			it++;
		}
	}
	for(i=1;i<=n;i++){cout<<a[i]<<" ";}
	return 0;
}
