#include<iostream>
using namespace std;
int multiply(int a,int b){
    if(a==0 or b==0){
        return 0;
    }if(a==1)return b;
    if(b==1)return a;
    return multiply(a-1,b)+b;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<multiply(a,b);

    return 0;
}