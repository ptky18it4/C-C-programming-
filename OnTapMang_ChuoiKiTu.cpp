#include<stdio.h>
#include<string.h>
void NhapChuoi( char chuoi[]){
	printf("Nhap vao chuoi ki tu : ");
	gets(chuoi);
	
}
void InChuoi( char chuoi[]){
	printf("Chuoi vua nhap:  %s",chuoi);
}
void DaoChuoi(char chuoi[]){
	printf("\nChuoi sau khi dao nguoc : %s",strrev(chuoi));
}
void TachDong(char chuoi[]){
	for(int i=0 ; i <strlen(chuoi);i++){
		if(chuoi[i]==' '){
			printf("\n");
	}else{
	printf("%s",chuoi);
	}
}}
void DemTu(char chuoi[]){
	int dem=0;
	for(int i=0 ; i <strlen(chuoi);i++){
		if(chuoi[i]==' '){
			dem++;
	}
	}
	printf("\nSo tu trong chuoi : %d",dem+1);	
}
int main(){
	char chuoi[100];
	NhapChuoi(chuoi);
	InChuoi(chuoi);
	DaoChuoi(chuoi);
	DemTu(chuoi);
	TachDong(chuoi);

}
