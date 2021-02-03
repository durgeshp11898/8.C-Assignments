	NAME:PAWAR DURGESH KARBHARI
	FY34227

		E:14

1:
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int length(char*);
int rev(char*);
void up(char*);
void low(char*);
main()
{
	char a[10];
	int c,n,i,ptr,len,lenn;
	while(1)
	{
		printf("\nenter ur choice");
		printf("\n1.lenght\n2.revrese\n3.convert to uppercase\n4.convert to lower case\n5.exit");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				printf("\nenter the string\n");
				scanf("%s",a);
			//	gets(a);
			length(a);
				break;
			case 2:
				printf("\nenter the string\n");
				scanf("%s",a);
				rev(a);
				break;
			case 3:
				printf("\nenter the string\n");
				scanf("%s",a);
				up(a);
				break;
			case 4:
				printf("\nenter the strings");
				scanf("%s",a);
				low(a);
				break;
			case 5:
				exit(0);
		}
	}
}




int length(char *a)
{
	int cnt=0;
	while(*a!='\0')
	{
		cnt++;
		*a++;
	}
	printf("lenght of strings=%d",cnt);
}
int rev(char *a)
{
	int i,j,c;
	for(j=0;*(a+j)!='\0';j++)
i=0;
j--;
	{
		while(i<j)
		{
			c=*(a+i);
			*(a+i)=*(a+j);
			*(a+j)=c;
			j--;
			i++;
		}
		printf("%s",a);
	}
}
void up(char*a)
{
	int i=0;
	while(*(a+i)!='\0')
	{
		if(islower(*(a+i)))
			*(a+i)=toupper(*(a+i));
		i++;
	}
	printf("%s",a);
}
void low(char*a)
{
	int i=0;
	while(*(a+i)!='\0')
	{
		if(isupper(*(a+i)))
			(*(a+i))=(tolower(*(a+i)));
		i++;
	}
	printf("%s",a);
}


2:
char *mystrcpy(char*,char*);
char * mystrcat(char*,char*);
void  mystrcomp(char*,char*);
main()
{
	char s1[20],s2[20],*l;
	int choice,cnt;
	while(1)
	{
		printf("\nenter ur choice");
		printf("\n1.copy\n2.compare\n3.concatenation\n4.exit");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\nenter the string\n");
				scanf("%s",s2);
				l=mystrcpy(s1,s2);
				printf("%s",l);
				break;
			case 2:
				printf("\nenterb the 1^st string\n");
				scanf("%s",s1);
				printf("\nenter 2^nd string\n");
				scanf("%s",s2);
				mystrcomp(s1,s2);
				//printf("%s",l);
				break;
			case 3:
				printf("\nenterb the 1^st string\n");
				scanf("%s",s1);
				printf("\nenter 2^nd string\n");
				scanf("%s",s2);
				l=mystrcat(s1,s2);
				printf("%s",l);
				break;
			case 4:
				exit(0);
		}
	}
}
char *mystrcpy(char *s1,char *s2)
{
	char *t=s1;
	int i=0;
	while(*(s2+i)!='\0')
	{
		*(s1+i)=*(s2+i);
		i++;
	}
	*(s1+i)='\0';
	return(t);
}
void mystrcomp(char *s1,char *s2)
{
	int a,b,c=0,i=0;
	a=strlen(s1);
	b=strlen(s2);
	while(*(s1+i)!='\0')
	{
		if(*(s1+i)==*(s2+i))
		
			c++;
			i++;
	}	
	if(c==a && c==b)
		printf("\nstring are equal");
	else
		printf("\nstring are not equal");
}
char *mystrcat(char *s1,char *s2)
{
	int i=0,j=0;
	char *t=s1;
	while(*(s1+i)!='\0')
	{
		i++;
	}
	while(*(s2+j)!='\0')
	{
		*(s1+i)=*(s2+j);
		i++;
		j++;
	}
	*(s1+i)='\0';
	return(t);
}
