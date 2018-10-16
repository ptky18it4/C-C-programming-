/*TINH TONG LUY THUA BAC 3 CUA N CAC SO NGUYEN DAU TIEN*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

//int LuyThuaBac3 (int i, int n) 
//	{  
//		double S = 0; 
//		for (int i = 1 ; i <= n; i++)
//		S = S + pow(i,3);
//		return S ;
//	}
main(){
	int n ;
	printf("Nhap vao gia tri n = ");
	scanf("%d",&n);
	double S = 0; 
		for (int i = 1 ; i <= n; i++)
		S = S + pow(i,3);
	printf("\n Tong bac 3 cua n so nguyen dau tien la %lf :",S);
	return S ;
}
