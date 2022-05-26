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
void insertAtHead(node*&head,int d){
    if(head==NULL){
        head=new node(d);
        return;
    }
    node*n=new node(d);
    n->next=head;
    head=n;
    return;
}
void insertAtTail(node*&head,int d){
    if(head==NULL){
        head=new node(d);
        return;
    }
    node*tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    tail->next=new node(d);
    return;
}
int length(node*head){
    int cnt=0;
    while(head!=NULL){
        cnt++;
        head=head->next;
    }
    return cnt;
}
void insertInMiddle(node*&head,int d,int p){
    if(head==NULL or p==0){
        insertAtHead(head,d);
        return;
    }else if(p>length(head)){
        insertAtTail(head,d);
        return;
    }else{
        int jmp=1;
        node*temp=head;
        while(jmp<=p-1){
            temp=head->next;
            jmp++;
        }
        node*n=new node(d);
        n->next=temp->next;
        temp->next=n;
        return;
    }
}
void print(node*head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
}
int main(){
    node*head=NULL;
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,2);
    insertAtHead(head,1);
    insertAtTail(head,6);
    insertInMiddle(head,3,3);
    insertInMiddle(head,0,0);

    print(head);

    return 0;
}