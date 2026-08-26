#include <stdio.h>
int main() {
    int ary[50][50],i,j,r,c;
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
            printf("\nThe main diagonal elements are : ");
            for(i=0;i<r;i++)
                {
                  printf("  %d ",ary[i][i]);
  
                }  
             //loop for  secondary diagonal sum 
             printf("\nThe secondary diagonal elements are : ");
                for(i=(r-1);i>=0;i--)
                {
                    printf(" %d ",ary[n][i]);
                    n+=1;
                }  
        } else {
                    printf("\n The matrix is not a square matrix ");
                
                }
            return 0;}
            
        
                    