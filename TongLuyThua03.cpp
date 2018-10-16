#include<stdio.h>
#include<conio.h>
#include<math.h>
int TongLuyThua3 (int n) //bien n

	{ 
		int  s = 0; // ban dau : tong s = 0
		for (int i = 1 ; i <= n; ++i)
		s = s + pow(i,3); 
		/*pow(x,y) : ham tinh luy thua trong do x la co so, y la so mu
		 * Luu y: vi ham pow(x,y) thuoc ve thu vien "math" 
		 * cho nen ta phai khai bao thu vien math.h o dau chuong trinh
		 */
		return s;
	}
main(){
	int N ;
	printf(" Nhap vao gia tri N = ");
	scanf("%d", & N );
	printf(" Tong luy thua cua N so nguyen dau tien = %d ",TongLuyThua3(N));

}
