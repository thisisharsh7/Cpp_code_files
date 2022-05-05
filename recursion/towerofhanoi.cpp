#include<iostream>
using namespace std;
void movedisc(int n,char a,char b,char c){
    if(n=0){
        return,
    }
    movedisc(n-1,a,c,b);
    cout<<n<<" move from "<<a<<" to "<<b;
    movedisc(n-1,a,b,c);
}

int main(){
    int n;
    cin>>n;
    movedisc(n,'A','B','C');


    return 0;
}