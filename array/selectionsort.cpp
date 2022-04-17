#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
    for(int i=0;i<n;i++){
          int min_index=i;
          for(int j=i;j<n;j++){
              if(arr[j]<arr[min_index]){
              min_index=j;
              }
          }
          swap(arr[i],arr[min_index]);
    }
}

int main(){
    int n;
    int arr[1000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }


    return 0;
}