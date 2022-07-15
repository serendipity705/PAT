#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=0;
	char word[80][81];
//	输入
	while(scanf("%s",word[i++])&&(getchar()!='\n'));/*出现换行时结束循环*/
//	输出
	while(--i)		printf("%s ",word[i]);
	printf("%s\n",word[0]);
	
	return 0;
}