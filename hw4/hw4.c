#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int N;
void add(float Result[][N], float m1[][N], float m2[][N]);
void multiplication(float Result[][N], float m1[][N], float m2[][N]);
float det(int a,float R[][a]); 

int main(int argc, char* argv[])
{
srand((unsigned) time(NULL));
N = atoi(argv[1]);
float M1[N][N];
float M2[N][N];
float detm[N][N];
float ans[N][N];

	switch(*argv[3])
	{	
	case '0':	
                if(*argv[2]=='2')
		{
		int i,j;
		for(i=0;i<N;i++)for(j=0;j<N;j++){detm[i][j]=((rand()%100)+1);}
		printf("Input:\n");
		for(i=0;i<N;i++)for(j=0;j<N;j++){printf("%.0f ",detm[i][j]);}
                printf("\n");
		}
		else{
		int i,j;
                for(i=0;i<N;i++)for(j=0;j<N;j++){M1[i][j]=((rand()%100)+1);}
                for(i=0;i<N;i++)for(j=0;j<N;j++){M2[i][j]=((rand()%100)+1);}
		printf("Input:\n");
                for(i=0;i<N;i++)for(j=0;j<N;j++){printf("%.0f ",M1[i][j]);}
                printf("\n");
                for(i=0;i<N;i++)for(j=0;j<N;j++){printf("%.0f ",M2[i][j]);}
		printf("\n");
		}
		break;
	case '1':
                if(*argv[2]=='2')
                {
                int i,j;
                for(i=0;i<N;i++)for(j=0;j<N;j++){scanf("%f",&detm[i][j]);}
		printf("Input:\n");
		for(i=0;i<N;i++)for(j=0;j<N;j++){printf("%.0f ",detm[i][j]);}
		printf("\n");
                }
                else{
		int i,j;
		for(i=0;i<N;i++)for(j=0;j<N;j++){scanf("%f",&M1[i][j]);}
    		for(i=0;i<N;i++)for(j=0;j<N;j++){scanf("%f",&M2[i][j]);}
		printf("Input:\n");
	    	for(i=0;i<N;i++)for(j=0;j<N;j++){printf("%.0f ",M1[i][j]);}
    		printf("\n");
    		for(i=0;i<N;i++)for(j=0;j<N;j++){printf("%.0f ",M2[i][j]);}
		printf("\n");
		
		}
		break;
	}
	switch(*argv[2])
	{
	case '0':
		printf("\nOperaton:\nAdd\n\nOutput:\n");
		add(ans,M1,M2);
		break;
	case '1':
		printf("\nOperaton:\nMultiplication\n\nOutput:\n");
		multiplication(ans,M1,M2);
		break;
	case '2':
		printf("\nOperaton:\nDeterminant\n\nOutput:\n");
		printf("%.0f\n",det(N,detm));
		break;

	}	
}


void add(float Result[][N], float m1[][N], float m2[][N])
{	int i,j;
	for(i=0;i<N;i++)for(j=0;j<N;j++){Result[i][j]=m1[i][j]+m2[i][j];printf("%.0f ",Result[i][j]);}
	printf("\n");
}

void multiplication(float Result[][N], float m1[][N], float m2[][N])
{
int i,j,m,n,x;
float b[N][N];
for(i=0;i<N;i++)for(j=0;j<N;j++)b[i][j]=m2[j][i];
for(i=0;i<N;i++)for(j=0;j<N;j++)Result[i][j]=0;
	for(m=0;m<N;m++)for(x=0;x<N;x++)
	{
	for(n=0;n<N;n++)Result[m][x]+=m1[m][n]*b[x][n];
	printf("%.0f ",Result[m][x]);
	}
	printf("\n");
	
}


float det(int a,float R[][a])
{
int now=a;int i,j,i2,j2,x=0,y=0;
float answer=0;
int co;


if(now==1)	return R[0][0]; 
else
{
       

	for(i=0;i<now;i++)
	{
       
       

	if(i%2==0)co=1;else co=-1;
	int next=now-1;
	float M[next][next];
	for(i2=0;i2<now;i2++)
	{
		for(j2=0;j2<now;j2++)
		{
		if((i2!=0)&&(j2!=i)){M[x][y]=R[i2][j2];y++;}
		if(y>=next){x++;y=0;}
		}
	}
	answer=answer+co*R[0][i]*det(next,M);
	x=0;y=0;
	}

}
return answer;
}
