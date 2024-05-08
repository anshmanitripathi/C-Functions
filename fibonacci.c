#include<stdio.h>
#include<conio.h>
int fibo(int);
void main(){

    int n, i;
    printf("Enter th evalue of n\n");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        fibo(i);
        printf("%d\t", fibo(i));
    }
getch();
}

int fibo(int i)
{
    int f;

    if(i==1)
    return(0);

    else if(i ==2)
    return(1);

    else
    f =  fibo(i-1) + fibo(i-2);
    return(f);

}