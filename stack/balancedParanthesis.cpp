#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool isValid(string str){
    stack<char> s;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='('){
            s.push(str[i]);
        }else if(str[i]==')'){
            if(s.empty() or s.top()!='('){
                return false;
            }
            s.pop();
        }
    }
    return s.empty();
}
int main(){
    cout<<isValid("(())()");

    return 0;
}