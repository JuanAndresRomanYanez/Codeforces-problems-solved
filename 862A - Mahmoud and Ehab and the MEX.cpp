#include <stdio.h>
int n,x,lol,cont=0;
bool v[101];
int main(){
    scanf("%i%i", &n, &x);
    while(n--)scanf("%i", &lol),v[lol]=true;
    for(int i=0;i<x;++i)if(!v[i])cont++;
    if(v[x])cont++;
    printf("%i\n", cont);
}
