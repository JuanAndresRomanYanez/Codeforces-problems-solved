#include <stdio.h>
#include <string.h>
char a[100];
int cont=0;
int main(){
    scanf("%s", a);
    for(int i=0;i<strlen(a);++i)
            if(a[i]=='1'){
                    for(int j=i+1;j<strlen(a);++j)if(a[j]=='0')cont++;
                    break;
            }
    printf(cont>=6?"yes\n":"no\n");
}
