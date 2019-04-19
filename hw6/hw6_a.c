#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int rear[4]={-1,-1,-1,-1},start[4]={-1,-1,-1,-1},kind[4]={-1,-1,-1,-1};
int totalsuit[4][4],totalrank[4][13]; 

void shuffle(int a[])
{
int index,i,tmp;
srand((unsigned)time(NULL));
	for(i=0;i<52;i++)
	{
	index=(rand()%52);
	tmp=a[i];
	a[i]=a[index];
	a[index]=tmp;
	}

}
void deal(int card1[],char a1[],char a2[])
{

	int i,j=0;
	char tmp;
//	for(i=0;i<50;i++)printf("%d ",card1[i]);printf("\n");
        for(i=0;i<20;)
        {
	if(i==5||i==10||i==15)j++;
        if((card1[i]-1)/13==0){a2[i]='c';totalsuit[j][0]++;}if((card1[i]-1)/13==1){a2[i]='d';totalsuit[j][1]++;}
	if((card1[i]-1)/13==2){a2[i]='h';totalsuit[j][2]++;}if((card1[i]-1)/13==3){a2[i]='s';totalsuit[j][3]++;}
	i++;
        }
	j=0;
        for(i=0;i<20;)
        {
	if(i==5||i==10||i==15)j++;
        char remain = card1[i] % 13;
        switch(remain) {
        case 0:  a1[i]='k';totalrank[j][0]++;i++;break;case 1:  a1[i]='a';totalrank[j][1]++;i++;break;
       	case 2:  a1[i]='2';totalrank[j][2]++;i++;break;case 3:  a1[i]='3';totalrank[j][3]++;i++;break;
	case 4:  a1[i]='4';totalrank[j][4]++;i++;break;case 5:  a1[i]='5';totalrank[j][5]++;i++;break;
	case 6:  a1[i]='6';totalrank[j][6]++;i++;break;case 7:  a1[i]='7';totalrank[j][7]++;i++;break;
	case 8:  a1[i]='8';totalrank[j][8]++;i++;break;case 9:  a1[i]='9';totalrank[j][9]++;i++;break;
	case 10: a1[i]='t';totalrank[j][10]++;i++;break;case 11: a1[i]='j';totalrank[j][11]++;i++;break;
        case 12: a1[i]='q';totalrank[j][12]++;i++;break;	}
        }

}

