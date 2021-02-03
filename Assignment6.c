		NAME:PAWAR DURGESH KARBHARI
		FYBSC:34227
 ASS:6

1)/*accept charcter from user and check it punctuvation  alphabet ,digit or symbol */
#include<stdio.h>
#include<ctype.h>
main()
{
	char ch;
	printf("\nenter any one charcter");
	scanf("%c",&ch);
	if(isalpha(ch))
	{
		printf("\n%c is alphabet\n",ch);
		if(isupper(ch))
		{
			printf("%c is upper case \n",ch);
			printf("\nin lower=%c",(tolower(ch)));
		}
		else
		{
			printf("\n%c is in lower case\n",ch);
			printf("in upper =%c",(toupper(ch)));
		}
	}
	if(isdigit(ch))
		printf("\n it is digit");
	if(ispunct(ch))
		printf("\nit is punctuvation");
}
/*
 * enter any one charcterd
 *
 * d is alphabet
 *
 * d is in lower case
 * in upper =D[fy34227@cs47 ~]$ ./a.out
 *
 * enter any one charcter7
 *
 *  it is digit[fy34227@cs47 ~]$ 
 *
 *  */


2)/*write a menu dreiven program to perform the follwing opration i.power ii.squre root iii.fllor iv.celling v.exit */
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main()
{
	float a,b;
	int ch;
	printf("\nenter any two number a and b");
	scanf("%f %f",&a,&b);

	while(1)
	{	printf("\n1.power \n2.squre root \n 3.floor \n 4.ceiling \n 5.exit");

		printf("\nenter ur choice : ");
		scanf("%d",&ch);


		switch(ch)
		{
			case 1:
				printf("\npower = %f",pow(a,b));
				break;
			case 2:
				printf("\n squre root=%f",sqrt(a));
				break;
			case 3:
				printf("\nfloor=%f",floor(a));
				break;
			case 4:
				printf("\n ceiling=%f",ceil(a));
				break;
			case 5:
				exit(0);
				break;
			default:
				printf("\ninvalid operator");
		}
	}
}
/*[fy34227@cs47 ~]$ cc ass6.a2.c -lm
 * [fy34227@cs47 ~]$ ./a.out
 *
 * enter any two number a and b3
 * 5
 *
 * 1.power 
 * 2.squre root 
 *  3.floor 
 *   4.ceiling 
 *    5.exit
 *    enter ur choice1

		
		SET:B

1)/*accept the function numretor and denominator and dislpy output*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int x1,x2,y1,y2,m,n,ch;
	printf("\nenter n^r and d^r of first number");
	scanf("%d%d",&x1,&x2);
	printf("\nenter n^r and d^r of second number");
	scanf("%d%d",&y1,&y2);
	while(1)
	{
		printf("\n1.add \n2.sub\n3.mul\n4.exit");
		printf("\nenter ur choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				add(x1,x2,y1,y2);
				break;
			case 2:
				sub(x1,x2,y1,y2);
				break;
			case 3:
				mul(x1,x2,y1,y2);
				break;
			case 4:
				exit(0);
				break;
			default:
				("\n invalid operator");
		}
	}
}
int add(int x1,int x2,int y1,int y2)
{
	int m,n;
	m=(x1*y2)+(x2*y1);
	n=(x2*y2);
	printf("\nadd=%d/%d",m,n);
	return 0;
}
int sub(int x1,int x2,int y1,int y2)

{
	int m,n;
	m=(x1*y2)-(x2*y1);
	n=(x2*y2);
	printf("\nsub=%d/%d",m,n);
	return 0;
}
int mul(int x1,int x2,int y1,int y2)

{
	int m,n;
	m=(x1*y1);
	n=(x2*y2);
	printf("\nmul=%d/%d",m,n);
	return 0;
}
/*
enter n^r and d^r of first number2
5

enter n^r and d^r of second number6
8

1.add 
2.sub
3.mul
4.exit
enter ur choice1

add=46/40
1.add 
2.sub
3.mul
4.exit
enter ur choice2

sub=-14/40
1.add 
2.sub
3.mul
4.exit
enter ur choice
[fy34227@cs36 ~]$ vi ass6.b1.c
[fy34227@cs36 ~]$ cc ass6.b1.c -lm
[fy34227@cs36 ~]$ ./a.out

enter n^r and d^r of first number25
6

enter n^r and d^r of second number8
7

1.add 
2.sub
3.mul
4.exit
enter ur choice1

add=223/42
1.add 
2.sub
3.mul
4.exit
enter ur choice2

sub=127/42
1.add 
2.sub
3.mul
4.exit
enter ur choice3

mul=200/42
1.add 
2.sub
3.mul
4.exit
enter ur choice4
[fy34227@cs36 ~]$ 

*/


2)
/*accept the funcction and display the output*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int x1,x2,y1,y2,m,n,ch;
	printf("\nenter coordinate of x");
	scanf("%d%d",&x1,&x2);
	printf("\nenter coordinate of y");
	scanf("%d%d",&y1,&y2);
	while(1)
	{
		printf("\n1.distance between two points \n2.slope of line\n3.check they are lie in same qurdnt\n4.exit");
		printf("\nenter ur choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				dist(x1,x2,y1,y2);
				break;
			case 2:
				slope(x1,x2,y1,y2);
				break;
			case 3:
				check(x1,x2,y1,y2);
				break;
			case 4:

					exit(0);
				break;
			default:
				("\n invalid operator");
		}
	}
}
int dist(int x1,int x2,int y1,int y2)
{
	int m;
	m=(((x1-x2)*(x1*x2))-((y1-y2)*(y1-y2)));
	printf("\ndist=%d",sqrt(m));
	return 0;
}
int slope(int x1,int x2,int y1,int y2)

{
	int m;
	m=((x2-x1)/(y2-y1));
	printf("\nslope=%d",m);
	return 0;
}
int check(int x1,int x2,int y1,int y2)

{
	int m,n;
	m=x2-x1;
	n=y2-y1;
	if((m>=0 && n>=0)||(m<=0 && n<=0))
	{
		printf("\nthey are lie in same quadrant");
}
		else
			printf("\nthey are not lie in same qudrant");
		return 0;
	}
/*
enter coordinate of x8
7

enter coordinate of y5
7

1.distance between two points 
2.slope of line
3.check they are lie in same qurdnt
4.exit
enter ur choice1

dist=7
1.distance between two points 
2.slope of line
3.check they are lie in same qurdnt
4.exit
enter ur choice2

slope=0
1.distance between two points 
2.slope of line
3.check they are lie in same qurdnt
4.exit
enter ur choice3

they are not lie in same qudrant
1.distance between two points 
2.slope of line
3.check they are lie in same qurdnt
4.exit
enter ur choice4
[fy34227@cs36 ~]$ 

*/
