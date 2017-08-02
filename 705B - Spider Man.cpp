#include "stdio.h"
int main(){
    int n;
    long long ai,sum;
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		scanf("%I64d",&ai);
		sum += ai-1;
		if(sum%2==1){
			printf("1\n");
		}else{
			printf("2\n");
		}
	}
	return 0;
}
