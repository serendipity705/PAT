#include <stdio.h>

int main(int argc, char *argv[]) {
	int number;
	scanf("%d", &number);
	while(getchar()!='\n');
	char temp,s[number];
	
	for( int i=0; i<number; i++ ) {
		int pos = 0, count[3] = {0,0,0};
		while( (temp = getchar()) != '\n' ) {
			if( temp=='A' )	count[pos]++;
			else if ( temp=='P' && pos==0 )	pos=1;
			else if ( temp=='T' && pos==1 )	pos=2;
			else	break;     /*会产生多余字符*/
		}
        /*temp=='\n',说明字符串中没有遇到非法字符 */  
		if( temp=='\n'&&pos==2&&count[1]&& count[2]==count[1]*count[0] )	s[i] = 1;/*（P与T之间的A的数量）*（P之前的A的数量）=（T后A的数量）*/
		else	s[i] = 0;
		if( temp!='\n' )	while( getchar()!='\n' );   /*读掉多余字符*/
	}

	for( int i=0; i<number; i++ ) {
		if ( s[i] ) puts("YES");
		else puts("NO");
	}

	return 0;
}