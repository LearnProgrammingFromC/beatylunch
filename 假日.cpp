// 假日.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
int month[12],date[31];
int i,a;
printf("Enter the month:\n");
for(i=1;i<=12;i++)
{ 
	month[i]=i;
	scanf("%d",&month[i]);           //输入月份
	 
	if(month[i]=5)                   //测试固定月份能不能实现
{
printf("Enter the date:\n");         //输入日期
for(a=1;a<=31;a++)  
{
	date[a]=a;     
scanf("%d",&date[a]);
switch(date[a])                      //输入日期
{
case 1:printf("MAY DAY");break;      //测试固定日期能不能实现
default:printf("error");break;
}
}	
}
}
	return 0;
}
