#include  <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
  };
int main () {
struct Node *head;
struct Node *temp;

head=malloc(sizeof(struct Node));
head->data= 10;


temp=malloc(sizeof(struct Node ));
temp->data=20;
head->next=temp;

temp=malloc(sizeof(struct Node ));
temp->data=30;
head->next->next=temp;

temp=malloc(sizeof(struct Node ));
temp->data=40;
head->next->next->next=temp;
 temp->next=NULL;
 temp=head;

 //deletion from begining
 head=head->next;
free(temp);

temp=head;

//displaying


while(temp!=NULL)
{
      printf(" \n %d",temp->data);
         temp=temp->next;
}
 return 0;
}