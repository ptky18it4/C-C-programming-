#include<stdio.h>
#include<conio.h>
int NhapMang(int a[],int n){
	for(int i=0; i < n; i++){
		printf("Nhap vao a[%d]: ",i);
		scanf("%d",&a[i]);
	}
}
float TinhTBC(int a[], int n){
	int s=0; 
	float tbc=0;
	for(int i=0; i <n; i ++){
		s+=a[i];
	}
	tbc=1.0*s/n;
	printf("Trung Binh Cong cua chuoi vua nhap : %f",(float)tbc);
}
int TimDuongMin(int a[], int n){
	for(int i=0; i <n ; i++){
		if(a[i]<a[0]){
			int t = a[0];
			a[0]=a[i];
			a[i]=t;
		}
	}
	printf("\nSo duong nho nhat la: %d",a[0]);
	
}
int main(){
	int n,a[n];
	printf("Nhap vao so phan tu cua mang : ");
	scanf("%d",&n);
	NhapMang(a,n);
	getchar();
	TinhTBC(a,n);
	getchar();
	TimDuongMin(a,n);
	getchar();
}
