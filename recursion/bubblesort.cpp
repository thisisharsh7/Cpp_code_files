#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n){
    if(n==1){
        return;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubble_sort(arr,n-1);
}
void bubble_sort_recursive(int arr[],int j,int n){
    if(n==1){
        return;
    }
    if(j==n-1){
        return bubble_sort_recursive(arr,0,n-1);
    }
    if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
    }
    bubble_sort_recursive(arr,j+1,n);
    return;
}
int main(){
    int arr[]={1,6,4,2,5};
    int n=sizeof(arr)/sizeof(int);
    bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}