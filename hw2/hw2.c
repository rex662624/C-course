#include <stdio.h>

int main(int argc, char* argv[])

{

if(argc==3)
{
int year = atoi(argv[1]);
int day=1,j,i;

        int yearco=year-1;
        for( i=1900;i<year;i++)
        {

                if ( (i%400==0) || ( (i%4==0)&&(i%100!=0) ) )
                day=day+2;
                else
                day++;


                if(day>6)
                day=day%7;
        }

int month = atoi(argv[2]);


int daycount;
	
		
for(j=1;j<month;j++)
{
	switch(j)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
		day=day+31;
		break;
					
		case 2: 
		if ( (year%400==0) || ( (year%4==0)&&(year%100!=0) ) )
		{
			day=day+29;
		} 
		else
		{
			day=day+28;
		}
		break;
		
		default:
		day=day+30;
		break;
	}
}

	if(day>6)
	day=day%7;

switch(month) 
{
	case 1:
	daycount=31;
	printf("January\n"); 
	break;
			
	case 2: 
	if ( (year%400==0) || ( (year%4==0)&&(year%100!=0) ) )
	daycount=29;
	else
	daycount=28;
	break;
			
	case 3:
	daycount=31;
	printf("March\n");			 
	break;
	
	case 4:
	daycount=30;
	printf("April\n");
	break;
	
	case 5: 
	daycount=31;
	printf("May\n");
	break;
	
	case 6:
	daycount=30;
	printf("June\n");
	break;
	
	case 7:
	daycount=31;
	printf("July\n");		
	break;
	
	case 8: 
	daycount=31;
	printf("August\n");
	break;
	
	case 9:
	daycount=30;
	printf("September\n");
	break;
	
	case 10: 
	daycount=31;
	printf("Otober\n");
	break;
	
	case 11:
	daycount=30;
	printf("November\n");
	break;
	
	case 12: 
	daycount=31;
	printf("December\n");
	break;

}
	printf("  SUN  MON  TUE  WED  THU  FRI  SAT\n");
	
	for (i=0; i<day; i++)
		printf("%5s"," ");
	
	int count;
	for(i=1,count=day+1 ; i<=daycount ; i++,count++)
		{
		printf("%5d",i); 
		if (count % 7 == 0)
			printf("\n");
		}

	printf("\n");
}




else
{
int month,daycount;
for(month=1;month<=12;month++)
{
int year = atoi(argv[1]);
        int i,j;
        int day=1;
        for(i=1900;i<year;i++)
        {

                if ( (i%400==0) || ( (i%4==0)&&(i%100!=0) ) )
                day=day+2;
                else
                day++;


                if(day>6)
                day=day%7;
        }

	for(j=1;j<month;j++)
	{
	switch(j)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
		day=day+31;
		break;
					
		case 2: 
		if ( (year%400==0) || ( (year%4==0)&&(year%100!=0) ) )
		{
			day=day+29;
		} 
		else
		{
			day=day+28;
		}
		break;
		
		default:
		day=day+30;
		break;
	}
	}		

	if(day>6)
	day=day%7;

	switch(month) 
	{
	case 1:
	daycount=31;
	printf("January\n"); 
	break;
			
	case 2: 
	if ( (year%400==0) || ( (year%4==0)&&(year%100!=0) ) )
	{
	daycount=29;
	printf("February\n"); 
	}
	else
	{
	daycount=28;
	printf("February\n");
	}
	break;		
	case 3:
	daycount=31;
	printf("March\n");			 
	break;
	
	case 4:
	daycount=30;
	printf("April\n");
	break;
	
	case 5: 
	daycount=31;
	printf("May\n");
	break;
	
	case 6:
	daycount=30;
	printf("June\n");
	break;
	
	case 7:
	daycount=31;
	printf("July\n");		
	break;
	
	case 8: 
	daycount=31;
	printf("August\n");
	break;
	
	case 9:
	daycount=30;
	printf("September\n");
	break;
	
	case 10: 
	daycount=31;
	printf("Otober\n");
	break;
	
	case 11:
	daycount=30;
	printf("November\n");
	break;
	
	case 12: 
	daycount=31;
	printf("December\n");
	break;

	}
	printf("  SUN  MON  TUE  WED  THU  FRI  SAT\n");
	
	for (i=0; i<day; i++)
	printf("%5s"," ");

	int count;
	for(i=1,count=day+1 ; i<=daycount ; i++,count++)
	{
	printf("%5d",i); 
	if (count % 7 == 0)
		printf("\n");
	}	
	printf("\n");
}
	}
}
