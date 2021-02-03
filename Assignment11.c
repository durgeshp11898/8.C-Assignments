	NAME:DURGESH K.PAWAR
	FY34227
		ex:11

1:
#include<stdio.h>
void newtime(int *hr,int *mi,int *se,int s);
main()
{
	int hr,mi,se,s;
	printf("\nenter the hr,min,se and extra second");
	scanf("%d%d%d%d",&hr,&mi,&se,&s);

	newtime(&hr,&mi,&se,s);
	printf("new hours=%d\nnew minutes=%d\nnew seconds=%d",hr,mi,se);
}
void newtime(int *hr,int *mi,int *se,int s)
{
	*se=*se+s;

	*mi=*mi+(*se/60);
	*se=*se%60;

	*hr=*hr+(*mi/60);
	*mi=*mi%60;
	*hr=*hr%60;
if(*hr>24)
*hr=*hr-24;

}
/*
output:
enter the hr,min,se and extra second 1
59
59
59
new hours=2
new minutes=0
new seconds=58
*/

2:
#include<stdio.h>
void rev(int[],int);
main()
{
	int a[15],n,i;
	printf("\nenter the size of array n");
	scanf("%d",&n);
	printf("\nenter the array element");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	rev(a,n);
}
void rev(int a[],int n)
{
	int *ptr,i;
	ptr=&a[0];
	for(i=n-1;i>=0;i--)
	{
		printf("%d  ",*(ptr+i));
	}
}
/*
enter the size of array n5

enter the array element9
8
7
6
5
5  6  7  8  9  
*/
