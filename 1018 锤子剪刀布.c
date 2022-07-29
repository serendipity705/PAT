#include<stdio.h>

int change(char x);

int main( ){
	int num;
	scanf("%d",&num);
	char step[3] = {'B', 'C', 'J'};
	int j = 0, y = 0; 
	int js[3] = {0}, ys[3] = {0};
	
	char tempj, tempy;
	int k1, k2;
	for( int i=0; i<num; i++){
		getchar();
		scanf("%c %c", &tempj, &tempy);
		k1 = change(tempj);
		k2 = change(tempy);
		/*石头 剪刀 布 刚好上一个赢下一个（ %3处理布>石头的情况 ）*/
		if( ((k1+1)%3)==k2 ){/*甲*/
			j++;
			js[k1]++;
		}else if( ((k2+1)%3)==k1 ){/*乙*/
			y++;
			ys[k2]++;
		}
	}
	/*甲的胜次=乙的负次（ 平的次数等于总数-胜次-负次 ）*/
	printf("%d %d %d\n", j ,num-j-y, y);
	printf("%d %d %d\n", y ,num-j-y, j);
	
	int p = 0, q = 0;
	for(int i=0; i<3; i++){
		if( js[i]>js[p] ) p = i;
		if( ys[i]>ys[q] ) q = i;
	}	
	printf("%c ",step[p]);
	printf("%c",step[q]);
	
	return 0;
} 

int change(char x) {
	if(x=='B') return 0;
	if(x=='C') return 1;
	if(x=='J') return 2;
}