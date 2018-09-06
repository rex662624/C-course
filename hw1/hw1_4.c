/*******************
E94046157

compile command:gcc -o hw1_4 hw1_4.c

execute command :./hw_1.4

update date:2016/09/21

*******************/


#include <stdio.h>
int main(int argc, char *argv[])
{

	int x,a,b,c,d,tmp;
	
	printf("please enter a U.S. dollar amount:");
	scanf("%d",&x);

	a=x/20;
	tmp=x%20;

	b=tmp/10;
	tmp=tmp%10;

	c=tmp/5;
        tmp=tmp%5;

        
	printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d\n",a,b,c,tmp);



}

