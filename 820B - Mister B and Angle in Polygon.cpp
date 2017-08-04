#include <bits/stdc++.h>
int main () {
	int n,a;
	scanf ("%i%i", &n, &a);
	int ans=3;
	double an=180./n;
	for (int i=4;i<=n;++i)if(fabs(a-(i-2)*an)<fabs(a-(ans-2)*an))ans=i;
	printf ("2 1 %d\n", ans);
}
