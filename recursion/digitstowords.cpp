#include<iostream>
using namespace std;
string words[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void printdigits(int a){
    if(a==0){
        return;
    }
    printdigits(a/10);
    
    int digit=a%10;
    cout<<words[digit]<<" ";
}

int main(){
    int a;
    cin>>a;
    printdigits(a);

    return 0;
}