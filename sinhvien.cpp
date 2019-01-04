#include<stdio.h>
#include<conio.h>
#include<string.h>

struct sach
{
	char ten[50];
	int namsx;
	double giaban;
};
void Nhap(sach s[],int n)
{
	printf("Moi ban nhap thong tin :\n");
	for(int i = 0; i < n ; i++){
		fflush(stdin);
		printf("\t+ Ten sach - [%d]: ",i+1);
		gets(s[i+1].ten);
		printf("\t+ Nam san xuat  : ",i+1);
		scanf("%d",&s[i+1].namsx);
		printf("\t+ Gia ban  : ",i+1);
		scanf("%lf",&s[i+1].giaban);
		printf("\n");
	}
}
void SAPXEP(sach s[], int n){
	int sl;
	printf("Sap xep theo thu tu ABC :\n\t+ A-Z : --> 1\n\t+ Z-A : --> 2\n");
	printf("Ban chon : ");
	scanf("%d",&sl);
	if(sl==1){
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
		   if(strcmp(s[i+1].ten,s[j+1].ten)>0)
		  {
			sach tam =s[i+1];
            s[i+1]=s[j+1];
            s[j+1]= tam;
		  }
		}
	}
	printf("\nSap xep theo thu tu A-Z..\n");
	for(int i=0;i<n;i++)
	{
		printf("\n\t%s",s[i+1].ten);
	}
	getchar();
}else if(sl==2){
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
		   if(strcmp(s[i+1].ten,s[j+1].ten)<0)
		  {
			sach tam =s[i+1];
            s[i+1]=s[j+1];
            s[j+1]= tam;
		  }
		}
	} 

	fflush(stdin);
	printf("Sap xep theo thu tu Z-A..\n");
	for(int i=0;i<n;i++)
	{
		printf("\n%s",s[i+1].ten);
	}
	getchar();
}
else{
	printf("Erro");
}
}
/*{void Sapxep(sach s[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
		   if(strcmp(s[i+1].ten,s[j+1].ten)>0)
		  {
			sach tam =s[i+1];
            s[i+1]=s[j+1];
            s[j+1]= tam;
		  }
		}
	} 
}
void Xuat(sach s[],int n)
{	fflush(stdin);
	printf("Sap xep theo thu tu ABC..\n");
	for(int i=0;i<n;i++)
	{
		printf("\n%s",s[i+1].ten);
	}
	getchar();
}}
*/
void InSach(struct sach s[], int n){
	int i;
	printf("\n #Danh sach cac cuon sach ban vua nhap .\n");
	for(i=0; i < n; i++){
		fflush(stdin);
			printf("\t # Ten sach - [%d]: %s ",i+1,s[i+1].ten);
			printf("\n\t+ Gia ban  : %.3lf",s[i+1].giaban);
			printf("\n\t+ Nam san xuat  : %d ",s[i+1].namsx);
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
		printf("\nGia ban s[%d] 	: %.3lf",i,s[i].giaban);
		printf("\nNam xuat ban s[%d]: %d",i,s[i].namsx);
	}
}}
int main()
{
	sach s[100];
	int n;
	printf("Nhap vao so sach : ");
	scanf("%d",&n);
	Nhap(s,n);
	SAPXEP(s,n);
//	Xuat(s,n);
	getch();
	InSach(s,n);
	TimSach(s,n);
	getch();
	return 0;
}
