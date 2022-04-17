#include<iostream>
using namespace std;
void findingsumpointer(int arr[],int n,int sum){
    int e;
    for(int i=0;i<n;i++){
        e=n-1;
        int s=i+1;
        while(s<=e){
            int compare=arr[i]+arr[s]+arr[e];
            if(compare==sum){
                cout<<"("<<arr[i]<<","<<arr[s]<<","<<arr[e]<<")"<<endl;
                e--;
                s++;
            }
            else if(compare>sum){
                e--;
            }
            else{
                s++;
            }
        }
    }
    return;
}

int main(){
    int arr[1000]={0};
    int n,sum;
    cin>>n>>sum;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    findingsumpointer(arr,n,sum);


    return 0;
}