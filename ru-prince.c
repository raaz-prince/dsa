#include<stdio.h>
#include<stdlib.h>

typedef struct stack {
  int data;
  struct stack *next,*top;
}stack;

stack *head,*top;
void create();
void push();
void preorder();
void pop();

int main() {
    create();
    push();
    preorder();
    pop();
    preorder();
return 0;
}

void create() {
    int i;
    for(i=1;i<=5;i++) {
      stack *temp=(stack*)malloc(sizeof(stack));
      temp->next=NULL;
      if(head==NULL)
      head=temp;
      else {
        stack *ptr=head;
        while(ptr->next != NULL) 
        ptr=ptr->next;
        ptr->next=temp;
      }
    }
}

void push() {
    int i,k;
    char ch;
    printf("Enter how many push do you want :- ");
    scanf("%d",&k);
    for(int p=1;p<=k;p++) {
    printf("enter the data :- ");
    scanf("%d",&i);
    if(top==NULL){
        top=head;
        head=top->next;
        top->next=NULL;
        top->data=i;
    }
    else{
        stack *ptr=head;
        head=head->next;
        ptr->next=NULL;
        ptr->data=i;
        ptr->next=top;
        top=ptr;
    }
      
    }
    
}

void preorder() {
    stack *ptr=top;
    printf("\n\npreordering the stack :- \n");
    while(ptr != NULL) {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}

void pop() {
    if(top==NULL) {
        printf("the stack is empty \n ");
        return ;
    }
else if(head==NULL) {
    head=top;
    top=head->next;
    head->next=NULL;
}
else {
    stack *ptr=head;
    head=top;
    ptr->next=head;
    top=head->next;
}
}