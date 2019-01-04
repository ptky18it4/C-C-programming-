#include<stdio.h>
int main(){
	FILE *fp;
	char buff[50];
	fp = fopen("BaiTapC.doc","r");
	fgets(buff,50,(FILE*)fp);
	printf("Thong tin trong file la : %s \n",buff);
	fclose(fp);
	return 0;
}
