#include<stdio.h>
#include<conio.h>
void main()
{
	int r;
	float area;
	const float PI=3.14;
	clrscr();
	printf("enter the value os r:");
	scanf("%d",&r);
	area=PI*r*r;
	printf("your area is :%.2f",area);
	getch();
}