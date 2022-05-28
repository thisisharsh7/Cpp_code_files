#include<iostream>
using namespace std;
class Stack{
    private:
    int cs;
    int ms;
    int *arr;
    public:
    Stack(int n){
        this->ms=n;
        arr=new int[n];
        cs=-1;
    }
    bool empty(){
        return cs==-1;
    }
    void push(int d){
        if(ms-cs>1){
            cs++;
            arr[cs]=d;
        }else{
            cout<<"Stack Overflow"<<endl;
        }
    }
    int top(){
        if(!empty()){
            return arr[cs];
        }
    }
    void pop(){
        if(!empty()){
            cs--;
        }else{
            cout<<"Stack underflow"<<endl;
        }
    }


};

int main(){
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }


    return 0;
}