#include<iostream>
#include<vector>
#include<algorithm>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
vector<int> go[150005];
vector<int> vis;
long long int ct = 0;
void dfs(int cur)
{
	if(vis[cur] == 1)
	return;
	vis[cur] = 1;
	ct++;
	for(int i=0;i<go[cur].size();i++)
	dfs(go[cur][i]);
}
int main()
{
    optimizar_io
	long long int  n, m;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int a, b;
		cin>>a>>b;
		go[a].push_back(b);
		go[b].push_back(a);
	}
	for(int i=0;i<=n;i++)
	vis.push_back(0);
	long long int tot = 0;
	for(int i=1;i<=n;i++)
	{
		ct = 0;
		dfs(i);
		tot += (((ct - 1) * ct) / 2);
	}
	if(tot == m)
	cout<<"YES";
	else
	cout<<"NO";
}
