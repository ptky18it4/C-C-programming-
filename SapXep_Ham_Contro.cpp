#include<stdio.h>
#include<stdlib.h>
int SAPXEP(int n,int *p){
	int i,j,tam;
	p=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		printf("Nhap vao a[%d] : ",i);
		scanf("%d",(p+i));
		}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(*(p+i) > *(p+j)){
			tam = *(p+i);
			*(p+i) = *(p+j);
			*(p+j) = tam;
			}
		
		}
	}
	printf("SAP XEP RANG DAN :");
	for(i=0;i<n;i++){
		printf("%d ",*(p+i));
	}
	}

int main(){
	int n;
	int *p;
	printf("Nhap vao so luong phan tu : ");
	scanf("%d",&n);
	SAPXEP(n,p);
	return 0;
}
