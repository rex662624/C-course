#include "hw6_b.c"

int main(int argc,char *argv[])
{
int card[52];int winner[4];
int i;for(i=0;i<52;i++)card[i]=i+1;//initilize all card
shuffle(card);
char rank[20],suit[20];
deal(card,rank,suit);
//for(i=0;i<20;i++)printf("%c ",suit[i]); printf("\n\n");
//for(i=0;i<20;i++)printf("%c ",rank[i]); printf("\n\n");
//int j;
//for(i=0;i<4;i++){for(j=0;j<13;j++)printf("%d",totalrank[i][j]);printf("\n");}printf("\n");
//for(i=0;i<4;i++){for(j=0;j<4;j++)printf("%d ",totalsuit[i][j]);printf("\n");}
print(rank,suit);
for(i=0;i<4;i++)winner[i]=analyze(card,i);

winjudge(winner);

}
