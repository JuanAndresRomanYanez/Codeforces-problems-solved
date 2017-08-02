#include <iostream>
 #define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
	optimizar_io
    int x,y,total=0,ans=0;
    cin>>x;
    for(int i=0;i<x;++i)
        {
            cin>>y;
            total+=y;
        }
    for(int i=1;i<=5;++i)
        {
            if((total+i)%(x+1)!=1)
                {
                    ans++;
                }
        }
    cout<<ans<<endl;
    return 0;
}
