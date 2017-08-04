#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
	int n,m;
	cin >> n >> m;
	char arr[n][m];
	for (int i=0;i<n;i++)for (int j=0;j<m;j++)cin>>arr[i][j];
	int nsmal = n+2;
	int msmal = m+2;
	int nbigg = -2;
	int mbigg = -2;
	int cnt = 0;
	for (int i=0;i<n;i++)for (int j=0;j<m;j++)if (arr[i][j]=='B'){
				nsmal = min(nsmal,i);
				msmal = min(msmal,j);
				nbigg = max(nbigg,i);
				mbigg = max(mbigg,j);
				cnt++;
			}
	int x = (nbigg - nsmal)+1;
	int y = (mbigg - msmal)+1;
	int z = max(x,y);
	if (z>n || z>m)cout<<"-1\n";
	else if (cnt==0)cout<<"1\n";
    else cout<<(z*z)-cnt<<'\n';
}
