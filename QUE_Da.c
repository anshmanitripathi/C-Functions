#include<stdio.h>
#include<conio.h>
int fact(int);
void main(){
int num, f;
printf("Enter a number\n");
scanf("%d", &num);
f =fact(num);
printf("Factorial ogf the number is %d", f);
getch();
}

int fact(int a){
    int f;
    if(a==0 || a==1)
    return(1);
    f = a * fact(a-1);
    return(f);

}