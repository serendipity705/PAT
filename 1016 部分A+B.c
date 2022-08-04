#include <stdio.h>

int statistics(int n, int p);

int main(int argc, char *argv[]) {
    int A, PA, B, PB;
    scanf( "%d %d %d %d", &A, &PA, &B, &PB);
    printf( "%d\n", statistics(A,PA) + statistics(B,PB) );
    return 0;
}

int statistics(int n, int p){
    int ret = 0;
    while( n ) {
        if(n%10 == p) {
            ret = ret*10 + p;
        }
        n /= 10;
    }
    return ret;
}

//没看到A,B小于10的9次方时写的
//int statistics( );
//int main(int argc, char *argv[]) {
//	printf( "%d\n", statistics() + statistics() );
//	return 0;
//}
//
//int statistics( ) {
//	int s[11] = {0} ,D, P=0;
//	char temp;
//	while ((temp = getchar()) != ' ')	s[temp-'0']++;
//	scanf("%d", &D);
//	getchar();
//	while ( s[D] ) {
//		P = P*10 + D;
//		s[D]--;
//	}
//	return P;
//}