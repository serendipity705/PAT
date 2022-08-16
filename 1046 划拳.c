#include <stdio.h>

int main(int argc, char *argv[]) {
	int jia_call, jia_fist, yi_call, yi_fist;
	int jia = 0, yi = 0, number;
	scanf("%d", &number);
	
	while ( number-- ) {
		scanf("%d %d %d %d", &jia_call, &jia_fist, &yi_call, &yi_fist);
		
		if ( jia_fist == jia_call+yi_call && yi_fist != jia_fist ) jia++;
		if ( yi_fist == jia_call+yi_call && yi_fist != jia_fist )	yi++;
	}
	
	printf("%d %d", yi, jia);
	return 0;
}