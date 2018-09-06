/*******************
E94046157

compile command:gcc -o hw1_3 hw1_3.c

execute command :./hw_1.3

update date:2016/09/21

*******************/


#include <stdio.h>
int main(int argc,char *argv[])
{

        int x,ans;
        printf("enter x:");
        scanf("%d",&x);

	ans=((((3*x+2)*x-5)*x-1)*x+7)*x-6;

	printf("the answer is %d\n",ans);


}

