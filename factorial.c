#include<stdio.h>
#include<conio.h>
int fact(int);
void main(){
int n, f;
printf("Enter the value of n\n");
scanf("%d",&n);
f= fact(n);
printf("Factorial is %d", f);
getch();
}
 int fact(int a){
    int f=1;
    if(a==0)
    return(1);
    else
    f = a*fact(a-1);
    return(f);
 }

