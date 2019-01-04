#include<stdio.h>
#include<conio.h>
int NHAPMANG(int i,int n, int a[100]){
	
		for(i = 0; i < n; i ++){
		printf("Nhap vao a[%d] = ",i);
		scanf("%d",&a[i]);
	}
}
int INMANG(int i, int n, int a[100]){
	printf("\nMang vua nhap la : \n");
	for(i = 0;i<n; i++){
	printf("a[%d] = %d \n",i,a[i]);	
	}
}
int MAX(int i,int n, int a[100]){
	int max = a[0];
	for(i = 0; i < n; i++){
		if( a[i] > max)
		max = a[i];
	}
	printf("\n\nGia tri max : %d",max);
}
int MIN(int i,int n, int a[100]){
	int min = a[0];
	for(i = 0; i < n; i++){
		if( a[i] < min)
		min = a[i];
	}
	printf("\nGia tri min : %d",min);
}
int SUM(int i, int n, int a[100]){
	int sum = 0;
	for(i = 0; i < n; i++){
		sum += a[i];
	}
	printf("\nTong mang : %d",sum);
}
int TICH(int n, int a[100]){
	int tich = 1;
	for( int i = 0; i < n; i++){
		tich *= a[i];			//5,5,5,5
		}
	printf("\nGiai thua cua n so nhap vao : %d",tich);
}
int GIAITHUA(int n, int a[100]){
	int giaithua = 1;
	int i;
	int tong = 0;
	for(i=1; i <=n; i++){
		giaithua = giaithua*i;
		
	}
	tong += giaithua;
	printf("Tong giai thua cua cac phan tu = %d ", tong);
}
int main(){
	int i,n,a[100];
	printf("Nhap vao n : ");
	scanf("%d",&n);
	NHAPMANG(i,n,a);
	INMANG(i,n,a);
//	MAX(i,n,a);
//	MIN(i,n,a);
//	SUM(i,n,a);
	GIAITHUA(n,a);
}






