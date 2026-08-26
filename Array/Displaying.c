#include <stdio.h>
int main() {
        int num[2][5]={{0,1,2,3,4},{9,8,7,6,5}};
        int a;
        int b;
        for(a=0;a<=1; a++)
        
        {   printf("\n");
            for(b=0;b<=4;b++){
            printf(" %d  ",num[a][b]);
        }
        } 
        return 0;
    }