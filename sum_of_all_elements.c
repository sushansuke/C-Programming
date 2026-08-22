#include <stdio.h>
int main() {
    int ary[50][50],sum=0,n=0,i,j,r,c,s=0;
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
 //Loop for Sum
        for(i=0;i<=r;i++){
         for(j=0;j<=c;j++)
          {    sum=sum+n;
               n=ary[i][j];
            
          }   
               }
         
            printf(" Total sum Of elements is :%d",sum);
             

return 0;
        }