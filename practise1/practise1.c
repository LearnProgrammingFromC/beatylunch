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
a=1;b=0;c=2;d=3;e=2;
c=file(d+e,c);
b=file(c,b);
a=file(b,a);
printf("The file is:A=%d,B=%d,C=%d,D=%d,E=%d",a,b,c,d,e);

getchar();

}