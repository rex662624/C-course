/*******************
E94046157

compile command:gcc -o hw1_2 hw1_2.c

execute command :./hw_1.2

update date:2016/09/21

*******************/
#include<stdio.h>
int main(int argc,char *argv[])
{

	int x,ans;
	printf("enter x:");
	scanf("%d",&x);

	ans=3*x*x*x*x*x+2*x*x*x*x-5*x*x*x-x*x+7*x-6;

	printf("the answer is %d\n",ans);


}

