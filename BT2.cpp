#include <stdio.h>

int main() {
	int check, numb, array[10] = {2, 4, 6, 7, 8, 9, 5, 1, 18, 10};
	printf("Moi ban nhap mot so bat ki de kien tra: ");
	scanf("%d", &numb);
	
	for(int i = 0;i < sizeof(array)/sizeof(int);i++){
		check = 1;
		if(array[i] == numb){
			check = 0;
			printf("Vi tri phan tu trong mang la array[%d] = %d", i, array[i]);
			break;
		}
	}
	if(check){
		printf("Phan tu khong ton tai trong mang!");
	}
	return 0;
}
