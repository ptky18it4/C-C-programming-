//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int *p; 												/*Khoi tao con tro *p kieu du lieu int*/
//	int n; 													/*Khoi tao so nguyen n*/
//	printf("Ban hay nhap so luong phan tu cho mang : ");	/*Thong bao de nguoi dung nhap vao so luong phan tu cua mang*/
//	scanf("%d",&n);											/*Nhan vao so n ma nguoi dung da nhap o tren*/
//	p = (int*)malloc(n*sizeof(int)); 						/*cap phat bo nho "dong" gom n phan tu tuy y*/ /*tencontro = (kieudulieu*)malloc(soluongphantu*sizeof(kieudulieu));*/
//	int i,tong=0;
//	for(i = 0; i < n; i++){
//		printf("Nhap vao a[%d] : ",i);
//		scanf("%d",(p+i));    								/* (p+i) : dia chi , no tong duong voi &(bienkhoitao)*/
//		tong = tong + *(p+i); 								// *(p+i) gia tri thu i ma con tro tro toi
//	}
//	printf("Tong cac phan tu trong mang la : %d ",tong);	
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,n,tong=0,*p;
	printf("Nhap vao so luong phan tu : ");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	for(i=0; i<n;i++){
		printf("\nNhap vao a[%d] : ",i);
		scanf("%d",(p+i));
		tong+=*(p+i);
	}
	printf("Tong cac phan tu cua mang : %d",tong);
	return 0;
}
