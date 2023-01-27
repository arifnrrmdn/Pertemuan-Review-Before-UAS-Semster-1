#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void cetak_kelipatan_10();
int x=1;
main()
{
    system("cls");
    void cetak_kelipatan_10();
    getch();
}
void cetak_kelipatan_10(){
    if(x%10==0){
        printf("%d ",x);
    }
    x++;
    if(x<=100){
        cetak_kelipatan_10();
    }
}