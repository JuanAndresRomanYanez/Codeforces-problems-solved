#include <bits/stdc++.h>
using namespace std;
bool lol[101]={};
int A[101],N,M,tmp;
int main() {
  cin>>N>>M;
  int l,l_l;
  cin>>l;l--;
  memset(A,-1,sizeof(A));
  for(int i=0;i<M-1;++i){
    l_l=l;
    cin>>l;l--;
    tmp=A[l_l];
    A[l_l]=l_l<=l?l-l_l:l+(N-l_l);
    if(A[l_l]==0) A[l_l] = N;
    if(tmp!=-1){
      if(tmp!=A[l_l]){
        cout<<"-1\n";
        return 0;
      }
    }
    else if(lol[A[l_l]]){
      cout<<"-1\n";
      return 0;
    }
    lol[A[l_l]]=1;
  }
  int i=1;
  for(int j=0;j<N;++j){
    if(A[j]==-1){
      while(lol[i])i++;
      A[j]=i;
      lol[i]=1;
    }
  }
  for(int i=0;i<N;++i)cout<<A[i]<<" ";
  cout<<"\n";
}
