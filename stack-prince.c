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

int main() {
    create();
    push();
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
    int i;
    char ch;
    stack *pr=head;
    do {
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
      
    printf("want more (y/Y) :- ");
    fflush(stdin);
    scanf("%c",&ch);
    pr=pr->next;
   } while(ch=='y' || ch=='y');
    
}

void preorder() {
    stack *ptr=top;
    while(ptr != NULL) {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}