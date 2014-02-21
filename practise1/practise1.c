#include <stdio.h>
int file(int x,int y)
{
int z;
z=x+y;
return(z);
}
main()
{
int a,b,c,d,e;
printf("Please enter the number of A-E files: ");
scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e);
c=file(e,d);
//b=file(c,b);
//a=file(b,a);
printf("%d,%d,%d,%d,%d",a,b,c,d,e);

getchar();

}