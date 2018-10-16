/*Viet chuong trinh nhap vao 1 so nguyen & in ra uoc so cua so do
*B1 :Khai bao ham (ten bien)
*B2 : Nhap vao so nguyen n
*B3 : Dung vong lap for de bieu dien
*b4 : Thuat toan
**/
#include<stdio.h>
#include<conio.h>
int UocSN(int n) //UocSN : uoc so nguyen
{ 	printf("Nhap vao so nguyen n = ");
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i)
	if (n % i == 0) //Neu n chia het cho i (i chay tu 1 --> n)
	//printf("Uoc cua so nguyen n vua nhap la %d : ",i);
	printf("%d ;",i);
	printf("\n Nhung so tren la uoc chung cua so nguyen n . ");
	
	
//	
//	return 0 ;
}
int main(){
	int Uoc;
	printf("\n ", UocSN(Uoc));
	
}
