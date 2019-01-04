#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
/*khai bao*/
struct sach{
	char ten[50];
	int namsx;
	double giaban;
};

void NhapSach(struct sach s[],int n){
	printf("Moi ban nhap thong tin :\n");
	for(int i = 0; i < n ; i++){
		fflush(stdin);
		printf("\t+ Ten sach - [%d]: ",i+1);
		gets(s[i+1].ten);
//		printf("\t+ Nam san xuat  : ",i+1);
//		scanf("%d",&s[i+1].namsx);
//		printf("\t+ Gia ban  : ",i+1);
//		scanf("%lf",&s[i+1].giaban);
//		printf("\n");
	}
}
void InSach(struct sach s[], int n){
	int i;
	printf("Danh sach cac cuon sach ban vua nhap .\n");
	for(i=0; i < n; i++){
		fflush(stdin);
			printf("\t # Ten sach - [%d]: %s ",i+1,s[i+1].ten);
//			printf("\n\t+ Nam san xuat  : %d ",s[i+1].namsx);
//			printf("\n\t+ Gia ban  : %lf\n",s[i+1].giaban);
			fflush(stdin);
			printf("\n");
	}
}
void TimSach(struct sach s[],int n){
char tentim[50]; 											// tao 1 chuoi moi de luu ten ma ban muon tim .
	printf("\nNhap ten sach can tim:");
	scanf("%s",tentim);
	for(int i=0;i<n;i++)									//Dung vong lap de so sanh "ten_can_tim" voi danh sach ma ban da nhap
{
	if(strstr(s[i].ten,tentim)!=NULL){						// Dung ham strstr(s[i].ten,tentim) de so sanh ten_can_tim" voi "danh sach"
		fflush(stdin);
		printf("\nTen sach s[%d] 	: %s",i,s[i].ten);
		printf("\nGia ban s[%d] 	: %f",i,s[i].giaban);
		printf("\nNam xuat ban s[%d]: %d",i,s[i].namsx);
	}
}}


int main(){
	struct sach s[100];
	int n;
	printf("Nhap so luong sach : ");
	scanf("%d",&n);
	NhapSach(s,n);
	fflush(stdin); 
	InSach(s,n);
	fflush(stdin);
	TimSach(s,n);
	return 0;
}

