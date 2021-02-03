		
		NAME:DURGESH K.PAWAR
		ROLL.NO:34227
			
			ASS:16

1:
#include<stdio.h>
#include<stdlib.h>
//int z;
struct student 
{
	int rollno;
	char name[20];
	int sub1,sub2,sub3;
	float percent;
};
void search(struct student s[10],int);
void modify(struct student s[10],int);
void display(struct student s[10]);
void percentdisplay(struct student s[20],float per);

void maxper(struct student s[10]);
int z;

int main()
{
	int rn,i,j,ch,m,sum,name,p,eid;
	float per;
	struct student s[10];
	printf("how many record do u want");
	scanf("%d",&z);
	for(i=0;i<z;i++)
	{
		printf("\nenter rollno and name\n");
		scanf("%d  %s",&s[i].rollno,&s[i].name);
		printf("\nenter marks in 3 subjects\n");
		scanf("%d",&s[i].sub1);
		scanf("%d",&s[i].sub2);
		scanf("%d",&s[i].sub3);
		sum=s[i].sub1+s[i].sub2+s[i].sub3;
		s[i].percent=(float)(sum*100)/300;
		sum=0;
	}
	while(1)
	{
		printf("\n1.search");
		printf("\n2.modify");
		printf("\n3.display all student deatsils");
		printf("\n4.display all student having percentage >75");
		printf("\n5.display student having maximum percentage");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nenter rollno to be searched\n");
				scanf("%d",&rn);
				search(s,rn);
				break;

			case 2:
				printf("enter rollno to be modified\n");
				scanf("%d",&rn);
				modify(s,rn);
				break;

			case 3:
				display(s);
				break;

			case 4:
				printf("enter percentage");
				scanf("%f",&per);
				percentdisplay(s,per);
				break;

			case 5:
				maxper(s);
				break;

			case 6:
				exit(1);
		}
	}
}
void search(struct student s[10],int rn)
{
	int i,f;
//	printf("\nrollno\tname\tsub1\tsub2\tsub3\tpercent");
	printf("\n");
	for(i=0;i<z;i++)
	{
		if(s[i].rollno==rn)
		{
        printf("\nrollno\tname\tsub1\tsub2\tsub3\tpercent");

			printf("\n%d\t%s\t%d\t%d\t%d\t%f",s[i].rollno,s[i].name,s[i].sub1,s[i].sub2,s[i].sub3,s[i].percent);
			printf("\n");
break;
		}
	}
if(i==z)
		printf("\nrecord not found");


}
void modify(struct student s[10],int rn)
{
	int i,flag=0,sum;
	for(i=0;i<z;i++)
	{
			printf("enter the name\n");
			scanf("%s",s[i].name);
			printf("\nenter the markks of three subjects");
			scanf("%d",&s[i].sub1);
			scanf("%d",&s[i].sub2);
			scanf("%d",&s[i].sub3);
			sum=s[i].sub1+s[i].sub2+s[i].sub3;
			s[i].percent=(float)(sum*100)/300;
			flag=1;
			break;
		}
		if(flag=1)
			printf("\nname\trollno\tsub1\tsub2\tsub3\tpercent");
		printf("\n");
		printf("\n%s\t%d\t%d\t%d\t%d\t%f",s[i].name,s[i].rollno,s[i].sub1,s[i].sub2,s[i].sub3,s[i].percent);
		printf("\n");
		if(flag=0)
			printf("\nno such records");
	}
	void display(struct student s[20])
	{
		int i;
		printf("name\trollno\tpercent\n");
		for(i=0;i<z;i++)
		{
			printf("\n");
			printf("%s\t%d\t%f\t",s[i].name,s[i].rollno,s[i].percent);
			printf("\n");
		}
		printf("\n");
	}
	void percentdisplay(struct student s[20],float per)
	{
		int i;
		printf("\nname\trollno\tsub1\tsub2\tsub3\tpercent");
		for(i=0;i<z;i++)
		{
			printf("\n");
			if(s[i].percent>=per)
			{
				printf("\n%s\t%d\t%d\t%d\t%d\t%f",s[i].name,s[i].rollno,s[i].sub1,s[i].sub2,s[i].sub3,s[i].percent);
				printf("\n");
			}
			printf("\n");
		}
	}
	void maxper(struct student s[20])
	{
		int max,i,j;
		max=s[0].percent;
		j=0;
		printf("\nname\trollno\tsub1\tsub2\tsub3\tpercent");
		for(i=1;i<z;i++)
		{
			if(max<s[i].percent)
			{
				max=s[i].percent;
				j=i;
			}

		}
		printf("\n%s\t%d\t%d\t%d\t%d\t%f",s[j].name,s[j].rollno,s[j].sub1,s[j].sub2,s[j].sub3,s[j].percent);
		printf("\n");
	}

2:
#include<stdio.h>
#include<stdlib.h>
int n;
struct emp
{
	int id;
	char name[20];
	int salary;
};
void searchname(struct emp s[10],char a[10]);
void searchid(struct emp s[10],int);
void display(struct emp s[10]);
void maxsal(struct emp s[10],float);
void maxper(struct emp s[10]);
main()
{
	int i,j,ch,rn,per,p,sum,eid,sub1,sal;
	char k[10];
	struct emp s[10];
	printf("\nhow many record do you want\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nenter employee id\n");
		scanf("%d",&s[i].id);
		printf("\nenter employe name\n");
		scanf("%s",s[i].name);
		printf("\nenter salary\n");
		scanf("%d",&s[i].salary);
	}
	while(1)
	{
		printf("\nenter ur choice\n");
		printf("\n1.search by name\n");
		printf("\n2.serch by id\n");
		printf("\n3.display all\n");
		printf("\n4.display all employee having salary > 3500\n");
		printf("\n5.display employee having maximum salary\n");
		printf("\n6.exit");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nenter name too be find\n");
				scanf("%s",k);
				searchname(s,k);
				break;
			case 2:
				printf("\nenter id too be find\n");
				scanf("%d",&eid);
				searchid(s,eid);
				break;
			case 3:
				display(s);
				break;
			case 4:
				printf("\nenter salary\n");
				scanf("%d",&sal);
				maxsal(s,sal);
				break;
			case 5:
				maxper(s);
				break;
			case 6:
				exit(1);
		}
	}
}
void searchname(struct emp s[10],char k[10])
{
	int i,f=0;
	printf("\nid\tname\tsalary");
	for(i=0;i<n;i++)
	{
		if(strcmp(s[i].name,k)==0)
		{
			f=1;
			printf("\n");
			break;
		}
	}
	if(f==1)
		printf("\n%d\t%s\t%d",s[i].id,s[i].name,s[i].salary);
	if(f==0)
		printf("\nrecord not found");
}
void searchid(struct emp s[10],int eid)
{
	int i,f=0,sum,flag;
	printf("\nid\tname\tsalary");
	for(i=0;i<n;i++)
	{
		if(s[i].id==eid)
		{
			flag=1;
			printf("\n");
			break;
		}
		printf("\n");
	}
	if(f==1)
		printf("\n%d\t%s\t%d",s[i].id,s[i].name,s[i].salary);
	printf("\n");
	if(flag!=1)
		printf("\nrecord not found");
}
void display(struct emp s[20])
{
	int i;
	printf("\nname\tid\tsalary\n");
	for(i=0;i<n;i++)
	{
		printf("\n");
		printf("%s\t%d\t%d",s[i].name,s[i].id,s[i].salary);
		printf("\n");
	}
	printf("\n");
}
void maxsal(struct emp s[20],float sal)
{
	int i;
	printf("\nid\tname\tsalary");
	for(i=0;i<n;i++)
	{
		if(s[i].salary>=sal)
		{
			printf("\n");
			printf("\n%s\t%d\t%d",s[i].name,s[i].id,s[i].salary);
			printf("\n");
		}
	}
	printf("\n");
}
void maxper(struct emp s[20])
{
	int max,i,j;
	max=s[0].salary;
	j=0;
	printf("\nid\tname\tsalary");
	for(i=1;i<n;i++)
	{
		if(max<s[i].salary)
		{
			printf("\n");
			max=s[i].salary;
			j=i ;
			printf("\n");
		}
		printf("\n");
	}
	printf("\n%d\t%s\t%d",s[j].id,s[j].name,s[j].salary);
}
