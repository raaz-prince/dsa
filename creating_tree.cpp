#include<iostream>
#include<queue>

using namespace std;

typedef struct tree{
  struct tree *lchild;
  int data;
  struct tree *rchild;
}tree;
  
tree *root;

void create();
void preorder(tree*);

int main() {
    
    create();
    cout<<endl<<"preordering tree in preorder :- "<<endl;
    preorder(root);

return 0;
}

void create() {
    tree *p=0,*t=0;
    queue<tree*> q;
    int x;
    cout<<"enter root value :- ";
    cin>>x;
    root =new tree;
    root->data=x;
    root->lchild = root->rchild =0;
    q.push(root);

    while(!q.empty()) {
       p=q.front();
       q.pop();
       cout<<"enter left child of "<<p->data<<" :- ";
       cin>>x;
       if(x != -1) {
        t=new tree;
        t->data=x;
        t->lchild =t->rchild=0;
        p->lchild=t;
        q.push(t);
       }
       cout<<"enter right child of "<<p->data<<" :- ";
       cin>>x;
       if(x != -1 ) {
        t=new tree;
        t->data=x;
        t->lchild = t->rchild =0;
        p->rchild=t;
        q.push(t);
       }
    }
}

void preorder(tree *node) {
    if(node) {
        cout<<node->data<<"\t";
        preorder(node->lchild);
        preorder(node->rchild);
    }
}