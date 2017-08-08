#include<iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    int n,t,k,d;
	cin>>n>>t>>k>>d;
	if(((d/t+1)*k)>=n) cout<<"NO\n";
	else cout<<"YES\n";
	return 0;
}
