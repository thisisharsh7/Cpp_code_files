#include<iostream>
using namespace std;
class Stack{
    private:
    int n1;
    int n2;
    int* arr;
    int n;
    public:
    Stack(int d){
        this->n=d;
        n1=-1;
        n2=d;
        arr=new int[n];
    }
    bool empty(){

    }
    void push1(int d){
        if(n2-n1>1){
            n1++;
            arr[n1]=d;
        }
    }
    void push2(int d){
        if(n2-n1>1){
            n2--;
            arr[n2]=d;
        }
    }
    int pop1(){
        if(n1>=0){
           int ans=arr[n1];
           n1--;
           return ans;
        }
    }
    int pop2(){
        if(n2<n){
            int ans=arr[n2];
            n2--;
            return ans;
        }
    }

};

int main(){


    return 0;
}