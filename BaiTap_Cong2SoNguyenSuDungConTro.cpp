#include<stdio.h>
int main(){
	int a,b;
	printf("Nhap vao a :");
	scanf("%d",&a);
	printf("Nhap vao b :");
	scanf("%d",&b);
	int *p1,*p2; //khoi tao con tro p1 va p2
	p1 = &a;	//gan gia tri cua a cho p1
	p2 = &b;	//gan gia tri cua b cho p2
	int tong = *p1+*p2;
	printf("Tong = %d",tong);
}
