#include <stdio.h>
int n,cont=0;
int main(){
    scanf("%i", &n);
    int v[n];
    for(int i=0;i<n;++i)scanf("%i", &v[i]);
    for(int i=1;i<n-1;++i)if( (v[i]>v[i-1] && v[i]>v[i+1]) || (v[i]<v[i-1] && v[i]<v[i+1]) )cont++;
    printf("%i\n", cont);
}
