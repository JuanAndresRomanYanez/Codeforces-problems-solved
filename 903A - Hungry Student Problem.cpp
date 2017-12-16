#include <stdio.h>
int test,x;
int main(){
    scanf("%i", &test);
    while(test--)scanf("%i", &x),printf(x<=2 || x==4 || x==5 || x==8 || x==11?"NO\n":"YES\n");
}
