	NAME:PAWAR DURGESH KARBHARI
	FY34227
		ex:12

1:
#include<stdio.h>
main()
{
	int n,*p,i,max,min;
	printf("\nhow many numbers do you want in array");
	scanf("%d",&n);
	p=(int *) calloc(n,sizeof(int));
	printf("\nenter the elemnt for array");
	for(i=0;i<n;i++)
		scanf("%d",(p+i));
	min=*p;
	max=*p;
	for(i=0;i<n;i++)
	{
		if(min>*(p+i))
			min=*(p+i);
		else
			if(max<*(p+i))
				max=*(p+i);
	}
	printf("value of min=%d\nvalue of max=%d",min,max);
}
/*
  how many numbers do you want in array5
 
  enter the elemnt for array1
  2
  3
  4
  5
  value of min=1
  value of max=5*/

2:

#include<stdio.h>
#include<stdlib.h>
main()
{
	int n,*p,i,sum=0,j=0,*q;
	float avg;
	printf("\nhow many number do you want");
	scanf("%d",&n);
	p=(int *) calloc(n,sizeof(int));
	q=(int *) calloc(n,sizeof(int));
	printf("\nenter element for array");
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i));
	}
	for(i=0;i<n;i++)
	{
		if(*(p+i)!=0)
		{
			*(q+j)=*(p+i);
			j++;
		}
	}
	printf("\nnon zeros element are= ");
	printf("  %d\n",j);
	for(i=0;i<j;i++)
	{
		printf("%d\n",*(q+i));
		sum=sum+*(q+i);
	}
	avg=(float)sum/j;
	printf("\nsum=  %d\navarage=  %f",sum,avg);
}
/*non zeros element are=   2
1
2

sum=  3
avarage=  1.500000
*/
