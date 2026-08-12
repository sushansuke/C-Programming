#include <stdio.h>
int main() {
        int num[5]={};
        int a;

        for(a=0;a<=4; a++)
        {   int b;
            printf("\n Enter the Number");
            scanf("%d",&b);
            num[a]=b;
        
        } 
        for(a=0;a<=4; a++)
        {
            printf("\n %d  ",num[a]);
        } 

        return 0;
    }