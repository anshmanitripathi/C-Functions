#include<stdio.h>
#include<conio.h>
void prime(int);
void main(){
    int num;
    printf("Enter the number\n");
scanf("%d", &num);
prime(num);
getch();
}

void prime(int num)
{
    int i;
    for(i=2; i<num; i++)
    {
        if(num%i==0)
        printf("%d\t", i);
    }
}