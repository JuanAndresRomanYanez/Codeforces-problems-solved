#include<iostream>
#include <vector>
#include <iomanip>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    int n,k;
	cin>>n>>k;
	vector<double>a(n+1);
	for(int i=1;i<=n;i++){
		cin>>a[i];
		a[i] += a[i-1];
	}
	double res=0;
	for(int i=k; i<=n; i++){
		res += (a[i] - a[i-k])/(n-k+1);
	}
	cout<<fixed<<setprecision(10)<<res<<"\n";
	return 0;
}
