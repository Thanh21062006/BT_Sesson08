#include <stdio.h>

int main(){
	int array[3][3] = {{4, 7, 8}, {1, 3, 6}, {10, 9, 5}}, max = 0;
	for(int i = 0;i < sizeof(array)/sizeof(array[0]);i++){
		for(int j = 0;j < sizeof(array[0])/sizeof(int);j++){
			if(array[i][j] > max){
				max = array[i][j];
			}
		}
	}
	printf("So lon nhat trong mang la %d",max);
	return 0;
} 
