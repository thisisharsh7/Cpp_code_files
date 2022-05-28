#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int> &s1,int x){
    if(s1.empty()){
        s1.push(x);
        return;
    }
    int data=s1.top();
    s1.pop();
    insertAtBottom(s1,x);
    s1.push(data);
}
void reverse(stack<int> &s){
    if(s.empty()){
        return;
    }
    int d=s.top();
    s.pop();
    reverse(s);
    insertAtBottom(s,d);
}

int main(){
    stack<int> s;
    for(int i=1;i<=4;i++){
        s.push(i*i);
    }
    reverse(s);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

    return 0;
}