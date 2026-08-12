#include <stdio.h>
int main() {
        int num[5]={};
        int a,key=0,sum=0;
        

        
        for(a=0;a<=4; a++)
        {   int b;
            printf("\n Enter the Number");
            scanf("%d",&b);
            num[a]=b;
        
        }
        for(a=0;a<=4;a++)
        {
             key=key+sum;
             sum=num[a];
        } 
        printf("The sum total of all elements is %d ",key);
        return 0 ;
    }