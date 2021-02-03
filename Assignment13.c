	NAME:PAWAR DURGESH KARBHARI
	FY34227
		EX:13

1:
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 main()
{
	char a[15],b[15];
	int s;
	printf("\naccept first string from user");
	scanf("%s",a);
	printf("\naccept second string from user");
	scanf("%s",b);
	while(1)
	{
		printf("\n.lenght\n2.copy\n3.concatenation\n4.compare\n5.exit");
		printf("\nenter ur choice");
		scanf("%d",&s);
		switch(s)
		{
			case 1:
				printf("\nlenght of string=%d and %d",strlen(a),strlen(b));
				break;
			case 2:
				printf("\ncopy of of string b in a=%s",strcpy(a,b));
				break;
			case 3:
				printf("\nconcatenation of string is is %s",strcat(a,b));
				break;
			case 4:
				if(strcmp(a,b)==0)
					printf("\nboth strings are equal");

				if(strcmp(a,b)<0)
					printf("\nfirst string is less than second strings");

				if(strcmp(a,b)>0)
					printf("\nfirst string is gretter than second string");
				break;
			case 5:
				exit(0);
		}
	}
}


2:
#include<stdio.h>
#include<string.h>
int pos(char [],char );
main()
{
	char a[10],p,k;
	int i;
	printf("\nenter the string\n");
	gets(a);
	printf("\nenter the character to be searched\n");
//getchar();
	scanf("%c",&k);
	p=pos(a,k);
	if(p==-1)
		printf("\ncharcter not found");
	else
		printf("charcter found at position = %d",p+1);
}
int pos(char a[10],char k)
{
	int i=0,p=-1;
	for(i=0;a[i]!='\0';i++)
	{
		if(k==a[i])
{
			p=i;
break;
}
	}
	return(p);
} 


3:

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int pal(char[]);
main()
{
	int p;
	char a[20];
	printf("\nenter the string\n");
	gets(a);
	//scanf("%s",a);
	p=pal(a);
	if(p==1)
		printf("\nthe string is palindrome\n");
	else 
		printf("\nthe string is not palindrmee\n");
}
int pal(char a[20])
{
	int len;
	int i=0,j=0,count=0;
	char b[30];
	len=strlen(a);
	for(i=len-1;i>=0;i--)
	{
		b[j]=a[i];
		j++;
	}
	for(i=0;i<len;i++)
	{
		if(a[i]==b[i])
			count++;
	}
	if(count==len)
		return(1);
	else
		return(0);
}


4:
#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
	int i=0;
	char s[20];
	printf("\nenter the string\n");
	gets(s);
	while(s[i]!='\0')
	{
		if(s[i]==' ')
		{
			s[i]='*';
		}
		else
			if(isdigit(s[i]))
			{		s[i]='?';
			}
			else		

			{
				if(isupper(s[i]))
					s[i]=tolower(s[i]);
				else
					if(islower(s[i]))
						s[i]=toupper(s[i]);
			}
		i++;
	}
	puts(s);

}


