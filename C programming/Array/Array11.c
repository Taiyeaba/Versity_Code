// 11 2d array multiplies.
#include<stdio.h>
int main()
{
    int first[2][2],second[2][2],result[2][2],r1 = 2,r2 = 2,c1 = 2,c2 = 2,i,j,k,sum=0;


//taking input for first matrix
    printf("enter elements for first matrix:\n ");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("first[%d][%d]: ",i,j);
            scanf("%d",&first[i][j]);
        }
    }

//taking input for second matrix
    printf("\nenter elements for second matrix:\n ");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("second[%d][%d]: ",i,j);
            scanf("%d",&second[i][j]);
        }
    }

//multiplying matrix
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {

                sum=sum+first[i][k]*second[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
    }

//printing first matrix
    printf("\n\nfirst matrix\n");
    for(i=0;i<r1;i++)
    {
        printf("\t");
        for(j=0;j<c1;j++)
        {
            printf("%d ",first[i][j]);
        }
            printf("\n");

    }
    //printing second matrix
    printf("\n\nsecond matrix\n");
    for(i=0;i<r2;i++)
    {
        printf("\t");
        for(j=0;j<c2;j++)
        {
            printf("%d ",second[i][j]);
        }
            printf("\n");

    }
    //printing result matrix
    printf("\n\nresult matrix\n");
    for(i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
        {
            printf("%d ",result[i][j]);
        }
            printf("\n");

    }

}
