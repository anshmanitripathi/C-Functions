#include<stdio.h>
#include<conio.h>
void address(int*);
void main(){
int a=3;
address(&a);
printf("%u", &a);
getch();
}

void address(int* a)
{   
    printf("%u\n", a);
}