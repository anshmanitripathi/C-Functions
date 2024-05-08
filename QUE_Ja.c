#include<stdio.h>
#include<conio.h>
int sod(int);
void main(){

int num, sum;
printf("Enter the number\n");
scanf("%d", &num);
sum = sod(num);
printf("sum = %d", sum);
getch();
}

int sod(int num)
{
    int r, sum=0;
    if(num==0)
    return(0);
    r = num%10;
    sum = r + sod(num/10);
    return(sum);
}