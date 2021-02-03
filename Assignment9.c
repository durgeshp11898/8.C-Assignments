	NAME:PAWAR DURGESH KARBHARI
	ROLL NO:34227
	ASS:9
			SET:A

1:
/*write a program to accept n numbers and display the array in the revrse order*/
#include<stdio.h>
void accept(int[10],int);
void display(int[10],int);
main()
{
	int a[100],n;
	printf("\nhow many numbers do you want");
	scanf("%d",&n);
	accept(a,n);
	display(a,n);
}
void accept(int a[10],int n)
{
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
}
void display(int a[10],int n)
{
	int i;
	printf("\nreverse orderd given below:\n");
	for(i=n-1;i>=0;i--)
		printf("%d  ",a[i]);
}
/*how many numbers do you want5
 * 1
 * 2
 * 3
 * 4
 * 5
 *
 * reverse orderd given below:
 * 5  4  3  2  1
 * */

2:
/*write a function of liniar search*/
#include<stdio.h>
int search(int[],int,int);
main()
{
	int a[100],n,b,e,i,c;
	printf("\nenter the size of array");
	scanf("%d",&n);
	printf("\nenter the element in array");

	for(i=0;i<n;i++)
	{

		scanf("%d",&a[i]);
	}
	{
		printf("\nenter the element to search");
		scanf("%d",&e);
		c=search(a,n,e);
		if(c==-1)
			printf("\nkey not found");
		else
			printf("\nposition=%d",c+1);
	}
}
int search(int a[],int n,int e)
{
	int i,pos=-1;
	for(i=0;i<n;i++)
	{
		if(a[i]==e)
		{
			pos=i;
			break;
		}
	}
	return(pos);
}

3:
/*write a function which accept an intger arry and intger as parameter and count the occurance of nuber in array*/
#include<stdio.h>
accept(int a[20],int n)
{
	int i;
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
}
int search(int a[20],int n,int s)
{
	int i,cnt=0;
	for(i=1;i<=n;i++)
		if(a[i]==s)
			cnt++;
	return(cnt);
}
main()
{
	int a[20],n,s,d;
	printf("\nenter no.of element");
	scanf("%d",&n);
	printf("\nenter elements:");
	accept(a,n);
	printf("\nenter numers:");
	scanf("%d",&s);
	d=search(a,n,s);
	printf("\n%d occurs %d times",s,d);
}

4:
#include<stdio.h>
main()
{
	int a[20],i,j,no,n,cnt=0;
	printf("\nenter no of element");
	scanf("%d",&n);
	printf("\nenter array element:");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&no);
		for(j=2;j<no;j++)
		{
			if(no%j==0)
				break;
		}
		if(no==j)
		{
			cnt++;
			a[cnt]=no;
		}
	}
	if(cnt>=0)
	{
		printf("\nthe numbers are prime");
		for(j=1;j<=cnt;j++)
			printf("%d\t",a[j]);
	}
	else
		printf("\nno any prime");
}
