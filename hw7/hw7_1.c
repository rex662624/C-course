#include<stdio.h>
#include<stdlib.h>

typedef double (*F)(double,int);

double power(double,int);
double multiply(double,int); 
double divide(double,int); 
double powerpower(F,double,int,int);

int main(int argc,char *argv[])
{
double x=atof(argv[1]);int n=atoi(argv[2]);int m=atoi(argv[3]);
printf("%f\n",powerpower(power,x,n,m));
printf("%f\n",powerpower(multiply,x,n,m));
printf("%f\n",powerpower(divide,x,n,m));

}

double power(double x, int n)
{
        double ans=1;int i;
        for(i=0;i<n;i++)ans*=x;
        return ans;
}
double multiply(double x, int n)
{
	return x*n;
}

double divide(double x, int n)
{
        return x/n;
}
double powerpower(F function,double x,int n,int m)
{
        double ans=1;int i;
	for(i=0;i<m;i++)ans*=function(x,n);
	return ans;
}

