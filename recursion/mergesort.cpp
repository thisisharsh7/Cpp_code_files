#include<iostream>
using namespace std;
void merge(int *arr,int s,int e){
    int mid=(s+e)/2;
    int i=s;
    int j=mid+1;
    int k=s;
    int temp[1000]={0};
    while(i<=mid && j<=e){
        if(arr[i]<arr[j]){
            temp[k++]=arr[i++];
        }else{
            temp[k++]=arr[j++];
        }
    }
    while(j<=e){
        temp[k++]=arr[j++];
    }
    while(i<=mid){
        temp[k++]=arr[i++];
    }
    for(int i=s;i<=e;i++){
        arr[i]=temp[i];
    }
}
void mergesort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int mid=(s+e)/2;
    
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
}


int main(){
    int arr[]={3,6,5,2,1,0};
    int n=sizeof(arr)/sizeof(int);
    mergesort(arr,0,n-1);
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}