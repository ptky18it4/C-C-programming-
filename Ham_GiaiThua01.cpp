#include<stdio.h>  
#include<conio.h>  
int GiaiThua (int n)
{  
  int i,giaithua=1;  
  printf("BAI TOAN TINH GIAI THUA CUA MOT SO NGUYEN N NHAP TU BAN PHIM \n ");
  printf("Nhap n: ");  
  scanf("%d",&n);  
  
  for(i=1;i<=n;i++)
      giaithua=giaithua*i;
	  /*Vi GIAI THUA n! = 1.2.3...n nen ta gan cho giai thua = 1
	  * va cho giaithua = giaithua*i _ voi i chay tu 1-n*/  
  
  printf("\n Giai thua cua %d la: %d",n,giaithua);
  
} 
int main(){
	int GT ;
	printf("",GiaiThua(GT));
}
