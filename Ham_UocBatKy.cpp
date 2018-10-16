/*In ra cac so la uoc so cua 1 so N bat ki */
#include<stdio.h>
#include<conio.h>
int UocBk (int n)
	{ n = 6;
	for(int i = 1; i <= n; i++)
	if (n % i == 0)
	printf("%d ,",i);
	printf("la uoc cua n");
	//printf("\nCac so tren la uoc cua n");
}
int main(){
	int uoc;
	printf("",UocBk(uoc));
}
