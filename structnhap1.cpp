#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
/*nhap1*/
struct book{
	char name[50];
	char author[50];
	float price;
	int edn;
};


void NHAPSACH(struct book b[],int n){
	for(int i = 0; i < n; i ++){
		fflush(stdin); 
		printf("Nhap ten sach b[%d] : ",i);
		scanf("%s",&b[i].name);
		printf("\nNhap nam xuat ban b[%d]=",i);
		scanf("%d",&b[i].edn);
		printf("\nNhap gia b[%d]=",i);
		scanf("%f",&b[i].price);
	}
}
void INSACH(struct book b[],int n) {
	for (int i = 0; i <n; i ++){
		printf("\nTen sach b[%d] la :        %s",i,b[i].name);
		printf("\nNam xuat ban b[%d] la :    %d ",i,b[i].edn);
		printf("\nGia b[%d] la :             %f ",i,b[i].price);
	}
	
}
void TIMTENSACH(struct book b[],int n  ){
	char x[50];
	for (int i= 0; i <n; i ++){
		if(strstr(b[i].name,x )!= NULL){
		printf("\nTen sach b[%d] la  :       %s",i,b[i].name);
		printf("\nNam xuat ban b[%d] la :    %d ",i,b[i].edn);
		printf("\nGia b[%d] la :             %f ",i,b[i].price);
			
		}
		
	}
}
void GIAMIN(struct book b[],int n, float ){
	for(int i = 0; i < n ; i ++){
		float min = b[0].price;
		for(int i = 0 ; i < n; i++){
			if(min > b[i].price) min = b[i].price;
		}
		return min;

		
	}
}

void GIAMIN(struct book b[],int n, float y){
	for(int i = 0; i < n ; i ++){
	if(b[i].price==minPrice)
	}
		printf("\nTen sach b[%d] la  :       %s",i,b[i].name);
		printf("\nNam xuat ban b[%d] la :    %d ",i,b[i].edn);
		printf("\nGia b[%d] la :             %f ",i,b[i].price);
	}
int main(){
	struct book b[50];
char ten;
	int n;
	printf("Nhap so sach n = ");
	scanf("%d",&n);
	fflush(stdin);
	NHAPSACH(b,n);
	fflush(stdin);
	INSACH(b,n);
	printf("Nhap ten can tim : ");
	scanf("%s",ten);
	fflush(stdin);
	TIMTENSACH(b,n);
	return 0;
}
