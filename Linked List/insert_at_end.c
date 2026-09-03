#include  <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
  };
int main () {
struct Node *head;
struct Node *temp;
struct Node *new;

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

//insert at end
new=malloc(sizeof(struct Node));
new->data=40;
new->next=NULL;

temp=head;

//find the  last Node 

while(temp->next!=NULL)
{
         temp=temp->next;
} 
temp->next=new;

temp=head;

while(temp!=NULL)
{
    printf("\n %d",temp->data);     
    temp=temp->next;
}

 return 0;
}


