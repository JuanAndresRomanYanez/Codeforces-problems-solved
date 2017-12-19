#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
string s;
int main(){
    cin>>s;
    if(s[0]>'a' && s[0]<'h' && s[1]>'1' && s[1]<'8' )cout<<"8\n";
    else if( (s[0]=='a' || s[0]=='h')&& (s[1]=='1' || s[1]=='8') )cout<<"3\n";
    else if( ( ( s[0]=='a' || s[0]=='h' ) && ( s[1]>'1' && s[1]<'8' ) ) || ((s[1]=='1' || s[1]=='8') && (s[0]>'a' && s[0]<'h') ) )cout<<"5\n";
    else cout<<"0\n";
}
