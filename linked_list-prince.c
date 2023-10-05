#include<stdio.h>
#include<stdlib.h>
typedef struct node {
  int data;
  struct node *next;  //self refreantial structure
}node;
struct node *Head;
void create();
void preorder();
void insertAtBeg();
void insertAtMiddleAft();
void insertAtMiddleBef();
void insertAtEnd();
void deleteFromBeg();
void deleteFromMiddle();

// Main Function
int main() {
    create();
    preorder();
    insertAtBeg();
    preorder();
    insertAtMiddleAft();
    preorder();
    insertAtMiddleBef();
    preorder();
    insertAtEnd();
    preorder();
    deleteFromBeg();
    preorder();
    deleteFromMiddle();
    preorder();
return 0;
}


void create() {
    struct node *temp=NULL,*ptr=NULL;
    int m,p;
    do {
        temp=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data :- ");
        scanf("%d",&m);
        temp->data=m;
        temp->next=NULL;
        if(Head==NULL)
        Head=temp;
        else {
            ptr=Head;
            while(ptr->next != NULL) {
                ptr=ptr->next;
            }
                ptr->next=temp;    
        }
        printf("want more press 1 else 0 :- ");
        scanf("%d",&p);
    }
    while(p==1);
}

void preorder() {
    struct node *ptr;
    ptr=Head;
    printf("preordering the linked list :- \n");
    while(ptr != NULL) {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}

void insertAtBeg() {
    struct node *ptr=NULL,*temp=NULL;
    int m;
    printf("\n\nInserton at beggining :- \n");
    printf("Enter the data you want to insert at beggining :- ");
    scanf("%d",&m);
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=m;
    temp->next=Head;
    Head=temp;
}

void insertAtMiddleAft() {
    struct node *ptr=NULL,*temp=NULL;
    int m,p;
    printf("\n\nInserion at middle(After) :- \n");
    printf("Enter the value after which you want to insert :- ");
    scanf("%d",&p);
    printf("Enter the value to be inserted :- ");
    scanf("%d",&m);
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=m;
    temp->next=NULL;
    ptr=Head;
    while(ptr->data != p) 
    ptr=ptr->next;
    temp->next=ptr->next;
    ptr->next=temp;
}

void insertAtMiddleBef() {
    struct node *ptr=NULL,*temp=NULL;
    int m,p;
    printf("\n\nInsertion at middle(Before) :- \n");
    printf("Enter the value before which you want to insert :- ");
    scanf("%d",&p);
    printf("Enter the value to be inserted :- ");
    scanf("%d",&m);
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=m;
    temp->next=NULL;
    ptr=Head;
    while(ptr->next->data != p)
    ptr=ptr->next;
    temp->next=ptr->next;
    ptr->next=temp;
}

void insertAtEnd() {
    struct node *ptr=NULL,*temp=NULL;
    int m;
    printf("\n\nInsertion at end :- \n");
    printf("Enter the value to be insert at end :- ");
    scanf("%d",&m);
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=m;
    temp->next=NULL;
    ptr=Head;
    while (ptr->next != NULL) 
    ptr=ptr->next;
    ptr->next=temp;
}

void deleteFromBeg() {
    struct node *ptr=NULL;
    printf("\n\nDeleting from beggining :- \n");
    ptr=Head;
    Head=ptr->next;
    free(ptr);
}

void deleteFromMiddle() {
    struct node *ptr=NULL,*temp=NULL,*tr=NULL;
    int m;
    printf("\n\nDeleting from middle :- \n");
    printf("Enter the data you want to delete :- ");
    scanf("%d",&m);
    ptr=Head;
    while(ptr->next->data != m) 
        ptr=ptr->next;
        tr=ptr->next;
    temp=ptr->next->next;
    ptr->next=temp;
    free(tr);
}