#include<stdio.h>
#include<conio.h>
#include<math.h>
double TinhTienDien (double tieuthu)
{ 	double tien =0.0;
	if(tieuthu <50) tien = 1000 * tieuthu ;
	else if ((tieuthu >= 50 ) && (tieuthu <100)) tien = 1500 *tieuthu ;
	else tien = 2000*tieuthu ;
	return tien ;

}
int main(){
	double tt;
	printf("Nhap vao tt \n ");
	scanf("%lf", &tt);
	printf(" tien dien la %lf \n ", TinhTienDien(tt));
}
