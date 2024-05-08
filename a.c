#include<stdio.h>
#include<conio.h>

float areasquare(float);
float areacircle(float);
float arearectangle(float, float);

void main(){
    float area, side, radius, l , b;

printf("Enter the side of the square\n");
scanf("%f",&side);
area = areasquare(side);
printf("area = %f", area);

printf("Enter the legth and breadth of rectangle \n");
scanf("%f%f",&l,&b);
area = arearectangel(l , b);
printf("area = %f", area);

printf("Enter the radius of the circle\n");
scanf("%f",&radius);
area = areacircle(radius);
printf("area = %f", area);
getch();
}

float areasquare(float a){
    int area;
    area = a*a;
    return(area);
}
/*
float arearectangle(float a, float b){
    int area;
    area = a*b;
    return(area);
}
*/
float areacircle(float a){
    int area;
    area = 3.14 * a * a;
    return(area);
}