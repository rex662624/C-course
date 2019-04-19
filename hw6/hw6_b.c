#include "hw6_a.c"

int analyze(int c[],int a) 
{ 	int i,index=0,num=0,judge=0,s,s1,max=-1,now=-1;s=a*5,s1=s+5;
	for(i=0;i<4;i++)if(totalsuit[a][i]==5)judge=1;if(judge==1){
	while(totalrank[a][index]==0){index++;if(index==13)break;}
	for(;index<13&&totalrank[a][index]>0;index++)num++;if(num==5)return 1;}judge=0;num=0;index=0;

	for(i=0;i<13;i++)if(totalrank[a][i]==4){kind[a]=i+1; return 2;}

for(i=0;i<13;i++){if(totalrank[a][i]==2)judge+=2;if(totalrank[a][i]==3){judge+=3;}}if(judge==5){kind[a]=i;return 3;}judge=0;

	for(i=0;i<4;i++)if(totalsuit[a][i]==5){kind[a]=i+1;return 4;}
	
	while(totalrank[a][index]==0){index++;if(index==13)break;}
	for(;index<13&&totalrank[a][index]>0;index++)num++;if(num==5)
	{rear[a]=index-1;start[a]=index-5;return 5;}num=0;index=0;


	for(i=0;i<13;i++)if(totalrank[a][i]==3){kind[a]=i+1;return 6;}

	for(i=0;i<13;i++)if(totalrank[a][i]==2){num++;if(kind[a]!=1&&kind[a]<i+1){kind[a]=i+1;}else{kind[i]=1;}}if(num==2)return 7;

	for(i=0;i<13;i++)if(totalrank[a][i]==2){kind[a]=i+1;return 8;}
	
	for(i=s;i<s1;i++){now=rear[i]%13;if(now==1||now==0){rear[i]=max>rear[i]?max:rear[i];max=rear[i]%13;}
	else if(max!=1&&max!=0) {rear[a]=c[i];max=now;}}return 9;
}
void winjudge(int a[])
{

int win=a[0],deal1=0,i,draw=0,final=0,big[4]={-1,-1,-1,-1},j,count=0,max,index;
//for(i=0;i<4;i++){printf("%d ",a[i]);}printf("\n");
if(a[1]<win){win=a[1];final=1;}
if(a[2]<win){win=a[2];final=2;}
if(a[3]<win){win=a[3];final=3;}

for(i=0;i<4;i++)if(win==a[i])deal1++;if(deal1>1){draw=1;}

if(draw==1)
{	
	switch(win)
	{

	case 1:
	
	max=0;for(i=0;i<5;i++){if(rear[i]>rear[max]){max=i;count++;}}final=max;break;

	case 2:max=kind[0];for(i=0;i<4;i++){if(kind[i]>max||kind[i]==1)final=i;}break;
	case 3:max=kind[0];for(i=0;i<4;i++){if(kind[i]>max||kind[i]==1)final=i;}break;
	case 4:for(i=0;i<5;i++){if(win==a[i]){for(j=0;j<13;j++){if(totalrank[i][j]!=0&&(j+1)>big[i])big[i]=j+1;}}}
	max=0;for(i=0;i<5;i++){if(big[i]>max){max=big[i];index=i;}else if(big[i]==max)count++;}
	max=-1; if(count>1){for(i=0;i<5;i++)if(max<kind[i])max=kind[i];}else{final=index;} break;
	case 5:max=0;for(i=0;i<5;i++){if(rear[i]>rear[max]){max=i;count++;}}
	final=max;break;
 	case 6:max=kind[0];for(i=0;i<4;i++){if(kind[i]>max){max=kind[i];final=i;}if(kind[i]==1){final=i;break;}}break;
	case 7:max=kind[0];for(i=0;i<4;i++){if(kind[i]>max){max=kind[i];final=i;}if(kind[i]==1){final=i;break;}}break;
 	case 8:max=kind[0];for(i=0;i<4;i++){if(kind[i]>max){max=kind[i];final=i;}if(kind[i]==1){final=i;break;}}break;
	case 9:

	max=-1;final=-1;for(i=0;i<4;i++){if(rear[i]>max){max=rear[i];final=i;}
	if(rear[i]%13==1||rear[i]%13==0)
	{
	if(max%13==1||max%13==0){if(rear[i]>max)max=rear[i];final=i;}else {max=rear[i];final=i;}
	}
					}break;
	}


}

printf("Winner: P%d",final+1);

switch(win)
{
case 1: printf("--straight flush\n");break;
case 2: printf("--four of a kind\n");break;
case 3: printf("--full house\n");break;
case 4: printf("--flush\n");break;
case 5: printf("--straight\n");break;
case 6: printf("--three of a kind\n");break;
case 7: printf("--two pairs\n");break;
case 8: printf("--pair\n");break;
case 9: printf("--high card\n");break;
}



}

void print(char a1[],char a2[])
{
	int i,j,count=0;
	for(j=1;j<=4;j++){printf("P%d: ",j);for(i=0;i<5;i++){printf("%c%c ",a1[count],a2[count]);count++;}printf("\n");}
}

