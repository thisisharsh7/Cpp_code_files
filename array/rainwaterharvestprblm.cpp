#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[]={3, 0, 0, 2, 0, 4};
    int n=sizeof(arr)/sizeof(int);
    int left;
    int right;
    int waterharvest=0;
    for(int i=1;i<n-1;i++){
        left=arr[i];
        for(int j=0;j<i;j++){
           left=max(left,arr[j]);
        }
        right=arr[i];
        for(int j=i+1;j<n;j++){
            right=max(right,arr[j]);
        }
        waterharvest=waterharvest+min(left,right)-arr[i];
    }
    cout<<waterharvest<<endl;
    

    return 0;
}