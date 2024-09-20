#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a=4;
	int b=10;
	int c=33;
	printf("Area of rectangle: %d\n",a*b);
	printf("Perimeter of rectangle: %d\n",2*(a+b));
	printf("Area of square:%d\n",a*a);
	printf("Perimeter of square: %d\n",4*a);
	printf("Area of triangle: %d\n",(a*b)*1/2);
	printf("Perimeter of triangle: %d\n",a+b+c);
	getch();
}