#include<stdio.h>
#include<conio.h>
int power(int , int);
void main(){
    int a, b, c;
    printf("Enter the value of a and b\n");
    scanf("%d%d", &a, &b);
    c = power(a,b);
    printf("answer is %d", c);

getch();
}
 int power(int a, int b){
    int i , p=1;
    if(b==1)
    return(a);
    for(i=1; i<=b;i++)
    {
        p = p*a;
    }
    return(p);
 }
