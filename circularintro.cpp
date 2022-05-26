#include<iostream>
using namespace std;
class node{
    public: 
    int data;
    node*next;
    node(int d){
        data=d;
        next=NULL;
    }
};
void insert(node*&head,int d){
    node*n=new node(d);
    node*temp=head;
    n->next=head;
    if(temp==NULL){
        n->next=n;
    }else{
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=n;
    }
    head=n;
}
void print(node*head){
    node*temp=head;
    while(temp->next!=head){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data;
    cout<<endl;
}
node* getNode(node*head,int d){
    node*temp=head;
    while(temp->next!=head){
        if(temp->data==d){
            return temp;
        }
        temp=temp->next;
    }
    if(temp->data==d){
        return temp; 
    }
    return NULL;
}
void delNode(node*head,int d){
    node*del=getNode(head,d);
    node*temp=head;
    while(temp->next!=del){
        temp=temp->next;
    }
    temp->next=del->next;
    delete del;
    head=temp;
}

    
int main(){
    node*head=NULL;
    insert(head,5);
    insert(head,4);
    insert(head,3);
    insert(head,2);
    insert(head,1);
    print(head);
    delNode(head,3);
    print(head);
    delNode(head,2);
    print(head);
    return 0;
}