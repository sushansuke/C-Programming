#include <stdio.h>
int main() {
    int ary[50][50],sum=0,i,j,r,c;
    int found=0;
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
        for(i=0;i<r;i++){
            printf("\n");
         for(j=0;j<c;j++)
         {
            printf("  %d  ",ary[i][j]);
         }
             } 
 //Loop for Sum
        for(i=0;i<r;i++){
            sum=0;
         for(j=0;j<c;j++)

          {    sum+=ary[i][j];
               
            
          } 
          printf("\nSum Of the %d row = %d;",i+1,sum); 
           
               }
             

return 0;
        }