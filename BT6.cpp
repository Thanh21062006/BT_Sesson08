#include <stdio.h>

int main() {
	int array[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	}, total=0;
	
	for(int i = 0;i < sizeof(array)/sizeof(array[0]);i++){
		for(int j = 0;j < sizeof(array[0])/sizeof(int);j++){
			if(i == j){
				printf("%d ",array[i][j]);
				total += array[i][j];
			}
		}
	}
	printf("\nTong cua duong cheo la %d", total);
	return 0;
}
