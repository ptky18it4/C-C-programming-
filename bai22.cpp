#include<stdio.h>
/* nhap ki tu - in ra ki tu voi getchar va putchar*/
int main(){
	char c ;
	printf("Nhap vao ki tu : ");
	c = getchar(); // gan ki tu co c
	
	printf("Ki tu vua nhap : %c",c); // Cách 1 
	
	printf("\nKi tu vua nhap : "); // Cách 2
	putchar(c); // tu khoa in ra ki tu
	
	return 0 ;
}
/* Vay nhap vao 1 chuoi thi sao
	Chuoi co dau cach thi in ra nhu the nao
*/
