#include <stdio.h>

#define Kaprekar 6174
#define length 4

void bubble_sort(int digits[]);

int main(int argc, char *argv[]) {
	int N, digits[length]={0};
	scanf("%d", &N);

	while ( N!=Kaprekar&&N!=0 ) {
		int max = 0, min = 0;
		for ( int i=0; i<length; i++ ) {				/*将数字拆分到数组中*/
			digits[i] = N%10;
			N/=10;
		}
		bubble_sort(digits);							/*冒泡排序*/
		
		int temp = 1;
		for ( int i=0; i<length; i++ ) {				/*最大值及最小值*/
			max = max*10 + digits[i];
			min += digits[i] *  temp;
			temp *= 10;
		}

		N = max - min;
		printf("%04d - %04d = %04d\n", max, min, N);	/*打印*/
	}
	return 0;
}

void bubble_sort(int digits[]) {
	int temp;
	for ( int i=0; i<length-1; i++ ) 
	{		
		for ( int j=i; j<length; j++ ) 
		{	
			if ( digits[i] < digits[j] ) 
			{
				temp = digits[i];
				digits[i] = digits[j];
				digits[j] = temp;
			}
		}
	}
}