	NAME:PAWAR DURGESH KARBHARI
	FYBSC:34227
	ASS:4

1			SET:A

1)#include<stdio.h>
main()
{
int b,n;
printf("\nenter value of n to disply even numbers");
scanf("%d",&n);
b=2;
while(b<=n)
{
printf("\n%d",b);
b=b+2;
}
}
/* output:

enter value of n to disply even numbers10

2
4
6
8
10[fy34227@cs36 seta]$ ./a.out

enter value of n to disply even numbers11

2
4
6
8

*/


2)/*calculate the sum of all integers between x and y*/
#include<stdio.h>
main()
{
int x,y,s=0;
printf("\nenter value of x\nenter value of y");
scanf("%d%d",&x,&y);
while(x<=y)
{
s=s+x;
x++;
}
printf("\nsum of number between %d",s);
}
/*enter value of x
enter value of y1
5

sum of number between 15[fy34227@cs36 seta]$ 

*/

3)/*calculate m into n*/
#include<stdio.h>
main()
{
int m,n,i,p=1;
printf("\nenter value of m\nenter value of n");
scanf("%d%d",&m,&n);
for(i=1;i<=n;i++)
{
p=p*m;
}
printf("\nthe value of m of n=%d",p);
}
/*
enter value of m
enter value of n3
6

the value of m of n=729[fy34227@cs35 seta]$ 
*/


4)#include<stdio.h>
main()
{
char a;
int b,i,c;
printf("\nenter first character");
scanf("%c",&a);
printf("\nenter second character");
scanf("%d",&b);
c=a;
for(i=c;i<b+c;i++)
//printf("i:%d\t",i);
printf("\nthe next character are..%c",i);
}


5)/*calculate number is prime or not prime*/
#include<stdio.h>
main()
{
int i,n;
printf("\nenter value of n");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
break;
}
if(n==i)
printf("\nthe given number is prime");
else
printf("\nthe given number is not prime");
}
/*output:

enter value of n5

the given number is prime[fy34227@cs36 seta]$ 

*/


6)/*count no of digit & calculate sum of digit*/
#include<stdio.h>
main()
{
int n,d,count,sum;
count=0;
sum=0;
printf("\nenter number");
scanf("%d",&n);
/*if(n>0)
{
d=n%10;
count++;
sum=sum+d;
n=n%10;
}
else
{
printf("Invalid number");
}
printf("\nnumber of digit=%d",count);
printf("\nsum of digit=%d",sum);
}*/
while(n>0)
{

d=n%10;
count++;
sum=sum+d;
n=n/10;
}

printf("\nnumber of digit=%d",count);
printf("\nsum of digit=%d",sum);
}
/*output:

enter number1234

number of digit=4
sum of digit=10[fy34227@cs12 seta]$ vi sum4.c 

*/


7)/*reverse no.*/
#include<stdio.h>

main()
{
int n,d,rev;
rev=0;
printf("\nEnter a number:");
scanf("%d",&n);

while(n>0)
{
d=n%10;
rev=rev*10+d;
n=n/10;
}
printf("rev=%d",rev);
}
/*output:
Enter a number:456
rev=654[fy34227@cs36 seta]$ vi a1.c
*/


			SET:B

1)/*find n numbers of fibonascci number*/
#include<stdio.h>
main()
{
int fib1=0,fib2=1,fib3,num,count=0;
printf("\nenter how many fibnoascci number you want");
scanf("%d",&num);
printf("\nfirst %dfibonascci number are",num);
printf("%d\n",fib1);
printf("%d\n",fib2);
count=2;
while(count<num)
{
fib3=fib1+fib2;
count++;
printf("%d\n",fib3);
fib1=fib2;
fib2=fib3;
}
return 0;
}

2:/*x+3x+5x+.....+nx find sum of series*/
#include<stdio.h>
main()
{
	int n,x,i,a=1,s=0,j=1;
	printf("enter haw many nuber u want\nenter value x ");
	scanf("%d%d",&n,&x);
	for(i=1;i<=n;i++)
		{
a=j*x;
s=s+a;
j=j+2;
	
	}
			printf("\nsum=%d",s);
		
			/*
			   printf("\nhow many time u want add of n number");
			   scanf("%d",&n);
			   printf("\nenter value of x");
			   scanf("%d",&x);
			   a
			   if(n%2!=0)
			   {
			   for(i=1;i<=n;i++)

			   sum=n*x;
			   printf("\nsum=%d",sum);

			   }
			   if(n%2==0)
			   printf("\nplese correct value");
			   }*/

}


3)/*calculate series 1/x+2/x2+3/x3+.....+n/xn*/
#include<stdio.h>
main()
{
	int x,n,s,f,i,j;
	float t,sum=0.0;
	printf("\nenter the term what you want");
	scanf("%d",&n);
	printf("\nenter value of x");
	scanf("%d",&x);
	printf("\nthe sum of the series:");
	for(i=1;i<=n;i++)
	{
		printf("%d/(x)^%d+",i,i);
		s=1;
		for(j=1;j<=i;j++)
			s*=(x);
		t=(float)i/s;
		//t=i/s;
		sum+=t;
	}
	printf("\n sun of series:%f",sum);
}


4)/*count the numbers and alphabets by EOF*/
#include<stdio.h>
main()
{
char ch;
int cnt=0;

while((ch=getchar())!=EOF)
{

cnt++;

}
printf("\nno.of char:%d\n",cnt);
}
/*[fy34227@cs36 ~]$ cc ass4b4.c 
[fy34227@cs36 ~]$ ./a.out
asas
xz

no.of char:8
[fy34227@cs36 ~]$ ./a.out
1
2
3
4

no.of char:8
[fy34227@cs36 ~]$ vi ass4b4.c
[fy34227@cs36 ~]$ 

*/



5)/*write a program numbers shows disply each digit in words*/
#include<stdio.h>
main()
{

	int n,d,rev;
	rev=0;
	printf("\nEnter a number:");
	scanf("%d",&n);

	while(n>0)
	{
		d=n%10;
		rev=rev*10+d;
		n=n/10;
	}
do
{
d=rev%10;
switch(d)
{
	case 1:
		printf("ONE-");
		break;
	case 2:
		printf("TWO-");
		break;
	case 3:
		printf("THREE-");
		break;
	case 4:
		printf("FOUR-");
		break;
	case 5:
		printf("FIVE-");
		break;
	case 6:
		printf("SIX-");
		break;
	case 7:
		printf("SEVEN-");
		break;
	case 8:
		printf("EIGHT-");
		break;
	case 9:
		printf("NINE-");
		break;
	case 0:
		printf("ZERO-");
		break;
	default:
		printf("\ninvalid operator");
}
rev=rev/10;

}
while(rev!=0);
}
/*
Enter a number:6702
SIX-SEVEN-ZERO-TWO-[fy34227@cs12 setb]$ 

*/

		set c:
set c::

1:
/*accept character and count the number of characters*/
#include<stdio.h>
main()
{
	char ch;
	int digit=0,cnt=0,flag=0,line=0,count=0;
	printf("enter characters\n");
	scanf("%d",&ch);
	while((ch=getchar())!='*')
	{
		if(ch=='a'&& ch=='z' || ch=='A'&& ch=='Z')
		{
			count++;
			cnt++;
		}
		else
			if(ch>='0' && ch<='9')
			{
				cnt++;
				digit++;
			}
		if(ch=='-'||ch=='.'||ch==','||ch=='\t'||ch==';'||ch==' ')
		{		cnt++;
			flag++;
		}
		if(ch=='\n')
		{
			cnt++;
			flag++;
			line++;
		}
	}
	printf("\nno. of charcters=%d\nno. of digit=%d\nno. of words=%d\nno. of lines=%d",cnt,digit,flag,line);
}


2:
/*check number is palindrome or not*/
#include<stdio.h>
main()
{
	int n,rev=0,temp;
	printf("\nenter a number");
	scanf("%d",&n);
	temp=n;
while(temp !=0)

{
	rev=rev*10;
	rev=rev+temp%10;
	temp=temp/10;
}
if(n==rev)
	printf("\n the given number is palindrome number");
	else
	printf("\n the given number is not  palindrome number");
	}

3:
/*aeeivel and departure of train */
#include<stdio.h>
main()
{
	int i=1,hrs=4,mins=30,dist=40;
	printf("station\t arrivel\tdeparture\t distances\n");
	while(hrs<=12)
	{
		printf("%d\t %02d:%02d \t\t",i,hrs,mins);
		mins=mins+10;
		hrs=hrs+mins/60;
		mins=mins%60;
		printf("%02d:%02d \t\t %2d \n",hrs,mins,dist);
		dist=dist+40;
		mins=mins+30;
		hrs=hrs+mins/60;
		i++;
	}
	printf("total distances=%d\n",dist);
}
/*station  arrivel        departure        distances
1        04:30          04:40            40 
2        05:70          06:20            80 
3        06:50          07:00            120 
4        07:30          07:40            160 
5        08:70          09:20            200 
6        09:50          10:00            240 
7        10:30          10:40            280 
8        11:70          12:20            320 
9        12:50          13:00            360 
total distances=400
*/

4:
/*disply the no.of turns taken bye a and b*/
#include<stdio.h>
main()
{
	int a,b,min=300,total,nta,ntb,ta,tb,cnta=0,cntb=0;
	while(min!=0)
	{
		min=min-25;
		cnta++;
		min=min-75;
		cntb++;
	}
	ta=(50*cnta);
	tb=(150*cntb);
	total=ta+tb;
	printf("\nno. of turns of a=%d",cnta);
	printf("\nno. of turns of b=%d",cntb);
	printf("\nammount of a=%d",a);
	printf("\nammount of b=%d",b);
	printf("\ntotal amount=%d",total);
}

