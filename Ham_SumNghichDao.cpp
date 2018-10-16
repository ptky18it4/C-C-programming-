/*Viet chuong trinh tinh tong nghich dao cua 
* cua N so nguyen dau tien theo cong thuc : S = 1 +1/2 + 1/3 +...+ 1/n .
*B1 : Nhap n vao tu ban phim
*B2 : Dung vong lap for
*B3 : Dung if(dieu_kien )
*B4 : In ra ket qua*/
#include<stdio.h>
#include<conio.h>
int TinhTongNghichDao (int n)
{ float s = 0 ;
	printf("Nhap vao so nguyen n : ");
	scanf("%d", & n);
	for (int i = 1; i <= n; i++)
	s += 1./i ; /*O day ta dung 1./i boi vi ket qua sua khi chia
				* la mot so le
				* khi dung s = s + 1/i thi ket qua se la :1.00000
				* khi dung s = s + 1./i thi ket qua se la : 1.5000 - voi n = 2*/
	printf("Tong nghich dao cua n so nguyen dau tien = %f",s);
	/*	printf("Tong nghich dao cua n so nguyen dau tien = %f",s=s+1./i);*/
	
}
int main() {
	int ND ; // ND : Nghich dao
	printf("",TinhTongNghichDao(ND));
	}

