 	NAME:PAWAR DURGESH KARBHARI
 	FY:34227
 	ASS NO:7
  		SET:A
1:
/*write a function iseven which accept an integer parameter and return 1
  accept function and check even or odd*/
#include<stdio.h>
//int iseven(int x);
main()
{
	int c,n,a,i;
	printf("\nhow many number do you want");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		printf("\n enter any number");
		scanf("%d",&a);
		c=iseven(a);
		if(c==1)
			printf("\neven num=%d",a);
	}
}
int iseven(int x)
{
	if(x%2==0)
		return 1;
		else 
			return 0;
	
}
/*
how many number do you want5

 enter any number4

even num=4
 enter any number5

 enter any number6

even num=6
 enter any number7

 enter any number8

even num=8*/

2:
/*write a function which accept a charcter and interger n
  as parameter and display the the next charchter*/
#include<stdio.h>
	void check(int n,char ch);
main()
{
	int n;
	char ch;
	printf("\nenter any one digit and chacter");
	scanf("%d %c",&n,&ch);
	check(n,ch);
}
void check(int n,char ch)
{
	int i;
	{ 
		for(i=1;i<=n;i++)
			printf("\n%c",++ch);
	}
}
/*
enter any one digit and chacter5
s

t
u
v
w
x[fy34227@cs36 ~]$ 
*/

		SET:B

1:
/*write a function isprime which acept a integer as parmeter as return 1
  use the function and disply the first 10 prime numbers*/
#include<stdio.h>
main()
{
	int num,k,cnt=0;
	printf("\nfirst 10 primes numbers are:");
	for(num=1;cnt<10;num++)
	{
		k=isprime(num);
			if(k==1)
			{
				printf("\t%d\n",num);
				cnt++;
			}

	}
}
int isprime(int num)
{
	int j;
	for(j=2;j<num;j++)
	{
		if(num%j==0)
			break;
	}
	if(j==num)
	{
		return 1;
	}
			return 0;
		}
/*output:
first 10 primes numbers are:    2
        3
        5
        7
        11
        13
        17
        19
        23
        29
[fy34227@cs12 seta]$ 

*/

2:
/*accept characters and count the alphabet,numbers etc*/
#include<stdio.h>
main()
{
	int acnt=0,dcnt=0,scnt=0,res;
	char ch;
	printf("\nenter characters");
	while((ch=getchar())!='*')
	{
		res=check(ch);
		if(res==1)
			acnt++;
		else
			if(res==2)
				dcnt++;
			else
				if(res==3)
					scnt++;
}
printf("\nno.of alphabet=%d",acnt);
printf("\nno.of digit=%d",dcnt);
printf("\nno.of symbol=%d",scnt);
	
}
	int check(ch)
	{
		if(isalpha(ch))
			return(1);
		else
			if(isdigit(ch))
				return(2);
			else
				if(isspace(ch))
					return(0);
				else
					return(3);
	}


3:
#include<stdio.h>
int fact(int p)

{
	int f=1,i;
	if(p==1)
		return 1;
	else
		f=p*fact(p-1);
	return f;
}
int power(int a,int n)
{
	int p=1,i;
	if(n==1)
		return a;
	else
		p=a*power(a,n-1);
	return p;
}
double term(int x,int a)
{
	return((double)power(x,a)/fact(a));
}
void series(int a,int x,int n)
{
