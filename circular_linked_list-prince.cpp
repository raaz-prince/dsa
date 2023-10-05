#include<iostream>
using namespace std;
class node {
    public:
 int data;
 node *next;
};
class linkedlist {
private: 
int m;
public:
node *head=NULL;
void create() {
    int a,m;
    cout<<"Enter how many node you want to create :- ";
    cin>>a;
while(a--) {
    cout<<a<<endl;
    cout<<"Enter data :- ";
    cin>>m;
    node *temp=new node;
    temp->data=m;
    if(head==NULL) {
        head=temp;
        head->next=temp;
    }
    else {
        node *ptr=head;
        while(ptr->next != head)
        ptr=ptr->next;
        ptr->next=temp;
        temp->next=head;
    }
}
}

void preorder() {
    node *ptr=head;
    cout<<"preordering the circular linkedlist "<<endl;
    if(head==NULL)
    cout<<"linked list is empty"<<endl;
    else {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
        while(ptr != head) {
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
    }
}
};
int main() {
    linkedlist a;
    a.create();
    a.preorder();
return 0;
}