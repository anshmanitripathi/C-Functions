#include<stdio.h>
#include<conio.h>
void leap(int);
void main(){
    int year;
    printf("Enter the year\n");
scanf("%d", &year);
leap(year);
getch();
}

void leap(int num){
    if(num%400==0 && num%4==0)
    printf("Leap year\n");
    else 
    printf("Not aleap year\n");
}