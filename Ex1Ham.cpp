#include<stdio.h>
#include<conio.h>

//int Tong(int a, int b){
//	int Tong = a + b;
//	printf("\n %d + %d = %d",a,b,Tong);
//}
//int Hieu(int a, int b){
//	int Hieu = a - b;
//	printf("\n %d - %d = %d ",a,b,Hieu);
//}
//int Tich(int a, int b){
//	if((a = 0) && (b = 0))
//	{
//	printf(" Error");
//	}
//	else
//			int Tich = a*b;{
//		printf("\n %d * %d = %d",a,b,Tich);
//	}
//}
//float Thuong(float a, float b){
//	if(a = 0 ) 
//	if (b = 0)
//	{printf("Error");
//	}
//	else
//	float Thuong = a/b;
//	{printf("\n %.0f / %.0f = %.3f ",a,b,Thuong);
//	}
//	return 0 ; // dong tinh tich thi phai co return
//}

float XuLyTinhToan(int a,int b, char pheptoan) {

	a = 3;
	b = 5 ;
	if(pheptoan == '+')
	{
		return a + b;
	}
	if(pheptoan =='-')
	{ 
	return a - b;
	}
	if(pheptoan =='*')
	{ 
	return a * b;
	}
	return a / b;
}
int main(){
//	int a, b;
//	printf("Nhap vao a = ");
//	scanf("%d",&a);
//	printf("Nhap vao b = ");
//	scanf("%d",&b);
	
//	int tong = Tong(a,b);
//	int hieu = Hieu(a,b);
//	int tich = Tich(a,b);

	int Tong =  XuLyTinhToan(a, b,'+');
	int Hieu =  XuLyTinhToan(a,b, '-');
	int Tich =  XuLyTinhToan(a,b, '*');
	float Thuong =  XuLyTinhToan(a,b, '/');
		printf("\nTong = %d",Tong);
		printf("\nHieu = %d",Hieu);
		printf("\nTich = %d",Tich);
		printf("\nThuong = %f",Thuong);
//	float thuong = Thuong(a,b);
/*Doi voi ham tra ve ( return)  thi chu y : trong ham main
ta phai ta ra mot bien tuong ung de nhan ket qua o ham con */	
}
