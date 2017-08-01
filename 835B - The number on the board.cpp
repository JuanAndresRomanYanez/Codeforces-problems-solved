#include <iostream>
#include <vector>
#include <string>
#include <queue>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    string k;
    int n,sum=0,cnt=0;
    cin>>n>>k;
    priority_queue<int, vector<int>, greater<int> >pq;
    for( auto it: k )sum+=( (int)it-'0' ),pq.push((int)it-'0');
    while(sum<n)sum-=pq.top(),sum+=9,pq.pop(),cnt++;
    cout<<cnt<<"\n";
    return 0;
}
