#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
long long n;
int main(){
    optimizar_io
    cin>>n;
    if(n%10!=0){
        if(n%10<=5)n-=n%10;
        else n=n+10-n%10;
    }
    cout<<n<<"\n";
    return 0;
}
