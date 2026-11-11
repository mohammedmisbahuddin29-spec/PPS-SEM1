#include<stdio.h>
void main()
{
int A[2] [2],B[2][2],C[2][2],i,j;
printf("Enter values of  matrix A :");
for(i=0;i<2;i++)
for(j=0;j<2;j++)
scanf("%d",&A[i] [j]);
printf("enter 4 values for  matrix B:");
for(i=0;i<2;i++)
for(j=0;j<2;j++)
scanf("%d",&B[i] [j]);
printf("Sum of matrix is:");
for(i=0;i<2;i++)
for(j=0;j<2;j++)
C[i][j]=A[i][j]+B[i][j]
printf("Addition=\n");
for(i=0;i<2;i++)
{

     for(j=0;j<2;j++)
     printf("%d\t",C[i][j]);
     printf("\n");
}
}

