#include<iostream>
using namespace std;

bool binarysearch(int arr[],int s,int e,int key){
    if(e>s){
    int mid=(s+e)/2;
    if(arr[mid]==key){
        return true;
    }else if(arr[mid]>key){
        return binarysearch(arr,s,mid-1,key);
    }else{
        binarysearch(arr,mid+1,e,key);
    }}
    else{
        return false;
    }
   
}
int main(){
    int arr[]={1,3,5,6,7,8};
    int n=sizeof(arr)/sizeof(int);
    cout<<binarysearch(arr,0,n-1,7);


    return 0;
}