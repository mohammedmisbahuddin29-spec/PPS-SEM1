#include<stdio.h>
void main()
{

    int M[5][5],i,j,z=0,nz=0;
    printf("enter 5x5 matrix elements");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&M[i][j]);
            if (M[i][j]==0)
             z++;
            else
            nz++;
        }
    }
    printf("\n matrix is=\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
         printf("%d",M[i][j]);
        printf("\n");
    }
    printf("no.of zeros=%d",z);
    printf("\n no. of non zero elements=%d",nz);
    if(z>nz)
        printf("\nmatrix is sparse");
    else
        printf("\ngiven is not a sparse");
}


