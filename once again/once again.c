#include <stdio.h>
main()
{
	int i;
	float x;
	float y;
	float z=0;
	printf("please input number:");
	scanf("%f",&x);	//键入X的值
if(x==1)
{
	y=x;   			//避免是X=0的情况
}
	else
for(i=2;i<=x;x--)	//控制循环的次数，
{
	y=1/x+1/(x-1);
	x=x-1;
	z=z+y;
}
	printf("%f",z);  //用Z输出累加


getchar()；				//停住cmd
}