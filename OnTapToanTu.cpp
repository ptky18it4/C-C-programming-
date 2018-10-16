//On tap toan tu 
#include<stdio.h>
#include<conio.h>
#include<math.h>
main(){
	int a,b;
//	int d,e;
	printf("Nhap Vao Gia Tri Cua a :");
	scanf("%d",&a);
	printf("Nhap Vao Gia Tri Cua b :");
	scanf("%d",&b);
/*	printf("Nhap Vao Gia Tri Cua c :");
//	scanf("%d",&c);
//	printf("Nhap Vao Gia Tri Cua d :");
//	scanf("%d",&d);
//	printf("Nhap Vao Gia Tri Cua e :");
	scanf("%d",&e);
*/
	int tong=a+b;
	int hieu=a-b;
	int tich=a*b;
	float thuong= (float)a/b; 
	int ChiaDu = a % b ;
	/* a/(float)b; || a*1.0/b; || a/1.0*b;
	 NOTE : khong duoc ep kieu nhu thu nay (float)/(a/b);
	*ep kieu ((float)a) cho a de ket qua la so thuc (0.667);
	* chia het: Neu a/b ma a & b deu la so nguyen du cho minh co lu tru no vao bien thuc di chang nua;
	*chia lay phan du : chia lay phan du chi danh cho so nguyen (int ) , khong danh cho so thuc (float)*/
	/* Neu chi can 1 trong 2 so a hay b co kieu thuc thi ket qua chia se ra so thuc */
	printf("%d + %d = %d \n",a,b,tong);/* Moi cai %d,%d la dai dien cho mot con so tuong ung,hieu , tich , thuong,...*/
	printf("%d - %d = %d \n",a,b,hieu); // moi cai %d tuong ung la dac ta cho a va b
	printf("%d * %d = %d \n",a,b,tich);
	printf("%d / %d = %.3f \n",a,b,thuong);
	printf("%d / %d = %d \n",a,b,ChiaDu);
	
	//......................................................................
		
		}
