#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    optimizar_io
	int n;
	cin >> n;
	int v[n];
	for (int i = 0; i < n; i++)cin >> v[i];
	int pos = 1;
	if (n == 1) {
		cout<<"YES"<<endl;
		return 0;
	}
        while (v[pos-1] < v[pos] && pos < n) pos++;
        while (v[pos-1] == v[pos] && pos < n) pos++;
        while (v[pos-1] > v[pos] && pos < n) pos++;
        if (pos==n)cout << "YES\n";
        else cout << "NO\n";
    return 0;
}
