#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
/*nhap2*/
struct book{
	char name[50];
	char author[50];
	float price;
	int edn;
};


void NhapSach(struct book b[],int n){
	for(int i = 0; i < n; i ++){
		fflush(stdin); 
		printf("Nhap ten sach b[%d] : ",i);
		gets(b[i].name);
		fflush(stdin);
		printf("Nhap gia ban b[%d]  :",i);
		scanf("%d",&b[i].price);
		fflush(stdin);
		printf("Nhap nam xuat ban  b[%d]=",i);
		scanf("%d",&b[i].edn);
		
	}
}
void InSach(struct book b[],int n) {
	for (int i = 0; i <n; i ++){
		printf("\nTen sach b[%d] 	: %s",i,b[i].name);
		printf("\nGia ban b[%d] 	: %d",i,b[i].price);
		printf("\nNam xuat ban b[%d]: %d",i,b[i].edn);
		
	}
}
void SearchName(struct book b[],int n){
char x[50]; 
	printf("\nNhap ten sach can tim:");
	scanf("%s",x);
	for(int i=0;i<n;i++)
{
	if(strstr(b[i].name,x)!=NULL){
		printf("\nTen sach b[%d] 	: %s",i,b[i].name);
		printf("\nGia ban b[%d] 	: %f",i,b[i].price);
		printf("\nNam xuat ban b[%d]: %d",i,b[i].edn);
	}
}}
float minPrice(struct book b[],int n){
	float min =b[0].price;
	for(int i=0;i<n;i++){
		if(min>b[i].price) min=b[i].price;
	}
	printf("Ten sach b[%d]     : ",min);
	printf("Gia ban b[%d]      : ",min);
	printf("Nam xuat ban b[%d] : ",min);
	return min;
}
int main()
{
	struct book b[50];
	char x[50];
	int n;
	printf("\nNhap so sach n = ");
	scanf("%d",&n);
	NhapSach(b,n);
	fflush(stdin);
	InSach(b,n);
	SearchName(b,n);
	fflush(stdin);
	printf("\n\nGia ban thap nhat : ");
	minPrice(b,n);
}
