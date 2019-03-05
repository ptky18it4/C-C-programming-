#include<stdio.h>
#include<conio.h>
int  Nhap(int a[],int n){
	for(int i=0;i<n;i++){
		printf("Nhap a[%d]= ",i);
		scanf("%d",&a[i]);
	}
}
int In(int a[],int n){
	printf("Mang vua nhap :");
	for(int i=0; i <n;i++){
		printf("\na[%d]=%d",i,a[i]);
		
	}
	
	
}
int Max(int a[],int n){
	for(int i =1; i<n; i++)
		for(int j=n-1; j>=i;j--)
		if(a[j]>a[j-1])
		{
		int t =a[j];
		a[j]=a[j-1];
		a[j-1]=t;	
		}
		printf("\n3 so lon nhat la : ");
		for(int i=0; i<3; i++){
			printf("\na[%d]=%d",i,a[i]);
		}
}
int main(){
	int a[10];
	int n;
	printf("Nhap so phan tu cua mang :  ");
	scanf("%d",&n);
	Nhap(a,n);
	In(a,n);
	Max(a,n);
}
