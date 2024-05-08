#include<stdio.h>
#include<conio.h>
void shift(int* , int* , int*);
void main(){
    int x=5,y=8,z=10;
    printf("x=5 , y=8, z=10");
    shift(&x,&y,&z);
    printf(" x = %d, y=  %d, z=  %d",  x, y, z);
getch();
}

void shift(int* a, int* b, int* c){

    int B= *b, C =*c;


    *b=*(a);
    *c= B;
    *a= C;
}