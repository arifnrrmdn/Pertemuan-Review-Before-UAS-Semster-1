#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void cetak();
main()
{
    system("cls");
    cetak();
    getch();
}

void cetak(){
    static int y = 1;
    printf("%d ", y);
    if(y<10){
        y++; cetak();
    }
}