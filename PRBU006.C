#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void cetak_kelipatan_sepuluh();
int x=10;
main()
{
    system("cls");
    cetak_kelipatan_sepuluh();
    getch();
}

void cetak_kelipatan_sepuluh(){
    printf("%d ",x);
    if(x<100){
        x+=10;
        cetak_kelipatan_sepuluh();
    }
}