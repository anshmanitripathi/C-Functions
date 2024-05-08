#include<stdio.h>
#include<conio.h>
float work(float , int );
void main(){
float a, p;
int b;
printf("Ente the value of the numbers \n");
scanf("%f%d",&a,&b);
p = work(a,b);
printf("product is %f", p);
getch();
}

float work(float a, int b)
{
    float p ;
    p = a* b;
    return(p);
}