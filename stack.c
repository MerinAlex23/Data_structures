#include <stdio.h>
#include <stdlib.h>

  int stack[15],top=-1;
  void push()
  {
    int x;
    printf("enter data ");
  scanf("%d",&x);
    if(top==14){
      printf("stack overflow ");

    }
    else{
      top++;
      stack[top]=x;
    }

  }


  int pop(){

    int item;
    if(top==-1){

      printf("stack underflow \n");
    }
    else{
      item=stack[top];
      top--;
      printf("popped item is %d ",item);
    }
  }
  //get topmost elements
  void peek(){

    if(top==-1){
      printf("empty stack ");
  }
  else
  { printf("topmost element is %d",stack[top]);
  }
  }

void display(){
  int i;
  for(i=top;i>=0;i--){
    printf("%d ",stack[i]);
  }
}
void main(){
  int opt;
  while(1){
    int opt;
    printf("enter your options\n");
    printf("1:push\n2:pop\n3:peek\n4:display\n5:exit\n");
    scanf("%d",&opt);
    switch(opt){
      case 1:
      push();
      break;
      case 2:
      pop();
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
