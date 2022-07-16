#include <stdio.h>
int main() {
	int sum = 0, s[5];
	char temp;
	char b[10][5] = { "ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu" };
	while ((temp = getchar()) != '\n')
		sum += (temp - '0');
	int i;
	for ( i=0; sum!=0; i++ ){
		s[i] = sum%10;
		sum/=10;
	}
	while ( i != 0 ) {
		if( i>0 ) 
			printf(" ");
		i--;
		printf("%s", b[s[i]]);
	}
	return 0;
}