#include<stdio.h>
int main(){
	int m, n;
	int a[3][3];
	int i,j;
	printf("Nhap vao m : ");
	scanf("%d",&m);
	printf("Nhap vao n : ");
	scanf("%d",&n);
	for(i = 0 ; i < m ;i++){
		for(j = 0; j < n ;j++){
		printf("Nhap a[%d][%d] = ",i,j);
		scanf("%d",&a[i][j]);
		}
	}
	printf("Mang cua ban sau khi nhap la : \n");
	for(i = 0 ; i < m ;i++){
		for(j = 0; j < n ;j++){
		printf("%d\t ",a[i][j]);
		}
		printf("\n");
		}
	
	return 0;
}
