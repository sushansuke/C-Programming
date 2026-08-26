#include <stdio.h>
int main() {
    int ary1[50][50],n,i,j,r,c;
    int ary2[50][50];
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
        // loop for matrix display
        printf("\nThe matrix we entered \n");
        for(i=0;i<r;i++){
            printf("\n");
         for(j=0;j<c;j++)
         {
            printf("  %d  ",ary1[i][j]);
         }
             } 

        //loop for Transpose
        for(i=0;i<r;i++){
         for(j=0;j<c;j++)
         {
            ary2[j][i]=ary1[i][j];
         }
             } 
         // Loop for Transpose printing
         printf("\nTranspose matrix \n");
                  for(i=0;i<c;i++){
            printf("\n");
         for(j=0;j<r;j++)
         {
            printf("  %d  ",ary2[i][j]);
         }
             } 
         return 0;
                }