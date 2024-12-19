#include <stdio.h>

int main() {
	int a;
	printf("Moi ban nhap so hang va so cot cua mang: ");
	scanf("%d", &a);
	
	int array[a][a];
	for(int i = 0;i < a;i++){
		for(int j = 0;j < a;j++){
			printf("Moi ban nhap phan tu array[%d][%d]: ", i, j);
			scanf("%d", &array[i][j]);
		}
	}
	for(int i = 0;i < a;i++){
		for(int j = 0;j < a;j++){
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
	return 0;
}
