#include <stdio.h>
#include <stdlib.h>
int queue[5];
int front=-1;
int rear=-1;
void enqueue(){
  int x;
  printf("enter data ");
  scanf("%d",&x);
  if(rear==4){
    printf("overflow ");

  }
  else if(front==-1 && rear==-1){
    front=0;
    rear=0;
queue[rear]=x;
  }
  else{

    rear++;
queue[rear]=x;
  }
}
void dequeue(){
  if(front==-1 && rear==-1){
    printf("underflow ");
  }
  else if(front==rear){
    front=rear=-1;
  }
  else{
    printf("dequeued element is %d",queue[front]);
    front++;
  }
}
void display(){
  int i;
  if(front==-1&&rear==-1){
    printf("nothing to display");

  }
  else{
    for(i=front;i<=rear;i++){
      printf("%d ",queue[i]);
    }
  }
}
void peek(){
  if(front==-1&&rear==-1){
    printf("empty queue ");
  }
  else
  printf("%d ",queue[front]);
}
void main(){

  while(1){
    int opt;
    printf("enter your options\n");
    printf("1:enqueue\n2:dequeue\n3:peek\n4:display\n5:exit\n");
    scanf("%d",&opt);
    switch(opt){
      case 1:
      enqueue();
      break;
      case 2:
      dequeue();
      break;
      case 3:
      peek();
      break;
      case 4:
      display();
      break;
      case 5:
      exit(0);
    }
  }
}
