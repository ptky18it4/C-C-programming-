#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	printf("Nhap vao chuoi : ");
	gets(s);
	int i, dem =0;
	for(i=0; i < strlen(s); i++){
		if(s[i]== 'u' || s[i] == 'e' ||s[i]== 'o' || s[i] == 'a' || s[i]== 'i' 
		|| s[i] =='U'|| s[i]== 'E' || s[i] =='O'||s[i]== 'A' || s[i] == 'I')
		dem++;
	}
	printf("trong bang co %d phu am :",dem);
}
