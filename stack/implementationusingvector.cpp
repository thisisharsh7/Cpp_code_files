#include<iostream>
#include<vector>
using namespace std;

class Stack{
    private:
    vector<int> v;
    public:
    bool empty(){
        return v.size()==0;
    }
    void push(int d){
        v.push_back(d);
    }
    int top(){
        if(!empty()){
            return v[v.size()-1];
        }
    }
    void pop(){
        if(!empty()){
            v.pop_back();
        }
    }

};

int main(){
    Stack s;
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
