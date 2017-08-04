#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
	int n,a,b,x;
	cin>>n>>a>>b;
		int c=0;int u=0;
		for(int i=0;i<n;i++){
			cin>>x;
			if(x==1){
				if(a>0)a--;
				else{
					if(b>0){
						b--;
						u++;
					}else{
						if(u>0){
							u--;
						}else c++;
					}
				}

			}else{
				if(b>0)b--;
				else c+=2;
			}
		}
    cout<<c<<endl;
	return 0;
}
