#include<iostream>
using namespace std;
int firstOcc(int *arr,int n,int key){
    if(n==0){
        return -1;
    }if(arr[0]==key){
        return 0;
    }
    int i=firstOcc(arr+1,n-1,key);
    if(i==-1){
        return -1;
    }else{
        return i+1;
    }
}
int linearsearch(int *arr,int i,int n,int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return linearsearch(arr,i+1,n,key);
}
int main(){
    int arr[100]={0};
    int n,key;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>key;
    cout<<firstOcc(arr,n,key);

    return 0;
}