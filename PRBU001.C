#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void cetak();
int x;
int main()
{
    system("cls");
    cetak();    
    getch();
}

void cetak(){
    x++;
    printf("%d ",x);
    if(x<10){
        cetak();
    }
}