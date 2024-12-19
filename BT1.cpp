#include <stdio.h>

int main() {
	int array[5] = {2, 4, 5, 7, 9};
	printf("So luong phan tu dem nguoc la: ");
	for(int i = (sizeof(array)/sizeof(int)) - 1;i >= 0 ;i--){
		printf("%d ",array[i]);
	}
	return 0;
}
