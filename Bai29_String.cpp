#include<stdio.h>
#include<string.h>
/* Gioi thieu ve ham xu li chuoi
	String
	strlen : tinh do dai chuoi
	strcpy : copy chuoi
	strcat(s,s1) : noi chuoi
	strrev : dao nguoc chuoi
	strstr(s,s1) : tim ra chuoi s1 trong chuoi s, duoc ung dung de tim ten sinh vien hay tim ten sach */
	
int HamStrlen(char A[100]){
	
	int k = strlen(A); //cách 1
	printf("Chieu dai chuoi : %d ",k);
	//cách 2
	printf("\nChieu dai chuoi :  %d" , strlen(A));
	
}
//--
int HamStrrev(char A[100]){
	printf("\n Chuoi dao nguoc la : %s " , strrev(A));
}
//--

int HamStrstr(char A[100]){
	char s[100],s1[100];
	printf("\n Ban hay nhap s : ");
	gets(s);
	printf("\n Ban hay nhap s1 :");
	gets(s1);
	if(strstr(s,s1) == NULL){
		printf("\n %s khong co trong %s",s1,s);}
	else{
		printf("\n %s co trong %s ",s1,s);
	}
	
}
//-- copy tu s qua s1 , 
int HamStrcpy(char A[100]){
	char s[100],s1[100];
	printf("Nhap chuoi s : ");
	gets(s);
	printf("Noi dung cua s1 sau khi copy tu s la : %s ",strcpy(s1,s));
}
//--
int HamStrcat(char A[100]){
	char s[100],s1[100];
	printf("Nhap vao chuoi s : \n");
	gets(s);
	printf("Nhap vao chuoi s1 : \n");
	gets(s1);
	printf("Chuoi s sau khi noi la : %s \n ",strcat(s,s1));
	return 0;
}
int main(){
	/*Ham nhan gia tri*/
	int k;
	/* strlen : tinh do dai chuoi */
	char A[100];
	printf("Nhap vao chuoi :");
	gets(A);
	HamStrlen(A);
	HamStrrev(A);
	HamStrstr(A);
	HamStrcpy(A);
	HamStrcat(A);

}
