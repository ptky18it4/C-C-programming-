#include<stdio.h>
/*fputs("du lieu muon ghi",ten file);*/
int main(){
	FILE *fp;   /*Tao 1 bien co kieu la FILE va co bien o dinh dang la con tro */
	fp = fopen("thongtin.txt","w"); /*tuy thuoc vao duoi file ma file duoc tao ra : .doc = word || .txt == text document || .exe == excel ||.ppt== power point*/
	/*dinh dang "r" = read = doc
	dinh dang "w" = write = ghi
	dinh dang "a" = ghi tiep theo file co san
	"r+" = doc + ghi
	"w+" = doc+ ghi : xoa(lam trang) noi dung co san va ghi lai tu dau 
	"a+" = mo file -> doc + ghi tiep theo file co san*/
	fputs("Ho va ten : Pham Trung Ky \n",fp);
	fputs("Ngay sinh : 14/02/2000\n",fp);
	fputs("Dia chi : Hoa Hiep Trung, Dong Hoa, Phu Yen",fp);
	fclose(fp); 
	return 0;
}
