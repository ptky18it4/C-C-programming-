/*Tim hieu ve vong lap for-- Thay Nguyen Viet Nam Son
 (https://youtu.be/Xjm70GTvfBM?list=PLq9VOPepajsCbKVpZMw6eiwrJrRkZkklI)
 */
#include<stdio.h>
#include<conio.h>
int main (){
	int i ;
/*VD1*/

	for (i = 1; i <= 10; i++) /*Vong lap for voi so duong (+)*/
	
	/*for (int i = 1; i <= 10; ++i) */
	
	/* O bieu thuc dieu kien thu 3 thi , ta co the thay (i++) bang (++i ) van OK
	* Neu ai do hoi ban, (i++) va (++i) cai nao nhanh hon thi ban tra loi nhu sau :
	* Co the noi rang: ++i no chay nhanh hon i++ 
	* i++ la dang cap cua nhung dua moi hoc lap trinh, con ++i la danh cho nhung thang "DANG CAP"
	*/
	{
		printf("Trung Ky Dep Trai \n");
	}
	/*_______________________________________________________________________*/

/*VD2*/

	for (i = -1; i <= 0; i--) /*Vong lap for voi so am (-)*/
	/*Doi voi vong lap nay thi no se chay den khi nao may ban het memory or
	* het kieu du lieu int ,(double,..)
	*/
	{
		printf("Trung Ky/n");
	}
	/*____________________________________________________________*/
	for (i = 9; i >= 0; i--) /*Ban co the thay i-- = --i de bai toan chay nhanh hon */
	{
		printf("Trung Ky/n");
	}
/*QUY TAC LAP TRINH */
	/*
	* Khi ma mot bien trong may tinh, neu ma ta so sanh 1 bien voi so 0 
	* thi no se chay nhanh hon voi nhung so khac
	*/
/*
* Trong C , ngta khai bao int i; o ngoai vong lap for--> khi chay chuong trinh thi cho du la C hay C++ no van chay Ok
* Doi voi C++ , no cho pep ta khai bao for(int i=1;...)--> tuy nhien, khi lay chuong trinh nay chay trong C thi se bao loi Error ngay
* Trong TH : neu ben ngoai da co int i; va ben trong for( int i = 1;...) thi chuong trinh se bao loi Error ngay
*/

/*SE CO NHUNG CAU LEN LAP KHONG DU 3 THANH PHAN DIEU KIEN*/

/* 1:- Thieu khoi tao.
		* Vd:
			i = 1
			for( ; i <= 10 ; i++ ) // chu y : bieu thuc dieu kien 1 khong co nhung ta van phai de dau (;) 
			{
				printf("Trung Ky dep trai \n";
			}
*/
/* 2:- Thieu dieu kien lap thi co dieu kien dung
 (A)
 			for (i = 1; ; i++)
 		{ 
 			if (i > 10)
	 	 {
	 		break; // Dieu kien dung
	 	 }
	 		printf("\n Trung Ky dep trai");
		}
	// Chuong trinh nay chay 10 lan
 (B)
 			for (i = 1; ; i++)
 		{ 
	 		printf("\n Trung Ky dep trai");
	 
 			if (i > 10)
	 	  {
	 		break;
	 	  }
 		}
 	
 	// Chuong trinh nay chay 11 lan
*/
/* 3:-Thieu buoc lap*/

/* (C)
 			for (i = 1; i <= 10; )
	 		{
	 			printf("%d \n",i );
	 			i++ ; // Dieu kien lap nam o day ne ! hehe!
	 		}
	 
*/
/* Thieu ca 3 bieu thuc for -VONG LAP KHON NAN*/
/* (D)
			i = 1;
			for( ; ; )
		{
			if (i > 10 )
			{ 
				break;
			}
			printf("%d \n",i);
			i++;
		}
*/
/*___________Vong__Lap___For__Long__Nhau____________________________________________*/
/*
			for (int i = 1; i <= 3; i++); //cha
		{
				for (int j = 1; j <= 6; j++) //con
			{
				printf("\n i = %d & j = %d ", i, j);
			}
		}
		/*chu y : cu moi truong hop cua "cha" thi tuong ung voi "tat ca" cac truong hop cua con
*/
/*_________________lenh___break_______________________________*/
/*
				for (int i = 1; i <= 10; i++)
			{ 
				if( i > 5)
				{ 
				break; //KET THUC VONG LAP
				}
				printf("%d\n",i);
			}
		printf("\n Ngoai vong lap : i = %d",i); //KQ = 6

NOTE : vong lap break chi ket thuc khoi vong lap gan no nhat
*/
/*_________________lenh___CONTINUE_______________________________*/
/*
				for (int i = 1; i <= 10; i++)
			{ 
				if( i % 2 == 0)
				{ 
				continue; //Dung lai vong lap nay va quay lai vong lap tiep theo
				}
				printf("%d\n",i);
			}
		//chi in ra cac so le
*/


}
