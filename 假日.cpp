// ����.cpp : Defines the entry point for the console application.
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
	scanf("%d",&month[i]);           //�����·�
	 
	if(month[i]=5)                   //���Թ̶��·��ܲ���ʵ��
{
printf("Enter the date:\n");         //��������
for(a=1;a<=31;a++)  
{
	date[a]=a;     
scanf("%d",&date[a]);
switch(date[a])                      //��������
{
case 1:printf("MAY DAY");break;      //���Թ̶������ܲ���ʵ��
default:printf("error");break;
}
}	
}
}
	return 0;
}
