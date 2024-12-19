#include <stdio.h>

int main() {
	int array[4][3] = {
		{1, 2, 3},
		{5, 6, 7},
		{8, 9, 3},
		{4, 8, 9}
	},total = 0;
	
	for(int i = 0;i < sizeof(array)/sizeof(array[0]);i++){
		for(int j = 0;j < sizeof(array[0])/sizeof(int);j++){
			if(i == 0 || j == 0 || i == 3 || j == 2){
				// bang 3 va 2 la vi lay n-1 n o day la 4 va 3!
				total += array[i][j];
			}
		}
	}
	printf("Tong cac so tren duong bien la %d",total);
	return 0;
}
