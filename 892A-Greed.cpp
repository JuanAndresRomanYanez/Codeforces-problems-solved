#include <stdio.h>
#include <queue>
int n,x;
long long l=0,s=0;
std::priority_queue<long long>lol;
int main(){
    scanf("%i", &n);
    for(int i=0;i<n;++i)scanf("%i", &x),l+=x;
    for(int i=0;i<n;++i)scanf("%i", &x),lol.push(x);
    s=lol.top(),lol.pop(),s+=lol.top();
    printf(l<=s?"YES\n":"NO\n");
}

