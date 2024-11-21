#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,add,sub,div,mul,rem;
	clrscr();
	a=12;
	b=6;
	printf("Enter a value os a:%d",a);
	printf("Enter a number of b:%d",b);
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	rem=a%b;
	printf("\n addition is :%d",add);
	printf("\n subtraction is :%d",sub);
	printf("\n multipication is :%d",mul);
	printf("\n division is :%d",div);
	printf("\n remainder is :%d",rem);
	getch();



}