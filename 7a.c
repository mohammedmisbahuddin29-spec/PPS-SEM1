#include<stdio.h>
int main()
{
int S[5],i,sum=0;
printf("enter five Elements");

for( i=0;i<5;i++)
scanf("%d",&S[i]);
for(i=0;i<5;i++)
sum=sum+S[i];
printf("sum of elements=%d\n",sum);
return 0;
}
