#include<iostream>
using namespace std;

int main(){
    int arr[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int csum=0;
    int msum=0;
    for(int i=0;i<n;i++){
        csum+=arr[i];
        if(csum<0){
            csum=0;
        }
        msum=max(csum,msum);
    }
    cout<<msum;

    return 0;
}