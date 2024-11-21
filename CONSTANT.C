#include<stdio.h>
#include<conio.h>
#define PI 3.14
void main()
{
	int a;
	float area;
	/*constant float PI=3.14;*/
	clrscr();
	printf("enter a:");
	scanf("%d",&a);
	area=PI*a*a;
	printf("area is: %f",area);
	getch();
}