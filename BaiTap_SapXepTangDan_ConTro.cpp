//#include<stdio.h>
//#include<stdlib.h>
int main(){
	int *p; //tao con tro p
	int n;
	printf("Ban hay nhap so luong phan tu cho mang : ");
	scanf("%d",&n);
	p = (int*)malloc(n*sizeof(int)); /*cap phat bo nho dong*/
	int i,j;
	for (i = 0; i< n ; i++)	{
		scanf("%d",(p + i));
	}
	for ( i = 0; i < n ; i++){
		for ( j = i+ 1; j<n;j++){
			if(*(p + i)> *(p + j)){
				int temp = *(p+j);
				*(p+i) = *(p+j);
				*(p+j) = temp;
			}
		}
	}
	printf("Mang cua ban sau khi sap xep la : \n");
	for(i = 0;i< n; i++){
		printf("%d\t",*(p+i));
	}
	return 0; 	
}


