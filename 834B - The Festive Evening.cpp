#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
long long n,k,r=0,pala[30];
string v;
bool pal[30];
int main (){
    optimizar_io
		cin>>n>>k>>v;
		for(int i=0;i<n;i++)pala[v[i]-'A']++;
		for(int i=0;i<n;i++){
			pala[v[i]-'A']--;
			if( !pal[v[i]-'A'] ) pal[v[i]-'A']=true,k--;
            if( k<0 ){cout<<"YES\n";return 0;}
			if( !pala[v[i]-'A'] && pal[v[i]-'A'] ) k++;
		}
		cout<<"NO\n";
}
