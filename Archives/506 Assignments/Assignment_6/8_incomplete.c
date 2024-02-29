//To print average marks of Students in the class
#include<stdio.h>
void main()
{int av; char ask; int z = 1;
 int total,average;
 int aver(char yn)
   {if (z==1)
      {int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o;
       int total,average;
       a=b=c=d=e=f=g=h=i=j=k=l=m=n=o=0;
       printf("\n Enter the marks of a student in all subjects seperated by commas :");
       scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m,&n,&o);
       printf("chaNGED %d%d", a,b);
       total = 15 - ((a=0?1:0)+(b=0?1:0)+(c=0?1:0)+(d=0?1:0)+(e=0?1:0)+(f=0?1:0)+(g=0?1:0)+(h=0?1:0)+(i=0?1:0)+(j=0?1:0)+(k=0?1:0)+(l=0?1:0)+(m=0?1:0)+(n=0?1:0)+(o=0?1:0));
       average = (a+b+c+d+e+f+g+h+i+j+k+l+m+n+o)/total;
       return average; 
      }
av = aver(yn);
printf("\n The average marks of all subjects entered is %d\n",av);
printf("\n Enter 'y' if you want to calculate average marks of other student or if you dont want, enter 'n'");
scanf("%lf", &ask);
if (ask == 'n')
   z = 0;
else if(ask == 'y')
   z = 1;
}while (z==1)
