#include <iostream>
#include <vector>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int k,pol;
string s="",lol;
vector<int>V[200];
char c;
int main(){
    optimizar_io;
    cin>>k>>lol>>pol;
    while(k--)s+=lol;
    for(int i=0;i<(int)s.size();++i){
        V[s[i]].push_back(i);
    }
    while(pol--){
        cin>>k>>c;
        s[V[c][k-1]]=0;
        V[c].erase(V[c].begin()+k-1);

    }
    for( int i=0;i<(int)s.size();++i){
        if(s[i])
            cout<<s[i];
    }
    return 0;
}
