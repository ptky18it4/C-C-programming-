/*Lam Quen Voi HAM*/
#include<stdio.h>
#include<conio.h>
int c = 5 ;
void Loichao()//ham1
{
printf("\n Hello World"); 
// Thu tuc: hay con goi la ham void : Loichao
}

void Xuattong(int a,int b)//ham2
{
	int Tong = a + b;
	printf("\n %d +%d = %d ",a,b,Tong);
	// Thu tuc: hay con goi la ham void : xuat tong
}

int TinhTong(int a, int b) //ham3
{ 
return a + b; 
/*Ham tra ve, 
Chu y: Doi voi ham tra ve thi khi thao tac trong ham main ta can tao 1 bien "x" nao do de nhan ket qua o tren */
}

int main (){
	//printf("\n Hello World");
	Loichao();
	Loichao();
	Loichao();
	//Xuattong(6,9);
	int a,b;
	printf("Nhap vao gia tri a = ");
	scanf("%d",&a);
	printf("Nhap vao gia tri b = ");
	scanf("%d",&b);
	//Xuattong(a,b); // ham2
	int tong = TinhTong(a,b); //ham3
	tong= TinhTong(tong,c);
	printf("\nTong = %d",tong);

	
	
}
