            //12. POSITION OF THE MAX
            int main(){
            int row,col;
            printf("Enter rows and columns : ");
            scanf("%d %d",&row,&col);

            int M[row][col];
            for(int i=0; i<row; i++)
            {
               for(int j=0; j<col; j++)
               {
                   printf("M[%d][%d] = ",i,j);
                   scanf("%d",&M[i][j]);
               }
            }

            int largestt = M[0][0];
            int maxRow = 0;
            int maxCol = 0;

            for(int i=0; i<row; i++)
            {
                for(int j=0; j<col; j++)
                {
                    if(M[i][j]>largestt)
                    {
                        largestt = M[i][j];
                        maxRow = i;
                        maxCol = j;
                    }
                }
            }
            printf("The largest element = %d is at position (%d,%d)\n",largestt,maxRow,maxCol);
return 0;
            }





