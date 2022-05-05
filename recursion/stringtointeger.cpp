#include<iostream>
#include<cstring>
using namespace std;
string words[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void stringinteger(int n){
    if(n==0){
        return;
    }
    stringinteger(n/10);
    int digit=n%10;
    cout<<words[digit]<<" ";
    
}

int main(){
    int n;
    cin>>n;
    stringinteger(n);

    return 0;
}