#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void cetak(int y);
main()
{
    system("cls");
    cetak(1);
    getch();
}

void cetak(int y){
    printf("%d ", y);
    if(y<10){
        y++;
        cetak(y);
    }
}