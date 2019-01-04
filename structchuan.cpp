#include<conio.h>
#include<stdio.h>
#include<string.h>
/*chuan*/
struct book{
	char name[50];
	int edn;
	float price;
};
void NhapSach(struct book b[],int n){
	for(int i=0;i<n;i++){
		fflush(stdin);
		printf("Nhap name b[%d]=",i);
		gets(b[i].name);		
		printf("Nhap nam xuat ban b[%d]=",i);
		scanf("%d",&b[i].edn);
		printf("Nhap gia b[%d]=",i);
		scanf("%f",&b[i].price);
	}
}
void InSach(struct book b[],int n) {
	for (int i = 0; i <n; i ++){
		printf("\nTen sach b[%d] la :        %s",i,b[i].name);
		printf("\nNam xuat ban b[%d] la :    %d ",i,b[i].edn);
		printf("\nGia b[%d] la :             %f ",i,b[i].price);
	}
	
}
//tim ra sach co ten sach chua chu x bat ky
void searchName(struct book b[],int n,char timten[50]){
	for(int i=0;i<n;i++){
		if (char *strstr(const char *b[i].name, const char *timten)){
			InSach(b,n);
		}
	}	
}
 //tim ra sach co gia nho nhat
float minPrice(struct book b[],int n){
	float min =b[0].price;
	for(int i=0;i<n;i++){
		if(min>b[i].price) min=b[i].price;
	}
	return min;
}
void InSachNho(struct book b[],int n){
	for(int i=0;i<n;i++){
		if(b[i].price==minPrice(b,n)) {
			printf("\n sach co gia nho nhat Name is : %s ",b[i].name);
			printf("\n sach nho nhat duoc xuat ban nam : %d ",b[i].edn);
		}
	}
}
int main(){
	struct book b[100];
	int n;
	char timten[50];
	printf("Nhap so sach = ");
	scanf("%d",&n);
	fflush(stdin);			
	NhapSach(b,n);
	InSach(b,n);
	fflush(stdin);
	InSachNho(b,n);
	printf("\nNhap ten sach muon tim :");
	gets(timten);
	fflush(stdin);
	searchName(b,n,timten);
	
}
