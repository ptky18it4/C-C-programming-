#include<stdio.h>
 /*Nhap mot chuoi tu ban phim*/
int main(){
	char c[100];
	printf("Ban hay nhap chuoi :");
	//scanf("%s",c);// in ra chuoi khong co ki tu trang (khoan_trong)
	gets(c); //in ra chuoi bao gom ca ki tu trang
	
	printf("Chuoi vua nhap  : %s ",c);
	
	
	return 0;
}
