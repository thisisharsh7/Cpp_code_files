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
            temp=temp->next;
            jmp++;
        }
        node*n=new node(d);
        n->next=temp->next;
        temp->next=n;
        return;
    }
}
void deleteHead(node*head){
    if(head==NULL){
        return;
    }
    node*temp=head->next;
    delete head;
    head=temp;
}
void deleteTail(node*head){
    node*prev=NULL;
    node*temp=head;
    while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;
    }
    delete temp;
    prev->next=NULL;
}
void deleteInMiddle(node*head,int p){
    node*prev=NULL;
    node*temp=head;
    int jmp=1;
    while(jmp<=p-1){
        jmp++;
        prev=temp;
        temp=temp->next;
    }
    prev->next=temp->next;
    delete temp;
    head=prev;
}
bool search(node*head,int key){
    if(head==NULL){
        return false;
    }
    while(head!=NULL){
        if(head->data==key){
            return true;
        }
        head=head->next;
    }
}
bool recursiveSearch(node*head,int key){
    if(head==NULL){
        return false;
    }else if(head->data==key){
        return true;
    }else{
        return recursiveSearch(head->next,key);
    }
}
void reverse(node*head){
    node*prev=NULL;
    node*c=head;
    node*n;
    while(c!=NULL){
        n=c->next;
        c->next=prev;
        prev=c;
        c=n;
    }
    head=prev;
}
node* recursiveReverse(node*head){
    if(head==NULL or head->next==NULL){
        return head;
    }
    node*shead= recursiveReverse(head->next);
    // node*temp=shead;
    // while(temp->next!=NULL){
    //     temp=temp->next;
    // }
    head->next->next=head;
    head->next=NULL;
    return shead;
}

node* take_input(){
    int d;
    cin>>d;
    node*head=NULL;
    while(d!=-1){
        insertAtHead(head,d);
        cin>>d;
    }
    return head;
}
void print(node*head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<endl;
}
istream& operator>>(istream& is,node*&head){
    head=take_input();
    return is;
}
ostream& operator<<(ostream& os,node*head){
    print(head);
    return os;
}
int main(){
    node*head=NULL;
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,2);
    insertAtHead(head,1);
    insertAtTail(head,6);
    // print(head);
    // node*head=take_input();
    // node*head;
    // cin>>head;
    // cout<<head;
    insertInMiddle(head,3,2);
    // deleteHead(head);
    // deleteTail(head);
    deleteInMiddle(head,2);
    cout<<head;
    cout<<recursiveReverse(head);
    // reverse(head);
    // cout<<head;
    // cout<<recursiveSearch(head,4);
    // cout<<recursiveSearch(head,10);
    // cout<<recursiveSearch(head,9);
    return 0;
}