#include<stdio.h>
#include<stdlib.h>

struct node {
    int coff;
    int pow;
    struct node *next;
}node;

void create(struct node **);
void preorder(struct node *);
void add(struct node**,struct node * ,struct node*);


int main() {
struct node *poly1=NULL,*poly2=NULL,*result=NULL;
create(&poly1);
printf("preordering 1st polynomial :- \n");
preorder(poly1);
printf("\n");
printf("\ncreating 2nd poly \n");
create(&poly2);
printf("preordering 2nd polynomial :-\n");
preorder(poly2);
add(&result,poly1,poly2);
printf("\n\npreordering the summation :- \n");
preorder(result);
return 0;
}

void create(struct node **ptr) {
    struct node *temp=NULL,*tr=NULL,*new=NULL;
    int co,po,p;

    do {
        tr=(struct node*)malloc(sizeof(struct node));
        printf("Enter coffecient :- ");
        scanf("%d",&co);
        printf("enter power :- ");
        scanf("%d",&po);
        tr->coff=co;
        tr->pow=po;
        tr->next=NULL;
        if(*ptr==NULL) {
        *ptr=tr;
       // printf("%d\n",*ptr);
       // printf("%d\n",tr);
         }
        else {
            new=*ptr;
            while(new->next != NULL) {
                new=new->next;
            }
            new->next=tr;
        }
        printf("for more press 1 else 0 :- ");
        scanf("%d",&p);
    }
    while(p);
}

void preorder(struct node *head) {
    while(head != NULL) {
        printf("%dx^%d",head->coff,head->pow);
        head=head->next;
        if(head != NULL)
        printf(" + ");
    }
}

void add(struct node **head,struct node *poly1,struct node *poly2) {
    int m=poly1->pow;
    int p=m;
    struct node *a=poly1,*b=poly2;
    for(int i=1;i<=m+1;i++) {
        struct node *temp=(struct node*)malloc(sizeof(struct node));
        temp->coff=a->coff + b->coff;
        temp->pow=p;
        temp->next=NULL;
        p--;
        a=a->next;
        b=b->next;

        if(*head==NULL)
        *head=temp;
        else {
            struct node *ptr=*head;
            while(ptr->next != NULL) {
                ptr=ptr->next;
            }
            ptr->next=temp;
        }
    }
}