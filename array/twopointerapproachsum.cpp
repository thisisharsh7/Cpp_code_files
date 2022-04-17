#include<iostream>
using namespace std;
void sumfind(int arr[],int n,int sum){
    int e=n-1;
    int s=0;
        int k;
    while(e>=s){
        k=arr[e]+arr[s];
        if(k==sum){
            cout<<arr[e]<<","<<arr[s]<<endl;
            s++;
            e--;
        }else if(k<sum){
            s++;
        }else{
            e--;
        }
    }
}

int main(){
    int arr[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"sum"<<endl;
    int sum;
    cin>>sum;
    sumfind(arr,n,sum);

    return 0;
}