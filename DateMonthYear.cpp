#include <stdio.h>
#include <conio.h>
int  main(){
//khai bao bien
	int ngay, thang, nam;
	int nhuan;
//nhap du lieu
	printf("Nhap vao mot thang: ");
	scanf("%d",&thang);
	printf("Nhap vao mot nam: ");
	scanf("%d",&nam);
//kiem tra nam nhuan
	nhuan = 0;
	//Gan nhuan = 0
	if ((nam%400 == 0) || (nam%4 == 0 && nam%100 != 0))
	/*Thuat toan: theo nhu nghien cuu thi nam nhuan la nam 
	chia het cho 400 hoac chia het cho 4 va khong chia het cho 100*/
	nhuan = 1; //Gan nhan 1
	ngay = 0; //Gan ngay = 0
	
	switch (thang)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		ngay = 31; 
	break; // tu khoa ket thuc 
	case 4:
	case 6:
	case 9:
	case 11:
		ngay = 30;
	break; // tu khoa ket thuc 
	case 2:
	if (nhuan == 1) ngay = 29; //Neu la nam nhuan thi gan ngay = 29
	else ngay = 28; //Nguoc lai thi gan ngay = 28
	break;
	}
	printf("So ngay cua thang %d cua nam %d la: %d",thang, nam, ngay);
	getch();
	return 0;
	}
