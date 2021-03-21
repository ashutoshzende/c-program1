#include<stdio.h>
int main()
{
int m1,m2,m3,m4,m5,per;
printf("enter marks in your five subjects:");
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
per=m1+m2+m3+m4+m5*100/500;
if(per>=60)
{
printf("\n first division");
}
else if(per>=50)
{
    printf("\n second division");
}
else if(per>=40)
{
    printf("\n third division");
}
else if(per<=30)
{
 printf("\n FAIL");
}
}
