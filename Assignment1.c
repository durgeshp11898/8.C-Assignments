NAME:PAWAR DURGESH KARBHARI
FYBSC 34227

			EX-1
		SET-A
1)/*dimention of cylender*/
#include<stdio.h>
 main()
{
int r,h;
float s,v;
printf("enter value of r and h");
scanf("%d%d",&r,&h);
s=2*3.14*r*r+2*3.14*r*h;
printf("surface area%f",s);
v=3.14*r*r*h;
printf("velocity=%f",v);
}
/*enter value of r and h5
8
surface area408.200012velocity=628.000000[fy34227@cs21 seta]$ */

/*********************************************************/
2)/*accept farinhit tempreture*/
#include<stdio.h>
main()
{
	float f,c,k;
	printf("enter value of fahrenheit");
	scanf("%f",&f);
	c=(5.00/9.00)*(f-32.00);
	printf("celcious=%f",c);
	k=c+273.15;
	printf("kelvin=%f",k);
}
/*enter value of fahrenheit5
celcious=-15.000000kelvin=258.149994[fy34227@cs21 seta]$ */

/****************************************************************/

3)/*find distance travelled */
#include<stdio.h>
main()
{
	int u,a,t,v;
	float s;
	printf("enter value u,a,t");
	scanf("%d%d%d",&u,&a,&t);
	v=u+a*t;
	printf("velocity=%d",v);
	s=u+(a*a+t*t);
	printf("disetance=%f",s);
}
/*enter value u,a,t4
6
8
velocity=52disetance=104.000000[fy34227@cs21 seta]$ */

/********************************************************/

4)/*perimeter and area*/
#include<stdio.h>
main()
{
	float a,b,P,A;
	printf("enter value of a and b");
	scanf("%f%f",&a,&b);
	P=2*3.14*(a+b);
	printf("perimeter=%f",P);
	A=3.14*(a*a-b*b);
	printf("Area=%f",A);
}
/*enter value of a and b5
8
perimeter=81.639999Area=-122.459999[fy34227@cs21 seta]$ */

/*********************************************************/

5)/*arithnatic and hermonic mean*/
#include<stdio.h>
main()
{
	float a,b,AM,HM;
	printf("enter value a and b");
	scanf("%f%f",&a,&b);
	AM=(a+b)/2;
	HM=a*b/(a+b);
	printf("arithnatic mean=%f",AM);
	printf("harmonic mean=%f",HM);
}
/*enter value a and b 5
8
arithnatic mean=6.500000harmonic mean=3.076923[fy34227@cs21 seta]$ */

/**************************************************************************/

6)/*surface area and volume*/
#include<stdio.h>
main()
{
	int l,b,h,s,v;
	printf("enter the value of l,b,and h");
	scanf("%d%d%d",&l,&b,&h);
	s=2*(l*b+l*h+b*h);
	v=l*b*h;
	printf("surface area=%d",s);
	printf("velocity=%d",v);
}
/*enter the value of l,b,and h5
6
7
surface area=214velocity=210[fy34227@cs21 seta]$ */

/*****************************************************/

7)/*display privious and nest value of character*/
#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter value a");
	scanf("%d",&a);
	b=a-1;
	c=a+1;
	printf("previous value=%d",b);
	printf("next value=%d",c);
}
/*enter value a6
previous value=5next value=7[fy34227@cs21 seta]$ */

/*********************************************************/

8)/*asscii value*/
#include<stdio.h>
main()
{
	char a;
	printf("enter value a");
	scanf("%c",&a);
	printf("ascii value=%d",a);
}

/*output:
enter value a  A
ascii value=32 
*/

/******************************************************************/

		SET:B

1)/* find distance*/
#include<stdio.h>
#include<math.h>
main()
{
	int x1,x2,y1,y2,dist;
	printf("enter co-ordinates x1 and x2");
	scanf("%d%d",&x1,&x2);
	printf("\n enter co-ordinate y1 and y2");
	scanf("%d%d",&y1,&y2);
	dist=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
	printf("\n the distance between two points=%d",dist);
}
/*enter co-ordinates x1 and x23
6

 enter co-ordinate y1 and y24
8

 the distance between two points=5[fy34227@cs21 setb]$ */

/******************************************************/

2)/*find currency of notes*/
#include<stdio.h>
main()
{
	int a,b,c,d,e;
	printf("enter the amount\n");
	scanf("%d",&a);
	b=a/10;
	printf("\nthe use of 10 notes=%d",b);
	c=a-(b*10);
	d=c/5;
	printf("\nthe use of 5 notes=%d",d);
	e=a-((b*10)+(d*5));
	printf("\nthe use of 1 notes=%d",e);
}
/*enter the amount
499

the use of 10 notes=49
the use of 5 notes=1
the use of 1 notes=4[fy34227@cs21 setb]$ */

/***************************************/

3)/*find currency of notes*/
#include<stdio.h>
main()
{
	int a,b,c,d,e;
	printf("enter the amount\n");
	scanf("%d",&a);
	b=a/10;
	printf("\nthe use of 10 notes=%d",b);
	c=a-(b*10);
	d=c/5;
	printf("\nthe use of 5 notes=%d",d);
	e=a-((b*10)+(d*5));
	printf("\nthe use of 1 notes=%d",e);
}
/*enter the amount
499

the use of 10 notes=49
the use of 5 notes=1
the use of 1 notes=4[fy34227@cs21 setb]$ */

/******************************************************/

		SET:C

1)
/*find dimention of room*/
#include<stdio.h>
main()
{
	int r,d,w,p,a;
	printf("\n enter dimention of room");
	scanf("%d",&r);
	printf("\n enter dimention of door");
	scanf("%d",&d);
	printf("\n enter dimention of windows");
	scanf("%d",&w);
	p=r-(d+(w*2));
	printf("\n thr area of painted(internol walls)=%d",p);
	a=r-p;
	printf("\n the area ofwhitewashed(roof)=%d",a);
}
/* enter dimention of room500

 enter dimention of door50

 enter dimention of windows44

 thr area of painted(internol walls)=362
 the area ofwhitewashed(roof)=138[fy34227@cs21 setc]$ 
*/

/*************************************************************/

2)
/*find salary*/
#include<stdio.h>
main()
{
	int a,b,c,d,e,h;
	printf("\n enter employee id");
	scanf("%d",&a);
	printf("\n enter basic salary");
	scanf("%d",&b);
	c=b/10;
	printf("the 10 basic employee get=%d",c);
	e=b/30;
	printf("\n the 30 basic houde rent=%d",e);
	d=b/5;
	printf("the 5 tax deducted=%d",d);
	h=(b+c+e)-(d);
	printf("\nthe employee home salary=%d",h);
}
/* enter employee id5

 enter basic salary15000
the 10 basic employee get=1500
 the 30 basic houde rent=500the 5 tax deducted=3000
the employee home salary=14000[fy34227@cs21 setc]$ 

*/
