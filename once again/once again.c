#include <stdio.h>
main()
{
int i;
float x;
float y;
float z=0;
printf("please input number:");
scanf("%f",&x);
if(x==1)
{
y=x;
}
else
for(i=2;i<=x;x--)	//控制循环的次数，
{
y=1/x+1/(x-1);
x=x-1;
z=z+y;
}
printf("%f",z);


getchar();
}