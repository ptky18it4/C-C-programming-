#include<stdio.h>
int main(){
	int a,b;
	printf("Nhap vao a : ");
	scanf("%d",&a);
	printf("Nhap vao b : ");
	scanf("%d",&b);
	int *p1 = &a; // tao con tro p1 dong thoi gan gia tri a cho con tro p1
	int *p2 = &b; // tao con tro p2 dong thoi gan gia thi b cho con tro p2
	int tam = *p1; //tao bien 'tam' de thuc hien hoan doi
	*p1 = *p2;
	*p2 = tam;
	printf("Gia tri cua a la : %d ",*p1);
	printf("\nGia tri cua b la : %d ",*p2);
	
	return 0;
}
