#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    system("cls");
    for(int i=1;i<=100;i++){
        if(i%10==0){
            printf("%d ", i);
        }
    }
    getch();
}