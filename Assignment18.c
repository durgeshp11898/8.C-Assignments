	MAME:DURGESH K.PAWAR
		FY34227
			ASS:18
1:
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 main(int c,char *v[])
{
	int n1,n2,n3,max=0,min=0;
	float avg=0;
	if(c!=4)
	{
		printf("\ninvalid aruguments");
	}
	n1=atoi(v[1]);
	n2=atoi(v[2]);
	n3=atoi(v[3]);
	if(n1>n2 && n1>n3)
	{
		max=n1;
	}
	if(n2>n1 && n2>n3)
	{
		max=n2;
	}
	if(n3>n1 && n3>n2)
		max=n3;

	printf("\nmax=%d",max);
	avg=(n1+n2+n3)/3;
	printf("avg=%f",avg);

	if(n1<n2 && n1<n3)
	
		min=n1;
	
	if(n2<n1 && n2<n3)
	
		min=n2;
	
	if(n3<n2 && n3<n2)
		min=n3;
	printf("\nmin values is %d",min);
}
/* output:
 ./a.out 23 34 55

max=55avg=37.000000
min values is 23
*/

2:
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(int argc,char *argv[])
{
int i;
char aa[20],x,y;
strcpy(aa,argv[1]);
puts(aa);
x=argv[2][0];
y=argv[3][0];
for(i=0;aa[i]!='\0';i++)
{
if(aa[i]==x)
aa[i]=y;
}
puts(aa);
}

/*output:
[fy34227@cs32 ass18]$ ./a.out modern d w
modern
mowern
*/

3:
#include<stdio.h>
#define max(a,b) if(a>b)
main()
{
	int n,a[10],i,m;
	printf("\nenter value of n");
	scanf("%d",&n);
	printf("\nenter value of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	m=a[0];
	for(i=0;i<n;i++)
	{
		max(a[i],m);
		m=a[i];
	}
	printf("\nmaximum number is=%d",m);
}
