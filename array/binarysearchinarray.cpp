#include<iostream>
using namespace std;
//araray must be sorted for binary search to work correctly
int binarysearch(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]>key){
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
    return -1;
}

int main(){
    int arr[1000];
    int n,key;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>key;
    int index=binarysearch(arr,n,key);
    cout<<index;



    return 0;
}