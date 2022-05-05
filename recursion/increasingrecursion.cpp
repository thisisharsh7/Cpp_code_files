#include<iostream>
using namespace std;
void decreasingorder(int n){
    if(n==0)return;
    cout<<n<<endl;
    decreasingorder(n-1);
}

int main(){
    int n;
    cin>>n;
    decreasingorder(n);

    return 0;
}