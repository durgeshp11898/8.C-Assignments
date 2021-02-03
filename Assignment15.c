	NAME:DURGESH K.PAWAR
	FY34227
		ex:15

1:
#include<stdio.h>
 main()
{
int n1,n2,res;
printf("\nenter two numbers");
scanf("%d%d",&n1,&n2);
printf("n1=");
display(n1);
printf("\nn2=");
display(n2);
res=n1&n2;
printf("\n the AND is");
display(res);
res=n1|n2;
printf("\nthe OR is");
display(res);
res=n1^n2;
printf("\nthe XOR is");
display(res);
res=~n1;
printf("\nthe compliment of n1 is");
display(res);
res=~n2;
printf("\nthe compliment of n1 is");
display(res);
}
void display(unsigned int n)
{
unsigned int mask=32768;
while(mask>0)
{
if((n&mask)==0)
printf("0");
else
printf("1");
mask=mask>>1;
}
}

2:

#include<stdio.h>
main()
{
int n1,n2,temp;
printf("\nentrer number 1\nenter number 2\n");
scanf("%d%d",&n1,&n2);
printf("before swapping");
printf("n1=%d\nn2=%d",n1,n2);
n1=n1^n2;
n2=n1^n2;
n1=n1^n2;
printf("\n after swaping");
printf("n1=%d   n2=%d",n1,n2);
}

3:
#include<stdio.h>
void display(unsigned int);
void main()
{
	int x,y;
	printf("\nenter first number");
	scanf("%d",&x);
	printf("\nenter second number");
	scanf("%d",&y);
	printf("n1= ");
	display(x);
	printf("n2= ");
	display(y);
	x=x<<y;
	printf("\nx is =");
	display(x);
	x=x>>y;
	printf("x is");
	display(x);
}
void display(unsigned int n)
{
	unsigned int mask=32768;
	while(mask>0)
	{
		if((n&mask)==0)
		{
			printf("0");
		}
		else
			printf("1");
		mask=mask>>1;
	}
}
