#include<stdio.h>
#include<string.h>
int Dem(char s[100],char c){
	printf("Nhap vao chuoi : ");
	gets(s);
	printf("Nhap vao ki tu can dem : ");
	c = getchar(); //chu y
	
	int i, dem = 0;
	for(i = 0; i < strlen(s); i ++){
		if(s[i]==c)
		{dem ++;
		}
	}
	
	printf("Ki tu %c da xuat hien %d lan trong chuoi.",c,dem); 
	getchar();
}


int main(){
	char s[100];
	char c;
	Dem(s,c);


	
	
	
	
	
	
	
/*	char s [100];
	printf("Nhap vao chuoi : ");
	gets(s);
	char c;
	printf("Nhap vao ki tu can dem : ");
	c = getchar();
	int i,dem=0;
	for(i = 0; i < strlen(s); i++){
		if(s[i] == c)
		{
		 dem++;
		}
		
	}
	printf("Ky tu %c xuat hien %d lan \n",c,dem);
	return 0;
	*/
}
