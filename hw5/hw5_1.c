#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[]){
	
 	unsigned int g = strtoul(argv[2],NULL,10);
	unsigned int n = strtoul(argv[3],NULL,10);
	unsigned long final1=0,final2=1; 
	int i;
	if(*argv[1]=='0')//add
	{
		for(i=1;i<=2;i++){final1+=g;if(final1>n)final1%=n;}			

		printf("ans=%u\n",final1);
	}
	else
	if(*argv[1]=='1')//mutiplication
	{		
    		for(i=1;i<=2;i++){final2*=g;if(final2>n)final2%=n;}
		

        	printf("ans=%u\n",final2);
	}
	
	
}
