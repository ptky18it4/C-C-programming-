/*In tam giac can*/
#include<stdio.h>
#include <stdlib.h>


int main ()
{
    int n,i,j;
    printf("nhap chieu cao n tam giac:");
    scanf("%d",&n);
    printf("\n");
    for(i=1;i<=n;++i) //Uong voi moi truong hop cua cha thi chay tat ca cac truong hop cua con
    {
       for(j=1;j<=n-i;++j)
           printf(" ");/*in ra m�n h�nh kho?ng tr?ng d?n v? tr� th? n-i */
       for(j=1;j<=2*i-1;++j)
           printf("*"); /*ti?p t?c in ra m�n h�nh * d?n v? tr� 2*i-1 */
       printf("\n"); /* chuy?n xu?ng h�ng ti?p theo */ 
    }
}
