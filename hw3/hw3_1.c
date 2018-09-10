#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
int i,*iptr;


if(*argv[1]=='2')
{

	float f=atof(argv[2]);
 	iptr=(int *)&f;
	for(i=31;i>=0;i--)
	{
	printf("%c",((*iptr>>i)&1 ?'1':'0'));
	}
	printf("\n");

}
else
if(*argv[1]=='1')
{
	int n;
	int k=atoi(argv[2]);
	for (i=31; i >= 0; i--)
	{
		n = k >> i;
		if (n & 1)
		printf("%c",'1');
		else
		printf("%c",'0');
	}	

	printf("\n");
}
else
{
printf("argv[1] error: please enter 1(int) or 2(float)\n");
}

}
