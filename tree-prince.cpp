#include<iostream>

using namespace std;
typedef struct tree{
 struct tree *right;
 int data;
 struct tree *left;
}tree;

tree *root;

void insert(int);
void preorder(tree*);
int main() {
    int a,i;
    cout<<"Enter the no. elements you want to insert :- ";
    cin>>a;
    int key[a];
    for(i=0;i<a;i++) {
        cout<<"enter "<<i+1<<" key :- ";
        cin>>key[i];
        insert(key[i]);
    }
    cout<<"elements in array :- "<<endl;
    for(i=0;i<a;i++) 
    cout<<key[i]<<"\t";
    cout<<endl<<"\n";
    cout<<"tree :- "<<endl;
    preorder(root);
return 0;
}

void insert(int a) {
    tree *temp=0,*pt=0,*c=0;
    temp=new tree;
    temp->data=a;
    temp->left=temp->right=0;
    if(root == 0) {
        root=temp;
        return;
    }
    else {
        pt=root;
        while(pt != 0) {
            if(pt->data < a) {
            c=pt;
            pt=pt->right;
        }
        else {
            c=pt;
            pt=pt->left;
        }
        }
        if(c->data < a)
        c->right = temp;
        else 
        c->left =temp;
    }
}

void preorder(tree *temp) {
    if(temp==0)
    return;
   else {
       preorder(temp->left);
        cout<<temp->data<<"\t";
        //temp=temp->left;
    }
}