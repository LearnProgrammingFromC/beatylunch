#include <stdio.h>
main()
{
	int i;
	float x;
	float y;
	float z=0;
	printf("please input number:");
	scanf("%f",&x);	//enter x
if(x==1)
{
	y=x;   			//advoid x=0
}
	else
for(i=2;i<=x;x--)	//control times
{
	y=1/x+1/(x-1);
	x=x-1;
	z=z+y;
}
	printf("%f",z);  //sum Z


getchar()£»				//stop cmd
}