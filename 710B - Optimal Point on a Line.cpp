#include <stdio.h>
#include <algorithm>
int test;
int main(){
    scanf("%i", &test);
    int v[test];
    for(int i=0;i<test;++i)scanf("%i", &v[i]);
    std::sort(v,v+test);//hay que ordenar primero :v
    printf("%i", v[(test-1)/2]);//el punto más optimo siempre es el punto medio XD
}
