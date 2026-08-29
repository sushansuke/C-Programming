#include <stdio.h>
int main() {
    int ary1[50][50],n,i,j,r,c;
    int ary2[50][50],a,b;
    int ary3[50][50];
    //entry of first matrix
    printf("For the 1st Matrix :\n");
    printf("Enter the Number of rows:");
    scanf("%d",&r);
    printf("Enter the number of Columns:");
    scanf("%d",&c);
    printf("Enter the element row wise :\n");
    for(i=0;i<r;i++){
         for(j=0;j<c;j++)
         {
            scanf("%d",&ary1[i][j]);
         }
                    }  
    // entry of second matrix
        printf("For the 2nd Matrix :\n");
    printf("Enter the Number of rows:");
    scanf("%d",&a);
    printf("Enter the number of Columns:");
    scanf("%d",&b);
    printf("Enter the element row wise :\n");
    for(i=0;i<a;i++){
         for(j=0;j<b;j++)
         {
            scanf("%d",&ary2[i][j]);
         }
                    }  
        // loop for matrix display
        printf("\nThe 1st  matrix  \n");
        for(i=0;i<r;i++){
            printf("\n");
         for(j=0;j<c;j++)
         {
            printf("  %d  ",ary1[i][j]);
         }
             } 
        printf("\nThe 2nd  matrix  \n");
        for(i=0;i<a;i++){
            printf("\n");
         for(j=0;j<b;j++)
         {
            printf("  %d  ",ary2[i][j]);
         }
             } 
        //matrix multiplication 

        if(c==a){
            for(i=0;i<r;i++)
            {   
                for(j=0;j<b;j++)
                {  for(n=0;n<c;n++)
                    {
                        ary3[i][j] += ary1[i][n]*ary2[n][j];
                    }   
              }
                
            }

        
        printf("\nThe Result  matrix  \n");
        for(i=0;i<r;i++){
            printf("\n");
         for(j=0;j<b;j++)
         {
            printf("  %d  ",ary3[i][j]);
         }  printf("\n");
             } 
            }
             else
             {
                printf("\nThe Multiplication of the given matrix is not possible ");
                printf("\n As we need (i x j)*(m x n ) where j=m  ");
            }  
        return 0;
            }