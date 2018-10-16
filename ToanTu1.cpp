#include<stdio.h>
#include<conio.h>
int main(){
	/* x<<=n <=> x*2^n  : dich trai
		x>>=n <=> x/2^n :dich phai
	*/
	int a,b;
	printf("\nNhap vao gia tri cua a :  ");
	scanf("%d", &a); // dau & la toan tu dia chi
	printf("\nNhap vao gia tri cua b : ");
	scanf("%d", &b);
	printf("\nTong hai so a va b la =  %d  ",a+b );
	
	//getch();
	return 0 ;
}
