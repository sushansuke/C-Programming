#include <stdio.h>
int main() {
    int ary[50][50],n,i,j,r,c;
    int found=0;
    printf("Enter the Number of rows:");
    scanf("%d",&r);
    printf("Enter the number of Columns:");
    scanf("%d",&c);
    printf("Enter the element row wise :");
    for(i=0;i<r;i++){
         for(j=0;j<c;j++)
         {
            scanf("%d",&ary[i][j]);
         }
                    }
        printf("Enter the Element u want to Search:");
        scanf("%d",&n);
        for(i=0;i<r;i++){
         for(j=0;j<c;j++)
          {
            if (n==ary[i][j])
            {
                found=1;
              
             }
            else { 
                found=0;
                 }
          }               }
         if (found=1){
            printf("Element Found :%d",n);
                     }
         else{
            printf("Not Found");
             }

return 0;
        }