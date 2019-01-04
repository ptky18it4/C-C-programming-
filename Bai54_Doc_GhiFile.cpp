#include<stdio.h>
int main(){
	FILE *fp;
	char buff[255];
	fp = fopen("thongtin.txt","r");
	fgets(buff,255,(FILE*)fp);/*lay ra thong tin cua file nao do . Luu y : ham nay no chi doc du lieu tren 1 dong duy nhat*/
	printf("Thong tin trong file la : %s \n",buff);
	return 0;
}
