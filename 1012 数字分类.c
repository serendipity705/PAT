#include <stdio.h>

int main(int argc, char *argv[]) {
	int n, x=1, frequency;
	double y=0.0;
	int A[6]= {0};
	scanf("%d",&frequency);
	for ( int i=0; i!=frequency;i++ ) {
		scanf("%d",&n);
		int temp = n%5;
		switch(temp) {
			case 0:
				if( n%2 == 0 ) A[1] += n;
				break;
			case 1:
				A[2]+=n*x;
				x=-x;
				break;
			case 2:
				A[3]++;
				break;
			case 3:
				y++;
				A[4] += n;
				break;
			case 4:
				if( n>A[5] ) A[5]=n;
				break;
		}
	}
	for ( int i=1; i<6; i++ ) {
		if( A[i] ) {
			if( i==4 ) printf("%.1f ", A[i]/y);
			else	printf("%d ", A[i]);
		} else 	printf("N ");
	};
	return 0;
}