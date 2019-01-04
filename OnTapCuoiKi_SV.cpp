#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct sinhvien{
	char ten[50];
	int namsinh;
	char diachi[100];
	int cmnd;
};
int NHAP(struct sinhvien sv[],int n){
	printf("\t* NHAP THONG TIN SINH VIEN.\n");
	for(int i =0; i < n; i++){
		fflush(stdin);
		printf("\t # Nhap ten sinh vien sv[%d] : ",i+1);
		gets(sv[i+1].ten);
		printf("\t # Nhap nam sinh sinh vien sv[%d] : ",i+1);
		scanf("%d",&sv[i+1].namsinh);
		fflush(stdin);
		printf("\t # Nhap dia chi sinh vien sv[%d] : ",i+1);
		gets(sv[i+1].diachi);
		printf("\t # Nhap cmnd sinh vien sv[%d] : ",i+1);
		scanf("%d",&sv[i+1].cmnd);
		printf("\n");
			}
}
int IN(struct sinhvien sv[],int n){
	printf("\t * IN THONG TIN SINH VIEN\n");
	printf("Thong tin cac sinh vien ban vua nhap : \n");
	for(int i =0;i<n;i++){
		fflush(stdin);
		printf("\n\tTen sin vien sv[%d] : %s",i+1,sv[i+1].ten);
		printf("\n\tNam sinh sinh vien sv[%d] : %d",i+1,sv[i+1].namsinh);
		printf("\n\tDia chi sinh vien sv[%d] : %s ", i+1,sv[i+1].diachi);
		printf("\n\tCMND sinh vien sv[%d] : %d", i+1,sv[i+1].cmnd);
		printf("\n");
		
	}
}
int TIM(struct sinhvien sv[],int n){
	printf("\t\t*TIM SINH VIEN\n");
	char tencantim[50];
	printf("Nhap ten sinh vien can tim : ");
	scanf("%s",&tencantim);
	for(int i= 0; i<n ;i++){
		if(strstr(sv[i+1].ten,tencantim)!=NULL){
			printf("\n\tTen sinh vien sv[%d] : %s ",i+1,sv[i+1].ten);
			printf("\n\tNam sinh sinh vien sv[%d] : %d",i+1,sv[i+1].namsinh);
			printf("\n\tDia chi sinh vien sv[%d] : %s ",i+1,sv[i+1].diachi);
			printf("\n\tCMND sinh vien sv[%d] : %d",i+1,sv[i+1].cmnd);
		}
	}
}
int main(){
	struct sinhvien sv[100];
	int n;
	printf("\t\t\t\t\tCHUONG TRINH NHAP THONG TIN SINH VIEN\n");
	printf("+ Nhap so sinh vien can nhap,n = ");
	scanf("%d",&n);
	fflush(stdin);
	NHAP(sv,n);
	//IN(sv,n);
	TIM(sv,n);
	return 0;
}
