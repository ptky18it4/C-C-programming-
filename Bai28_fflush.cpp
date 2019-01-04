#include<stdio.h>
#include<conio.h>
/* Ham fflush (stdin)*/
int main(){
	char ten[100];
	int tuoi;
	printf("Nhap tuoi : ");
	scanf("%d",&tuoi); 
	printf("Nhap ten :");
	fflush(stdin); /* neu kho co lenh code nay thi nhung dong code sau se bi troi
						neu du fflush(stdout ) thì coi nhu quá cha. nó van bo qua dong lenh nhap ten*/
	gets(ten);
	printf("Tuoi vua nhap : %d",tuoi);
	printf("\nTen vua nhap : %s ", ten);
	return 0;
}
