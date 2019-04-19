#include<stdio.h>
#include <stdlib.h>
int main(int argc,char*argv[])
{
union {
	 struct {unsigned int 
				 bit1:1,bit2:1,bit3:1,bit4:1,bit5:1,bit6:1,bit7:1,bit8:1
				,bit9:1,bit10:1,bit11:1,bit12:1,bit13:1,bit14:1,bit15:1,bit16:1
				,bit17:1,bit18:1,bit19:1,bit20:1,bit21:1,bit22:1,bit23:1,bit24:1
				,bit25:1,bit26:1,bit27:1,bit28:1,bit29:1,bit30:1,bit31:1,bit32:1;}a;
	
	float n;

}bfloat;

union { 
       struct {unsigned int
                                 bit1:1,bit2:1,bit3:1,bit4:1,bit5:1,bit6:1,bit7:1,bit8:1
                                ,bit9:1,bit10:1,bit11:1,bit12:1,bit13:1,bit14:1,bit15:1,bit16:1
                                ,bit17:1,bit18:1,bit19:1,bit20:1,bit21:1,bit22:1,bit23:1,bit24:1
                                ,bit25:1,bit26:1,bit27:1,bit28:1,bit29:1,bit30:1,bit31:1,bit32:1;}a;

	int n;

}bint;

union{
        
        unsigned int bit:32;

	float a;

}bitpat;

if(*argv[1]=='1')
{
	bint.n=atoi(argv[2]);
	 printf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n"
                ,bint.a.bit32,bint.a.bit31,bint.a.bit30,bint.a.bit29,bint.a.bit28,bint.a.bit27,bint.a.bit26,bint.a.bit25
                ,bint.a.bit24,bint.a.bit23,bint.a.bit22,bint.a.bit21,bint.a.bit20,bint.a.bit19,bint.a.bit18,bint.a.bit17
                ,bint.a.bit16,bint.a.bit15,bint.a.bit14,bint.a.bit13,bint.a.bit12,bint.a.bit11,bint.a.bit10,bint.a.bit9
                ,bint.a.bit8,bint.a.bit7,bint.a.bit6,bint.a.bit5,bint.a.bit4,bint.a.bit3,bint.a.bit2,bint.a.bit1);

}
else if(*argv[1]=='2')
{

        bfloat.n=atof(argv[2]);
    	
        printf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n"
		,bfloat.a.bit32,bfloat.a.bit31,bfloat.a.bit30,bfloat.a.bit29,bfloat.a.bit28,bfloat.a.bit27,bfloat.a.bit26,bfloat.a.bit25
		,bfloat.a.bit24,bfloat.a.bit23,bfloat.a.bit22,bfloat.a.bit21,bfloat.a.bit20,bfloat.a.bit19,bfloat.a.bit18,bfloat.a.bit17
		,bfloat.a.bit16,bfloat.a.bit15,bfloat.a.bit14,bfloat.a.bit13,bfloat.a.bit12,bfloat.a.bit11,bfloat.a.bit10,bfloat.a.bit9
		,bfloat.a.bit8,bfloat.a.bit7,bfloat.a.bit6,bfloat.a.bit5,bfloat.a.bit4,bfloat.a.bit3,bfloat.a.bit2,bfloat.a.bit1);
        

}
else if(*argv[1]=='3')
{
	
	char *p=argv[2];

	while(*p){
	int b=*p=='1'?1:0;
	bitpat.bit*=2;bitpat.bit+=b;
	p++;
	}
		
	
	printf("%.23e\n",bitpat.a);
	
}
else printf("argv[1] error: please enter 1 or 2 or 3\n");

}
