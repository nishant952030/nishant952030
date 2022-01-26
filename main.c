#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int a,b,c,d,r1,r2;
    printf("enter the cofficients of the quadratic equation ax*x+bx+c=0  :\n");
    scanf("%d %d %d",&a,&b,&c);
    d=(b*b-4*a*c);
    if(d>0)
    {
        printf("roots are real and distinct\n");
        r1=(-b-sqrt(d))/2*a;
        r2=(-b+sqrt(d))/2*a;
        printf("the roots are=%d %d",r1,r2);
    }
    else if(d==0)
    {
        printf("roots are real and equal\n");
        r1=-b/2*a;
        r2=-b/2*a;
        printf("roots are=%d %d",r1,r2);
    }
    else
    {
        printf(" real part %d and imaginari part %fi\n",-b/2*a,sqrt(-d)/2*a);
        printf("real part %d and imaginari part %fi",-b/2*a,-sqrt(-d)/2*a);
    }

    getch();
}



