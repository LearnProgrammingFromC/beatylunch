#include <stdio.h>
main()
{
	int i;
	float x;
	float y;
	float z=0;
	printf("please input number:");
	scanf("%f",&x);	//����X��ֵ
if(x==1)
{
	y=x;   			//������X=0�����
}
	else
for(i=2;i<=x;x--)	//����ѭ���Ĵ�����
{
	y=1/x+1/(x-1);
	x=x-1;
	z=z+y;
}
	printf("%f",z);  //��Z����ۼ�


getchar()��				//ͣסcmd
}