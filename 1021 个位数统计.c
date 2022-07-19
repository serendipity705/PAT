#include <stdio.h>
int main(int argc, char *argv[]) {
	int s[11] = {0};
	char N[1001];
	scanf("%s", &N);
	for ( int i=0; N[i]!=0; i++ )	s[N[i]-'0']++;
	for ( int i=0; i<10; i++ )	if( s[i] > 0 ) printf("%d:%d\n", i, s[i]);	
	return 0;
}