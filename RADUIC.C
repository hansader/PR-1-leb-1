#include<stdio.h>
#include<conio.h>
#define PI 3.14
void main()
{
	int r;
	float reduic;
	clrscr();
	printf("r is:");
	scanf("%d",&r);
	reduic=2*PI*r*r;
	printf("your reduic of circle is:%.2f",reduic);
	getch();
}