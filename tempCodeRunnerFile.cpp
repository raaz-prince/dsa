
        int m,p=1;
        cout<<"how many u want : ";
        cin>>p;
        while(p--){
            cout<<"Enter "<< p <<" data : ";
            cin>>m;
            node *p=new node(m);
            if(head == NULL) 
            head=p;
            else {
                node *t=head;
                while(t->next != NULL)
                t=t->next;
                t->next =p;
            }