#include<iostream>
using namespace std;
int lastOcc(int *arr,int n,int key){
    if(n==0){
        return -1;
    }
    int i=lastOcc(arr+1,n+1,key);
    if(i==-1){
        if(arr[0]==key){
            return 0;
        }else{
            return -1;
        }
    }
    return i+1;
}
int lastocc(int *arr,int n,int key){
    if(n==0){
        return -1;
    }if(arr[n-1]==key){
        return n-1;
    }
    int i=lastocc(arr,n-1,key);
    if(i==-1){
        return -1;
    }
    return {
        i+1;
    }

}
int main(){
    int arr[100]={0};
    int n,key;
    cin>>n>>key;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int idx=lastOcc(arr,n,key);
    cout<<idx<<endl;
    
    return 0;
}