#include<iostream>
using namespace std;
void increasingorder(int n){
    if(n==0)return;

    increasingorder(n-1);
    cout<<n<<endl;
}

int main(){
    int n;
    cin>>n;
    increasingorder(n);


    return 0;
}