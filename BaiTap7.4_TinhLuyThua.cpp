#include<stdio.h>
int LUYTHUA(int n){

	return n*n*n;

}
int main(){
	int n;
	printf("Nhap vao n : ");
	scanf("%d",&n);
	printf("%d",LUYTHUA(n));
	return 0;
}

