#include<iostream>
using namespace std;
void alloccurence(int *a,int n,int i,int key){
    if(i==n){
        return;
    }
    if(a[i]==key){
        cout<<i<<" ";
    }
    alloccurence(a,n,i+1,key);
}

int main(){
    int arr[100]={0};
    int n,key;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>key;
    alloccurence(arr,n,0,key);

    return 0;
}