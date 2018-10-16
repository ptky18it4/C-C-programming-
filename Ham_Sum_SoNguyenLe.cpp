/*Viet chuong trinh tinh tong binh phuong cac so le tu 1-N
*B1 : Nhap n vao tu ban phim
*B2 : Dung vong lap for
*B3 : Dung if(dieu_kien )
*B4 : In ra ket qua*/
#include<stdio.h>
#include<conio.h>
int SumSoLe (int n)
{ int s = 0;
	//printf("BAI TOAN TINH TONG BINH PHUONG CAC SO NGUYEN LE TU 1--> N \n");
	printf("Nhap vao so nguyen n ");
	scanf("%d", &n);
	for(int i = 1; i <= n ; i ++) //i chay tu 1-n va tang len 1 dv sau moi lan lap lai
	if (i % 2 != 0) //Neu i chia cho hai co phan du khac 0 thi tong s = s + i
	s += i*i; // co the dung s = s + i*i 
	printf("KET QUA THEO YEU CAU = %d",s); 
	return s;
}
int main(){
	int Le ;
	printf("",SumSoLe(Le));
}
