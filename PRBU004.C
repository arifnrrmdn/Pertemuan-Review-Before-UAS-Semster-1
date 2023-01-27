#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void tukar(int *b);
main()
{
    system("cls");
    int a = 10;
    printf("Nilai awal a = %d\n",a);
    tukar(&a); a++;
    printf("Nilai a sekarang %d",a++);
    getch();
}

void tukar(int *b){
    int c = 5;
    *b=c+2;
    printf("nilai b = %d\n",*b);
}

