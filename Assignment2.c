NAME:PAWAR DURGESH KARBHARI
FYBSC 34227

		ASS 2:

	SET:A
1)/*find even or odd*/
#include<stdio.h>
main()
{
	int a;
	printf("enter value of a");
	scanf("%d",&a);
	if(a%2==0)
		printf("number is even");
	else
		printf("number is odd");
}

/*output:
enter value of a9
number is odd
enter value of a8
number is even */
/*************************************************/

2)
/*find midle no*/
#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter value a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	if((a>=b)&&(a<=c))
		printf("the 'a' is between 'b' to 'c'");
	else
		printf("the number is not between b to c");
}

/*enter value a,b,c20
10
30
the 'a' is between 'b' to 'c'[fy34227@cs37 seta]$ ./a.out
enter value a,b,c20
30
40
the number is not between b to c[fy34227@cs37 seta]$*/ 


/***********************************************************/

3)/*display num. is 0 to 9*/
#include<stdio.h>
main()
{
	int a;
	printf("enter number");
	scanf("%d",&a);
	if((a<=9)&&(a>=0))
		printf("the number is digit");
	else
		printf("the number is not digit");

}

/*enter number5
the number is digit[fy34227@cs37 seta]$ ./a.out
enter number22
the number is not digit[fy34227@cs37 seta]$ 
*/
/**********************************************/

4)
/*cheke number is divisible by 5 or 7 */
#include<stdio.h>
main()
{
	int a;
	printf("\nenter value of a");
	scanf("%d",&a);
	if((a%5==0)&&(a%7==0))
		printf("\nthe number is divisible by 5 and 7");
	else
		printf("the number is not divisible by 5 and 7");

}
/*
enter value of a35

the number is divisible by 5 and 7[fy34227@cs37 seta]$ ./a.out

enter value of a44
the number is not divisible by 5 and 7[fy34227@cs37 seta]$ 
*/
/******************************************************************/

5)
  /* basic salary*/
#include<stdio.h>
main()
{
	int a,b,c;
	printf("\nenter basic salary");
	scanf("%d",&a);

	if(a<150000)
	{
		printf("\nyou have 0percent tax",a);
							}

		else	if((a>150000)&&(a<300000))
		{		b=(a/20);
			printf("\nyou have 20 percent tax=%d",b);
		}
	
	else
{
	
		if(a>300000)

			c=(a/30);

			printf("\n you have 30 percent tax=%d",c);
	
}	

}
/*[fy34227@cs37 seta]$ ./a.out

enter basic salary149000

you have 0percent tax[fy34227@cs37 seta]$ ./a.out

enter basic salary190000

you have 20 percent tax=9500[fy34227@cs37 seta]$ ./a.out

enter basic salary340000

 you have 30 percent tax=11333[fy34227@cs37 seta]$ 
*/
/*******************************************************/

6)*cheke character is vowel or consonant*/
#include<stdio.h>
main()
{
	char ch;
	printf("enter value ch\n");
	scanf("%c",&ch);
	if(ch=='a' ||ch=='A' || ch=='e' || ch=='E' || ch=='i'||ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
		printf("the character is vowels");
	else
		printf("the character is a consonant");
}

/*enter value ch
a
the character is vowels[fy34227@cs37 seta]$ ./a.out
enter value ch
v
the character is a consonant[fy34227@cs37 seta]$ 
*/
/**************************************************************/

7)*leap year*/
#include<stdio.h>
main()
{
	int a;
	printf("enter leap year");
	scanf("%d",&a);
	if(a%4==0 && a%100 !=0 || a%400==0)
		printf("\n the year is leap year");
	else
		printf("\n the year is not leap year");
}
/*enter leap year2016

 the year is leap year[fy34227@cs37 seta]$ ./a.out
enter leap year2014

 the year is not leap year[fy34227@cs37 seta]$ 
*/
/******************************************************************/
	
	SET:B

1)/*to find lower case andupper case*/
#include<stdio.h>
main()
{
char c;
printf("enter any character");
scanf("%c",&c);
if((c>=97 )&& (c<=122))
printf("the character is lower case");
else
{
if((c>=65) && (c<=90))
printf("the char is uppercase");
}
}

/*enter any characterr
the character is lower case[fy34227@cs37 setb]$ ./a.out
enter any characterR
the char is uppercase[fy34227@cs37 setb]$ ./a.out
enter any character5
[fy34227@cs37 setb]$ 
*/

/***************************************************************/

2)
/*find quadernt*/
#include<stdio.h>
main()
{
int x,y;
printf("\n enter point x");
scanf("%d",&x);
printf("\n enter point y");
scanf("%d",&y);
if((x>0)&&(y>0))
printf("\nthe point lies in first quadernt");
if((x<0)&&(y>0))
printf("\nthe point lies in second quadernt");
if((x<0)&&(y<0))
printf("\nthe point lies in third quadernt");
if((x>0)&&(y<0))
printf("\nthe point lies in fourth quadernt");
if((x==0)&&(y==0))
printf("\nthe point lies in origine");
}

/* enter point x3

 enter point y5

the point lies in first quadernt[fy34227@cs37 setb]$ ./a.out

 enter point x-3

 enter point y5

the point lies in second quadernt[fy34227@cs37 setb]$ ./a.out

 enter point x3

 enter point y-5

the point lies in fourth quadernt[fy34227@cs37 setb]$ ./a.out

 enter point x-3

 enter point y-5

the point lies in third quadernt[fy34227@cs37 setb]$ 
*/
/
***********************************************************/

3)/*quadratic root*/
#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c,x,y,s,r1,r2;
	printf("\nenter value of a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	s=((b*b)-(4*a*c));
	if(s>0)
	{
		y=sqrt(s);
		r1=(-b+y)/(2*a);
		printf("\nroot of r1=%d",r1);
		r2=(-b-y)/(2*a);
		printf("\nroot of r2=%d",r2);
	}
	else
		printf("nroot are not defined");
}
/*enter value of a,b,c2
4
6
nroot are not defined[fy34227@cs37 setb]$ 
*/
/*******************************************************************/

4)/*profit or loss*/
#include<stdio.h>
main()
{
int cp,sp,profit,loss;
printf("\n enter value of cp and sp");
scanf("%d%d",&cp,&sp);
if(cp>sp)
{
profit=cp-sp;
printf("\nprofit=%d",profit);
}
loss=sp-cp;
printf("\nloss=%d",loss);
}
/* enter value of cp and sp340
33

profit=307
loss=-307[fy34227@cs37 setb]$ ./a.out

 enter value of cp and sp340
440

loss=100[fy34227@cs37 setb]$ 

*/
/*****************************************************************/
5)
/*calculate avarage*/
#include<stdio.h>
main()
{
int m1,m2,m3,sum,avg;
printf("enter the marks of three subjects");
scanf("%d%d%d",&m1,&m2,&m3);
sum=m1+m2+m3;
printf("\n the sum of marks=%d",sum);
avg=sum/3;
printf("\n the avarage of marks=%d",avg);
if(avg>80)
printf("\nyou got distntion");
else
  if((avg>70)&&(avg<80))
printf("\nyou got first class");

else

  if((avg>55)&&(avg<70))

printf("\n you got second class");
else

   if((avg>40)&&(avg<55))
printf("\n congrts you are passed in examinatin");
else

  if(avg<40)
printf("\n you are failed in examination");

 

}
/*enter the marks of three subjects70
7
0
/***********************************************************************************/
		
			SET:C
1)/*compute discount*/
#include<stdio.h>
main()
{
	int a,b,c,amt;
	printf("\nenter rate of freaze");
	scanf("%d",&a);
	printf("\nenter rate of freaze");
	scanf("%d",&b);
	printf("\nenter rate of washing machine");
	scanf("%d",&c);
	amt=a+b+c;
	printf("\n amount=%d",amt);
	if(amt>20000)
		printf("\nyou have a 20 percent discount");
	if((amt<20000)&&(amt>15000))
	{
		printf("\nyou have 15 percent");
	}
	if((amt<15000)&&(amt>10000))
	{
		printf("\n you have 8 percent discount");
	}
	if(amt<10000)
		printf("\nyou have no discount");
}

/*
enter rate of freaze4577

enter rate of freaze5675

enter rate of washing machine3456

 amount=13708
 you have 8 percent discount[fy34227@cs37 setc]$ ./a.out

enter rate of freaze5000

enter rate of freaze4567

enter rate of washing machine9876

 amount=19443
you have 15 percent[fy34227@cs37 setc]$ 
*/
/*******************************************/

2)/* fine of library*/
#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("\nenter no.of day");
	scanf("%d",&a);
	if(a<5)
		printf("\nyou have rs 5 charges");
	if((a<10)&&(a>6))
	{
		printf("\n you have rs 10 charges");
	}
	if(a>10)
	{ 
		c=10;
		b=(a-10)*5;
		d=b+c;
		printf("\n you have rs %d charges",d);
	}
}
/*enter no.of day4

you have rs 5 charges[fy34227@cs37 setc]$ ./a.out

enter no.of day7

 you have rs 10 charges[fy34227@cs37 setc]$ ./a.out

enter no.of day14

 you have rs 30 charges[fy34227@cs37 setc]$ 

*/
