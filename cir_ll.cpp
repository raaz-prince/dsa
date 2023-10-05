#include<iostream>
using namespace std;

class node {
    public:
    int data;
    node *next;
    node(int m) {
        data=m;
    }
};

class circularLinkedList {
    private:
    node *head =NULL;
    public:
    void create() {
        int m,j=1,r;
        cout<<"how many u want : ";
        cin>>r;
        while(r--){
            cout<<"Enter "<< j<<" data : ";
            cin>>m;
            node *p=new node(m);
            if(head == NULL) {
                head=p;
                p->next =head; 
            }
            else {
                node *t=head;
                while(t->next != head)
                t=t->next;
                t->next =p;
                p->next=head;
            }
            j++;
        };
    }

    void display()
    {
        node *ptr = head;
        cout << "preordering the circular linkedlist " << endl;
        if (head == NULL)
            cout << "linked list is empty" << endl;
        else
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
            while (ptr != head)
            {
                cout << ptr->data << " ";
                ptr = ptr->next;
            }
        }
    }
};

int main() {
circularLinkedList l;
l.create();
l.display();
return 0;
}