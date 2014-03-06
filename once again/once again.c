#include <stdio.h>
main()
{   int x;
	float i;
	float z=0;
	printf("please input number:");
	scanf("%d",&x);	  //enter x
if(x==0)  //when x=0
	{
	printf("Please enter anther number");
	}
else
{
	if(x>0)  //when x>0
	{
		for(i=1;i<=x;i++)
		{
		z=z+1/i;
		}
	}
	else
	{
	if(x<0)  //When x<0
	{
		for(i=-1;i>=x;i--)
		{
		z=z+1/i;
		}
	}
	}
}
printf("%f",z);  //sum Z

		//stop cmd
}