// 10ºŸ»’.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
int festival[10];
int i,a;
printf("Please input 10 date:(date model 101 means New's Day)\n");
for(i=100;i<1232;i++)
{

	scanf("%d",&festival[i]);
	festival[i]=i;
	switch(i)
	{
	case 101:printf("New's Day");break;
	case 501:printf("May Day");break;
	default:printf("Error");break;
	}
}
	return 0;
}
