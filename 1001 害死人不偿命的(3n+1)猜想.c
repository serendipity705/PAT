#include <stdio.h>

int main(int argc, char *argv[]) {
	int number, step=0;
	scanf("%d", &number);
	while ( number!=1 ) {
		if ( number%2 )	number = (number*3+1)/2;
		else number/=2;
		step++;
	}
	printf("%d", step);
	return 0;
}