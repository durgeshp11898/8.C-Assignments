#include<stdio.h>
main()
{
	float r,a,c,v;
	int op;

	printf("\nenter radius");
	scanf("%f",&r);
	do{
		printf("\n1.area of circle\n2.circumfurance of circle\n3.volume of sphere");
		printf("\nenter ur choice:");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				a=2*3.142*r*r;
				printf("\narea of circle=%f",a);
				break;
			case 2:
				c=2*3.142*r;
				printf("\ncircumurance of circle=%f",c);
				break;
			case 3:
				v=4/3*3.142*r*r*r;
				printf("\nvolume of spare=%f",v);
				break;
			default:
				printf("\ninvalid choice");
		}
	}while(op!=4);
	printf("\ninvalid choice");
}
/*enter radius5

1.area of circle
2.circumfurance of circle
3.volume of sphere
enter ur choice:1

area of circle=157.100006
1.area of circle
2.circumfurance of circle
3.volume of sphere
enter ur choice:2

circumurance of circle=31.420000
1.area of circle
2.circumfurance of circle
3.volume of sphere
enter ur choice:3

volume of spare=392.750000
1.area of circle
2.circumfurance of circle
3.volume of sphere
enter ur choice:

*/
NAME:PAWAR DURGESH KARBHARI
FY34227
ASS:3

/********************************/
1)#include<stdio.h>
main()
{
int n;
printf("\nenter any digit n");
scanf("%d",&n);
switch(n)
{
case 0:
printf("\nthe digit is zero");
break;
case 1:
printf("\nthe digit is one");
break;
case 2:
printf("\nthe digit is two");
break;
case 3:
printf("\nthe digit is three");
break;
case 4:
printf("\nthe digit is four");
break;
case 5:
printf("\nthe digit is five");
break;
case 6:
printf("\nthe digit is six");
break;
case 7:
printf("\nthe digit is seven");
break;
case 8:
printf("\nthe digit is eight");
break;
case 9:
printf("\nthe digit is nine");
break;
default:
printf("\nenter correct number");
}
}
/*
enter any digit n6

the digit is six[fy34227@cs17 seta]$ ./a.out

enter any digit n8

the digit is eight[fy34227@cs17 seta]$ ./a.out

enter any digit n77

enter correct number[fy34227@cs17 seta]$ 

*/
/
********************************************/

2)#include<stdio.h>
main()
{
int a,b,op;
printf("\nenter value of a and b");
scanf("%d%d",&a,&b);
printf("\nenter your choice\n1.addition(+)\n2.subtraction(-)\n3.multiplication(*)\n4.division(/)");
scanf("%d",&op);
switch(op)
{
case 1:
printf("\naddition=%d+%d=%d",a,b,a+b);
break;
case 2:
printf("\nsubtraction=%d-%d=%d",a,b,a-b);
break;
case 3:
printf("\nmultiplication=%d*%d=%d",a,b,a*b);
break;
case 4:
printf("\ndivision=%d/%d=%d",a,b,a/b);
break;
default:
printf("\ninavalid choice");
}
}
/*enter value of a and b3
5

enter your choice
1.addition(+)
2.subtraction(-)
3.multiplication(*)
4.division(/)1

addition=3+5=8[fy34227@cs17 seta]$ ./a.out

enter value of a and b3
4

enter your choice
1.addition(+)
2.subtraction(-)
3.multiplication(*)
4.division(/)2

subtraction=3-4=-1[fy34227@cs17 seta]$ ./a.out

enter value of a and b3
4

enter your choice
1.addition(+)
2.subtraction(-)
3.multiplication(*)
4.division(/)3

multiplication=3*4=12[fy34227@cs17 seta]$ ./a.out

enter value of a and b3
4

enter your choice
1.addition(+)
2.subtraction(-)
3.multiplication(*)
4.division(/)4

division=3/4=0[fy34227@cs17 seta]$ 
*/
/*************************************/
3)/*find folowing operations*/
#include<stdio.h>
main()
{
	int x,y,temp,op,m;
float a,b;
	printf("\nprintf value x and y");
	scanf("%d%d",&x,&y);
	do
	{
		printf("\n1.equality\n2.less than\n3.quoitient and reminder\n4.range\n5.swap\nenter ur choice:");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				if(x==y)
					printf("\n value of x is equl to value of x");
				else
					printf("\nvalue of x is not equl to value of y");
				break;
			case 2:
				if(x<y)
					printf("\n value of x is less than value of y");
				else
					printf("\nvalue of x is not less than value of y");
				break;
			case 3:
				a=x/y;
				printf("\n quotient=%f",a);
				b=x%y;
				printf("\n reminder=%f",b);
				break;
			case 4:
				printf("\nenter number:");
				scanf("%d",&m);
				if((x<=m) && (y>=m))
{
					printf("\nnumber is lies in range");
}
				else
				printf("\n%d or %d number is not lies in range=%d",x,y,m);
				break;
			case 5:
				temp=x;
				x=y;
				y=temp;
				printf("\nvalue of x=%d",x);
				printf("\nvalue of y=%d",y);
				break;
			default:
				printf("\ninvalid choice");
		}
	}while(op!=6);
}
/*
printf value x and y4
7

1.equality
2.less than
3.quoitient and reminder
4.range
5.swap
enter ur choice:1

value of x is not equl to value of y
1.equality
2.less than
3.quoitient and reminder
4.range
5.swap
enter ur choice:2

 value of x is less than value of y
1.equality
2.less than
3.quoitient and reminder
4.range
5.swap
enter ur choice:3

 quotient=0.000000
 reminder=4.000000
1.equality
2.less than
3.quoitient and reminder
4.range
5.swap
enter ur choice:4

enter number:5

number is lies in range
1.equality
2.less than
3.quoitient and reminder
4.range
5.swap
enter ur choice:

*/
/**************************************/
			SET:B

1)#include<stdio.h>
main()
{
	int s,r,l,b,op;
	float base,height,t;
do{
	printf("\nenter your choice\n1.area of square\n2.area of rectangle\n3.area of trangle");
	scanf("%d",&op);
	switch(op)
	{
		case 1:
			printf("\nenter value of lenght");
			scanf("%d",&l);
			s=l*l;
			printf("\narea of square=%d",s);
			break;
		case 2:
			printf("\nenter value of lenght and bredth");
			scanf("%d%d",&l,&b);
			r=l*b;
			printf("\narea of reactngle=%d",r);
			break;
		case 3:
			printf("\nenter base and height");
			scanf("%f%f",&height,&base);
			t=0.5*height*base;
			printf("\narea ofn trangle=%f",t);
			break;
		default:
			printf("\ninvalid choice");
	}
}
while(op!=4);
}
/*
enter your choice
1.area of square
2.area of rectangle
3.area of trangle1

enter value of lenght4

area of square=16
enter your choice
1.area of square
2.area of rectangle
3.area of trangle2

enter value of lenght and bredth4
7

area of reactngle=28
enter your choice
1.area of square
2.area of rectangle
3.area of trangle3

enter base and height4
8

area ofn trangle=16.000000
enter your choice
1.area of square
2.area of rectangle
3.area of trangle
*/
./********************************************/
1)#include<stdio.h>
main()
{
	float r,a,c,v;
	int op;

	printf("\nenter radius");
	scanf("%f",&r);
	do{
		printf("\n1.area of circle\n2.circumfurance of circle\n3.volume of sphere");
		printf("\nenter ur choice:");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				a=2*3.142*r*r;
				printf("\narea of circle=%f",a);
				break;
			case 2:
				c=2*3.142*r;
				printf("\ncircumurance of circle=%f",c);
				break;
			case 3:
				v=4/3*3.142*r*r*r;
				printf("\nvolume of spare=%f",v);
				break;
			default:
				printf("\ninvalid choice");
		}
	}while(op!=4);
	printf("\ninvalid choice");
}
/*enter radius5

1.area of circle
2.circumfurance of circle
3.volume of sphere
enter ur choice:1

area of circle=157.100006
1.area of circle
2.circumfurance of circle
3.volume of sphere
enter ur choice:2

circumurance of circle=31.420000
1.area of circle
2.circumfurance of circle
3.volume of sphere
enter ur choice:3

volume of spare=392.750000
1.area of circle
2.circumfurance of circle
3.volume of sphere
enter ur choice:

*/
		/*****************/
			
			SET:C
1)#include<stdio.h>
main()
{
	int d,m,y;
	printf("\nenter date\nenter month\nenter year");
	scanf("%d%d%d",&d,&m,&y);

	if((y>0)&&(m>=1&&m<=12)&&(d<=31&&d>=1))
	{
		switch(m)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				if(d<=31)
					printf("\ndate is valid");
				else
					printf("\n date is invalid");
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				if(d<=30)
					printf("ndate is valid");
				else
					printf("\n date is invalid");
				break;
			case 2:if(y%4==0 && y%100 !=0 || y%400==0)
			       {
				       if(d<=29)
					       printf("\ndate is valid");
				       else
					       printf("\ndatr is invalid");

			       }  
			       else
				       if(d<=28)
					       printf("\ndate is valid");
		}
	}
	else
		printf("\ndate is invalid");
}
/*
r31
1
2016

date is valid[fy34227@cs17 setc]$ ./a.out

enter date
enter month
enter year29
2
2016

date is valid[fy34227@cs17 setc]$ ./a.out

enter date
enter month
enter year29
2
2015
[fy34227@cs17 setc]$ ./a.out

*/

2)
#include<stdio.h>
main()
{
	int d,m,y;
	printf("\nenter date\nenter month\nenter year");
	scanf("%d%d%d",&d,&m,&y);

	if((y>0)&&(m>=1&&m<=12)&&(d<=31&&d>=1))
	{
		switch(m)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				if(d<=31)
					printf("\ndate is valid");
				else
					printf("\n date is invalid");
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				if(d<=30)
					printf("ndate is valid");
				else
					printf("\n date is invalid");
				break;
			case 2:if(y%4==0 && y%100 !=0 || y%400==0)
			       {
				       if(d<=29)
					       printf("\ndate is valid");
				       else
					       printf("\ndatr is invalid");

			       }  
			       else
				       if(d<=28)
					       printf("\ndate is valid");
		}
	}
	else
		printf("\ndate is invalid");
}
/*
r31
1
2016

date is valid[fy34227@cs17 setc]$ ./a.out

enter date
enter month
enter year29
2
2016

date is valid[fy34227@cs17 setc]$ ./a.out

enter date
enter month
enter year29
2
2015
[fy34227@cs17 setc]$ ./a.out

*/

