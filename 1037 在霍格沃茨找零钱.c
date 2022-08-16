#include <stdio.h>

int main(int argc, char *argv[]) {
	int gal   ,sic   ,knu;
	int gal_1 ,sic_1 ,knu_1;
	
	scanf("%d.%d.%d" ,&gal   ,&sic   ,&knu);
	scanf("%d.%d.%d" ,&gal_1 ,&sic_1 ,&knu_1);
	int count = (gal_1*17*29 +sic_1*29 +knu_1) - (gal*17*29 +sic*29 +knu);
	
	if(count < 0 ) {
		count = -count;
		printf("-");
	}
	
	printf("%d.%d.%d" ,(count/29)/17 ,(count/29)%17 ,count%29);
	
	return 0;
}