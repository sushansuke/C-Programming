#include <stdio.h>
int main() {
    int ary[50][50],sum=0,i,j,r,c;
    int n=0;

    printf("Enter the Number of rows:");
    scanf("%d",&r);
    printf("Enter the number of Columns:");
    scanf("%d",&c);
    printf("Enter the element row wise : \n");
    for(i=0;i<r;i++){
         for(j=0;j<c;j++)
         {
            scanf("%d",&ary[i][j]);
         }
                    }
                    // loop for matrix display

        printf("\nThe matrix we entered \n");
        for(i=0;i<r;i++)
        {
            printf("\n");
         for(j=0;j<c;j++)
         {
            printf("  %d  ",ary[i][j]);
         }
         }  
         // conditon to check if sum is possible or not 
         if(i==j)
         {   
            // loop for diagoonal sum
            for(i=0;i<r;i++)
                {
                    sum+=ary[i][i];
                }  printf("\nThe sum of the diagonal elements is = %d",sum);

             //loop for  secondary diagonal sum 
                for(i=(r-1);i>=0;i--)
                {
                    sum+=ary[n][i];
                    n+=1;
                }  printf("\nThe sum of the  secondarydiagonal elements is = %d",sum);
        } else {
                    printf("\n The matrix is not a square matrix \n  Diagonal and Secondary diagonal sum is not possible");
                }
                return 0;
                }
            
            
                    