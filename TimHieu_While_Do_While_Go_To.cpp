/*Tim hieu vong lap While, Do_While, Go to*/
/*<Khoi_tao>
	while(<Dieu_kien_lap>)
	<Hanh_Dong>*/
#include<stdio.h>
#include<conio.h>
int main(){
	int i;
		/*	for(i = 1; i <= n; i++)
		{
			printf("%d\n",i);
		}
		*/
	i = 1; 			//_______khoi_tao
	while(i <= 10) //________dieu_kien
	{
		printf("%d\n",i);
		i++; 	//__________ Bieu_Thuc_Lap
	}
/*
	i = 1;
	while(i <= 10)
	{
		if (i % 2 == 0 )
		{
			continue // or ( break ;)
		}
		printf("%d\n".i);
		i++; // (++i )
	}
	
*/
/*______Vong___Lap__Vo___Tan______________________________________*/
/*
		while(69) //while(true) or while(x) voi x la so khac 0 (thuong chon la 1)
		{
			printf("\n Trung Ky ");
		}
*/
/*______Vong___Lap____Do_While_____________________________________________________*/
/*
	// Lam truoc --> kiem tra dieu kien sau
	(VD1: NHAP DIEM THI CUA HOCJ SINH )
	-----0-----------10------> (DK : diem nho hon 0 "HAY" be hon 10 )
	
		float Diem;
		
		do{
		
			printf("\nNhap vao diem thi:");
			scanf("%f",&Diem);	
		
			if (Diem < 0 ||Diem > 10 )
			{
		
			printf("\n Diem phai nam trong doan tu 0 --> 10. Xin kiem tra lai !
		
			}
		
		}while(Diem < 0 || Diem > 10 );
	
/*Neu nhu ban khong quen viet dieu kien sai thi ban cu viet dieu kien dung no ra*/
	
	// }while (!(Diem >= 110 && Diem <= 10)); //chu y : dau cham thang (!) <==> (not)
*/
}
