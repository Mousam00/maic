/*******************************************
Statement - Print Hello World
Programmer - Vineet Choudhary
Written For - http://developerinsider.in
********************************************/

#include <stdio.h>
#include <conio.h>

void main()
{       int a,b,c,choice;
	clrscr();
	printf("enter the two numbers: ");
	scanf("%d%d",&a,&b);
	printf("select any one from the following\n1.addition\n2.substraction\n3.multiplication\n4.division\n5.reminder\n");

	printf("enter ur choice: ");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
	c=a+b;
	printf("the value of c is %d\n",c);
	break;

	case 2:
	c=a-b;
	printf("the value of c is %d\n",c);
	break;

	case 3:
	c=a*b;
	printf("the value of c is %d\n",c);
	break;
	case 4:
	c=a/b;
	printf("the value of c is %d\n",c);
	break;

	case 5:
	c=a%b;
	printf("the  value  of c is %d\n",c);
	break;

	case 6:
	exit(0);
	break;

	default:
	printf("no value");

	}

	getch();
}