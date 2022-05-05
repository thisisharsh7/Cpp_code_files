#include<iostream>
using namespace std;
int power(int p,int b){
    if(b==0)return 0;
    if(p==0){
        return 1;
    }if(p==1){
        return b;
    }
    return power(p-1,b)*b;
}

int main(){
    int p,b;
    cin>>b>>p;
    cout<<power(p,b);

    return 0;
}