#include<stdio.h>
#include <stdlib.h>
int main(int argc,char*argv[])
{
int i;

union {
	int bit;
	float n;

}bfloat;
union { 
	int bit;
	int n;

}bint;

union{
	int bit;
	float a;

}bitpat;

if(*argv[1]=='1')
{
	bint.n=atoi(argv[2]);
	for(i=31;i>=0;i--)
	{
	printf("%c",((bint.bit>>i)&1 ?'1':'0'));
	}
	printf("\n");

}
else if(*argv[1]=='2')
{

        bfloat.n=atof(argv[2]);
        for(i=31;i>=0;i--)
        {
        printf("%c",((bfloat.bit>>i)&1 ?'1':'0'));
        }
        printf("\n");

}
else if(*argv[1]=='3')
{
	char *p=argv[2];

	while(*p){
	int b=*p=='1'?1:0;
	bitpat.bit=(bitpat.bit<<1)|b;
	p++;
	}
	
	printf("%.23e\n",bitpat.a);

}
else printf("argv[1] error: please enter 1 or 2 or 3\n");

}
