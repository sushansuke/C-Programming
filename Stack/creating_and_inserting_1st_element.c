#include <stdio.h>
#define MAX 10
int main() {
              int stack[MAX];
              int top=-1;
              int value;
              if(top== MAX-1)
              {
                printf("stack is overflowed");
              }
              else{
                printf("Enter the element to be inserted in stack: ");
                scanf("%d",&value);
                top++;
                stack[top]=value;
                printf("The element inserted in stack is: %d",stack[top]);
              printf("\n %d",stack[top]);
              }
              

 return 0;             
}