#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    char mat[10][10];
    for( int i=0;i<10;++i)for(int j=0;j<10;++j)cin>>mat[i][j];
    bool ok = false;
    for(int i=0;i<10 && ok==false;++i){
        for(int j=0;j<10 && ok==false;++j){
            if(mat[i][j]=='.'){
                int cnt=0,idx=i+1;
                while(idx<10 && mat[idx][j]=='X'){
                    ++cnt;
                    ++idx;
                }
                idx = i-1;
                while( idx >= 0 && mat[idx][j] == 'X' ){
                    ++cnt;
                    idx--;
                }
                if(cnt >= 4) ok = true;
                cnt = 0, idx = j+1;
                while( idx < 10 && mat[i][idx] == 'X' ){
                    ++cnt;
                    ++idx;
                }
                idx = j-1;
                while( idx >= 0 && mat[i][idx] == 'X' ){
                    ++cnt;
                    idx--;
                }
                if( cnt >= 4 ) ok = true;
                cnt = 0;
                int idxx = i+1, idxy = j+1;
                while( idxx < 10 && idxy < 10 && mat[idxx][idxy] == 'X' ){
                    ++cnt;
                    ++idxx;
                    ++idxy;
                }
                idxx = i-1, idxy = j-1;
                while( idxx >= 0 && idxy >= 0 && mat[idxx][idxy] == 'X' ){
                    ++cnt;
                    idxx--;
                    idxy--;
                }
                if( cnt >= 4 ) ok = true;
                idxx = i-1, idxy = j+1;
                cnt = 0;
                while( idxx >= 0 && idxy < 10 && mat[idxx][idxy] == 'X' ){
                    ++cnt;
                    idxx--;
                    ++idxy;
                }
                idxx = i+1, idxy = j-1;
                while( idxx < 10 && idxy >= 0 && mat[idxx][idxy] == 'X' ){
                    cnt++;
                    idxx++;
                    idxy--;
                }
                if( cnt >= 4 ) ok = true;
            }
        }
    }
    if( ok ) cout <<"YES\n";
    else cout << "NO\n";
}
