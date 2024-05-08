#include<stdio.h>
#include<conio.h>

int sum(int);
void main(){
int n = 10, sumo;
sumo = sum(10);
printf("%d", sumo);
getch();
}

int sum(int a){
    int sumo=0;
    if(a==0)
    return(0);
    sumo = a + sum(a-1);
    return(sumo);
}