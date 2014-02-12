// function.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int main(int argc, char* argv[])

{
int a,b,c;
scanf("%d,%d",&a,&b);
c=max(a,b);
printf("%d",c);

getchar();
	return 0;
}
max(int x,int y)
{   
	int z;
	z=x>y?x:y;
	return(z);

}
