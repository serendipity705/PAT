#include <stdio.h>
#define NUM 10

int main(int argc, char *argv[]) {
	int number, s[NUM]= {0};
	for( int i=0; i<NUM; i++ )	scanf("%d",&s[i]);
	for( int i=1; i<NUM; i++ )	if(s[i]--)	{printf("%d",i);break;}
	for( int i=0; i<NUM; i++ )	while(s[i]--)	printf("%d",i);
	return 0;
}