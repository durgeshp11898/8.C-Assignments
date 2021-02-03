		NAME:PAWAR DURGESH KARBHARI
		FYBSC:34227
		ASS 5:

			SET:A

1)/*display prime numbers betwwen */
#include<stdio.h>
main()
{
	int a,b,i,j;
	printf("\nenter first value of a");
	scanf("%d",&a);
	printf("\nenter second value of b");
	scanf("%d",&b);
	for(i=a;i<=b;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				break;
		}
		if(i==j)
			printf("\nthe prime numbers %d to %d =%d",a,b,i);
	}
}
/*
enter first value of a34

enter second value of b78

the prime numbers 34 to 78 =37
the prime numbers 34 to 78 =41
the prime numbers 34 to 78 =43
the prime numbers 34 to 78 =47
the prime numbers 34 to 78 =53
the prime numbers 34 to 78 =59
the prime numbers 34 to 78 =61
the prime numbers 34 to 78 =67
the prime numbers 34 to 78 =71
the prime numbers 34 to 78 =73[fy34227@cs35 ~]$ 

*/


2)/*table*/
#include<stdio.h>
main()
{
	int a,k,i,j,n;
	printf("\nenter a number a\nenter a number b");
	scanf("%d%d",&a,&n);
	printf("\nenter a multiple");
	scanf("%d",&k);
	for(i=2;i<=n;i++)
	{
		for(j=a;j<=k;j++)
		{
			printf("%d*%d=%d\n",i,j,i*j);
			
		}
printf("\n");
		printf("\t");
	}
}



3)/*trangle*/
#include<stdio.h>
main()
{
	int i,j,n;
	char ch='A';
	printf("enter any number");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("\t%c",ch);
			ch=ch+1;
		}
		printf("\n");
	}
}


	SET:B

1)/*disply amstrong numbers */
#include<stdio.h>
main()
{
	int n,d,t,sum=0,nt;
	printf("\nenter numbers ");
	scanf("%d",&n);
	printf("\n%d to 500 numbers are=",n);
	for(nt=1;nt<=n;nt++)
	{
		t=nt;
		sum=0;
		do
		{
			d=t%10;
			sum=(d*d*d)+sum;
			t=t/10;
		}
		while(t!=0);
		if(sum==nt)
			printf("\t%d",nt);
	}
}
/*enter numbers 500

500 to 500 numbers are= 1       153     370     371     407[fy34227@cs35 ~]$ 

*/

2)/*accept n numbers and disply the number having maximum sm of digits*/
#include<stdio.h>
main()
{
	int max=0,n,a,i,k=0,sum=0,d;
	printf("\nhow many number do you want");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		printf("\n enter any number");
		scanf("%d",&a);
sum=0;
k=a;
		while(a>0)
		{ //      printf("\na=%d",a);

			d=a%10;
			sum=sum+d;
			a=a/10;
			if(max<sum)
			{
				max=sum;
			}
		}
	}
	printf("\nthe max number =%d having sum of digit=%d",k,sum);
}

3)/*display all perfect numbers*/
#include<stdio.h>
main()
{
	int n,d,t,nt,sum=0;
	printf("\nenter any number");
	scanf("%d",&n);
	printf("\nthe perfect numbers are:%d ramnge",n);
	for(nt=1;nt<=n;nt++)
	{
		sum=0;
		for(t=1;t<nt;t++)
			if(nt%t==0)
			{
			//	printf("t=%d",t);
				sum+=t;
			}
		if(sum==nt)
			printf("\t%d",nt);
	}
}
/*
enter any number500

the perfect numbers are:500 ramnge      6       28      496[fy34227@cs35 ~]$ 

*/

/*calculate the avarage sales of each branch*/
#include<stdio.h>
main()
{
	int i,j,x;
	float avg,avg1,sum1=0,sum;
	for(i=1;i<=4;i++)
	{
		sum=0;
		if(i==1)
			printf("\nenter sales details for north side");
		if(i==2)
			printf("\nenter sales details for south side");
		if(i==3)
			printf("\nenter sales details for east side");
		if(i==4)
			printf("\nenter sales details for west side");
		for(j=1;j<=4;j++)
		{
			printf("\nenter sales of %d quarter:",j);
			scanf("%d",&x);
			sum=sum+x;
		}
		avg=sum/4;
		if(i==1)
			printf("\navarage of north zone=%0.2f",avg);
		if(i==2)
			printf("\navarage of south zone=%0.2f",avg);
		if(i==3)
			printf("\navarage of east zone=%0.2f",avg);
		if(i==4)
			printf("\navarage of west zone=%0.2f",avg);
		sum1=sum1+avg;
	}
	avg1=sum1/4;
	printf("\n\tavarage of all zone=%0.2f",avg1);
}



2:
/*write a polynomial variable a0+a1x+a2x+....*/
#include<stdio.h>
#include<math.h>
main()
{
	int n,x,b,a,i,sum;
	printf("\nenter no. of term");
	scanf("%d",&n);
	printf("\nenter value of x:");
	scanf("%d",&x);
	printf("\nenter consonant:");
	scanf("%d",&b);
	sum=b;

	for(i=1;i<=n;i++)
	{
		printf("\nenter coeeficent");
		scanf("%d",&a);
		sum=sum+(a*pow(x,i));
	}
	printf("\nvalue of polynomial=%d",sum);
	printf("\n");
}

3:
#include<stdio.h>
main()
{
	int i,j,t,x,sum=0,flag=1;
	float avg;
	printf("\ttempreture rangs");
	printf("\nspring(15-25)");
	printf("\nsummmer(25-40)");
	printf("\nmonson(20-35)");
	printf("\nwinter(5-20)");
	for(i=1;i<=4;i++)
	{
			
		if(i==1)
			printf("\nenter tempreture for springs");
		if(i==2)
			printf("\nenter tempreture for summer");
		if(i==3)
			printf("\nenter tempreture for monsoon");
		if(i==4)
			printf("\nenter tempreture for winter");
		for(j=1;j<=12;j++)
		{
			scanf("%d",&t);
			if(i==1)
			{
				if(t>=15 && t<=25)
					sum=sum+t;
			}

			if(i==2)
			{
				if(t>=25 && t<=40)
					sum=sum+t;

			}
			if(i==3)
			{
				if(t>=20 && t<=35)
					sum=sum+t;
			}
			if(i==4)
			{
				if(t>=5 && t<=20)
					sum=sum+t;

			}
		}
		avg=sum/12;
		if(flag==1)
			printf("avg=%f",avg);
		else
if(flag=0)
			printf("invalid tempreture");

	}
}
