#include<stdio.h>
#include<conio.h>
int Nhap(int a[], int n){
	for(int i=0; i<n; i++){
		printf("Nhap a[%d] :",i);
		scanf("%d",&a[i]);
	}	
}
int BienDoi(int a[], int b[],int n){
	for(int i=0; i<n; i++){
		b[i]=a[i-1]*a[i+1];
	}
	for(int i=0; i<n; i++){
		printf("%d\t",b[i]);
	}
}
int main(){
	int n;
	int a[n],b[n];
	printf("Nhap vao so a  tu cua mang : ");
	scanf("%d",&n);
	Nhap(a,n);
	BienDoi(a,b,n);
}
