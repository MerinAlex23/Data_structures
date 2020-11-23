#include <stdio.h>
#include <stdlib.h>

int main()

{
//  printf("hello");

  struct node{
    int data;
    struct node *next;
  };

  struct node *head,*newnode,*temp;
  head=0;
  int choice=1;
  int count=0;
  while(choice){
newnode=(struct node*)malloc(sizeof(struct node));

  printf("enter data");

  scanf("%d",&newnode->data);

  newnode->next=0;

  if(head==0){
    head=temp=newnode;

  }
  else{
  temp->next=newnode;
  temp=newnode;
  }
  count++;
  printf("do you want to continue(0,1)\n");
  scanf("%d",&choice);
  }
  printf("the items are ");
  temp=head;
  while(temp!=0){
    printf("%d",temp->data);
  temp=temp->next;
  }
  printf("\nnumber of items = %d",count);
return 0;
}
