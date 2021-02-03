		NAME:PAWAR DURGESH KARBHARI
			FY34227
				ASS:19
1:
#include<stdio.h>
#include<stdlib.h>
main(int c,char *v[])
{
int ch;
FILE *fp,*fw;
fp=fopen(v[1],"r");
fw=fopen(v[2],"w");
if(fp==NULL)
exit(0);
while(1)
{
ch=fgetc(fp);
if(ch==EOF)
break;
if(isupper(ch));
ch=tolower(ch);
if(ch=toupper(ch))
fputc(ch,fw);
}
fclose(fp);
fclose(fw);
}

2:

#include<stdio.h>
#include<stdlib.h>
 main(int c,char *v[])
{
int ch,w=0,i=0,c1=0;
FILE *fp;
fp=fopen(v[1],"r");
if(fp==NULL)
exit(0);
while(1)
{
ch=fgetc(fp);
if(ch==EOF)
break;
if(ch==' '||ch=='\t'||ch=='\n')
w++;
if(ch=='\n')
i++;
else
c1++;
}
printf("\n no of characters=%d",c1);
printf("\n no of words=%d",w);
printf("\n no of lines=%d",i);
}
