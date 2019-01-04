#include<stdio.h>
#include<string.h>
int main(){
	char s[100];					//khai bao chuoi s[so_phan_tu_cua_chuoi]
	printf("Nhap vao chuoi: ");		//thong bao cho nguoi dung nhap vao chuoi
	gets(s);						//nhan chuoi vua nhap
	int i,j;						//toi buoc so sach(sap xep) thi can phai khoi tao 2 bien i,j de chay vong lap
	for(i = 0; i< strlen(s); i++){	// i< strlen(s) i be hon chieu dai chuoi s
		for(j = i+1; j < strlen(s); j ++){
			if(s[i] > s[j]) /*Sap xep theo abc thi --> thi dung dau ' > ' va cba thi nguoc lai*/
			{
			char c = s[i];
			s[i] = s[j];
			s[j] = c;
			}
		}
	}
	printf("Chuoi cua ban sau khi sap xep la : %s",s);
	return 0;
}
