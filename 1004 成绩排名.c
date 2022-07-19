#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct _list {
	int score;
	char studentID[11];
	char name[11];
} student;

int main(int argc, char *argv[]) {
	student max, min;
	max.score = -1;
	min.score = 101;
	
	int n;
	scanf("%d", &n);
	for ( int i=0; i<n; i++ ) {
		student temp;
		scanf( "%s %s %d", temp.name, temp.studentID, &temp.score );
		if ( temp.score > max.score ) max = temp;
		if ( temp.score < min.score ) min = temp;
	}
	
	printf( "%s %s\n", max.name, max.studentID);
	printf( "%s %s", min.name, min.studentID);
	
	return 0;
}