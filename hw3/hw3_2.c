#include <stdio.h>
int main(int argc, char* argv[])
{
float *fptr;


char *a=argv[1];
int num=0;
while(*a)
{
int b= *a=='1'?1:0;
num=(num<<1)|b;
a++;
}

fptr=(float*)&num;
printf("%.23e\n",*fptr);

}
