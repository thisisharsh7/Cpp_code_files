#include<iostream>
using namespace std;
int fast_power(int a,int b){
    if(b==0){
        return 1;
    }
    int smallpower=fast_power(a,b/2);
    smallpower*=smallpower;
    if(a%2){
        return smallpower*a;
    }else{
        return smallpower;
    }
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<fast_power(a,b);

    return 0;
}
