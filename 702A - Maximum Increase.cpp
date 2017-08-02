#include <iostream>
#include <queue>
#include <vector>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    optimizar_io;
    int a,cont=1;
    cin>>a;
    priority_queue<int>hot;
    vector<int>V(a);
    for(int i=0;i<a;++i){
            cin>>V[i];
    }
    for(int i=0;i<a-1;++i){
        if(V[i+1]>V[i]){cont++;}
        else{hot.push(cont);cont=1;}
    }
    hot.push(cont);
    cout<<hot.top()<<"\n";
    return 0;
}
