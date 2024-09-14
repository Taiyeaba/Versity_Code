            //14.SUM OF ELEMENTS IN EACH ROW
            int main(){
            int row1,col1 , rowSum=0;
            printf("Enter  rows and columns : ");
            scanf("%d %d",&row1,&col1);

            int SUM[row1][col1];
            printf("\nEnter Elements : \n");
            for(int i=0; i<row1; i++)
            {
                for(int j=0; j<col1; j++)
                {
                    printf("S[%d][%d] = ",i,j);
                    scanf("%d",&SUM[i][j]);
                }
            }

            printf("\nMatrix : \n");
            for(int i=0; i<row1; i++)
            {
                for(int j=0; j<col1; j++)
                {
                    printf("%d ",SUM[i][j]);
                }
                printf("\n");
            }
            printf("\n");

            for(int i=0; i<row1; i++)
            {
                int rowSum=0;
                for(int j=0; j<col1; j++)
                {
                    rowSum = rowSum + SUM[i][j];
                }

                printf("Sum of row %d = %d\n",i+1,rowSum);
            }
          return 0;
            }


