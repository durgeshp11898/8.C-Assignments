	NAME:PAWAR DURGESH KARBHARI
	FY:34227
	ASS:8
		SET:A
1:
/*write a c function to caclculte sum of digit of number*/
#include<stdio.h>
int sum(int);
main()
{
	int n,c;
	printf("\nenter any number");
	scanf("%d",&n);
	c=sum(n);
	printf("\nsum of digit=%d",c);
}
int sum(int n)
{
	if(n<=9)
		return(n);
	else
		return(n%10+sum(n/10));
}
/*enter any number345

  sum of digit=12[fy34227@cs33 ~]$ 

 */

2:
/* write a recurive function calculte the gcd of two numbers*/
#include<stdio.h>
int gcd(int,int);
main()
{
	int a,b,c;
	printf("\nenter any two numbers");
	scanf("%d%d",&a,&b);
	c=gcd(a,b);
	printf("\ngcd=%d",c);
}
int gcd(int a,int b)
{
	if(b==0)
		return(a);
	else
		return(gcd(b,a%b));
}
/*enter any two numbers32
  40

  gcd=8[fy34227@cs33 ~]$ 
  [fy34227@cs33 ~]$ 
 */

3:/*write a recursive function to calculte x^y.*/
#include<stdio.h>
int pow1(int,int);
main()
{
int x,y,c;
printf("\nenter any two numbers");
scanf("%d%d",&x,&y);
c=pow1(x,y);
printf("/npower of x^y=%d",c);
}
int pow1(int x,int y)
{
if(y==0)
return(1);
else
return(x*pow1(x,y-1));
}
/*
enter any two numbers3
6
/npower of x^y=729[fy34227@cs33 ~]$ 

*/

		SET:B
1:/*write a recursive function to calculate nth fibonassi no:*/
#include<stdio.h>
	int fib(int a);
main()
{
	int a,i;
	printf("\nhow many fibonacci no.do u want");
	scanf("%d",&a);
for(i=0;i<=a;i++)
		printf("%d\n",fib(i));
}
int fib(int a)
{
	if(a==0|| a==1 || a==2)
		return 1;
	else
		return(fib(a-1)+fib(a-2));
}
/*how many fibonacci no.do u want10
1
1
2
3
5
8
13
21
34
55
*/

2:
/*write a recursive function to calculate sum of dgit of numbers*/
#include<stdio.h>
int sum(int n);
main()
{
	int no,x,z,d;
	printf("\nenter no.");
	scanf("%d",&no);
	z=sum(no);
	if(z>9)
	{
		d=sum(z);
	}
		printf("sum of numbers =%d\n",d);
}
int sum(int n)
{
	if(n<=0)
		return n;
	else 
		return((n%10)+sum(n/10));
}
/*enter no.45
  sum of numbers =9
  [fy34227@cs33 ~]$ ./a.out 

  enter no.34567
  sum of numbers =25
  [fy34227@cs33 ~]$ 

 */

3:
/*write a recursive function to print digit of a numbers in reverse order.*/
#include<stdio.h>
main()
{
	int n;
	printf("\nenter number");
	scanf("%d",&n);
	rev(n);
	printf("\n\n");
}
rev(int x)
{
	if(x>0)
	{
		printf("%d\t",x%10);
		x=x/10;
		rev(x);
	}
}
