#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int number, len=100;
	scanf("%d", &number);
	
	for( int i=0;i<number/len; i++ ) {
		printf("B");
	}
	number%=len;
	len/=10;
	for( int i=0;i<number/len; i++ ) {
		printf("S");
	}
	number%=len;
	len/=10;
	for( int i=1;i<=number/len; i++ ) {
		printf("%d", i);
	}
	return 0;
}