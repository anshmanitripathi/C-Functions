#include<stdio.h>
#include<conio.h>

void work(int , int, int*, int*,int* );


void main(){
int a= 6, b =8;
int sum, product, diff;
work(a,b, &sum, &product, &diff);

printf("sum = %d", sum);
printf("product = %d", product);
printf("difference = %d", diff);



getch();
}
void work(int a, int b, int*sum, int*product, int*diff)
{
    * sum = a+b;
    * product = a*b;
    * diff = a-b;
}
