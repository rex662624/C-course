#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[]){
       
        unsigned int g = strtoul(argv[1],NULL,10);
        unsigned int h = strtoul(argv[2],NULL,10);
	unsigned int n = strtoul(argv[3],NULL,10);
	unsigned long int  final=1;
        int i;
	for(i=0;i<h;i++){final*=g;if(final>n)final%=n;}
	
        printf("ans=%u\n",final);
        
        


}

