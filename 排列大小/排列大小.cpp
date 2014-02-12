// ≈≈¡–¥Û–°.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
	int number,time,i,t;
	int a[11];
	printf("Please enter 10 number:\n");
	for(i=1;i<11;i++);
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
    for(time=1;time<=9;time++)
		for(i=1;i<=10-time;i++)
			if(a[i]>a[i+1])
			{
			t=a[i];a[i]=a[i+1];a[i+1]=t;
			}
			printf("the sorted numbers:\n");
			for(i=1;i<11;i++)
				printf("%d",a[i]);
	return 0;
}
