#include<stdio.h>
#include<conio.h>
void main()
{
	int p,r,n;
	float SI;
	clrscr();
	printf("enter the price mony :");
	scanf("%d",&p);
	printf("rnter the rate of intrast :");
	scanf("%d",&r);
	printf("enter the time in year :");
	scanf("%d",&n);
	SI=p*r*n/100;
	printf("your final intrast is :%f",SI);
	getch();

}