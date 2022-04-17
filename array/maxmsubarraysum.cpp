#include<iostream>
using namespace std;

int main(){
    int arr[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxm=0;
    int curm;
    int left=-1;
    int right=-1;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            curm=0;
            for(int k=i;k<=j;k++){
                curm+=arr[k];
                
                }
            if(curm>maxm){
                left=i;
                right=j;
                maxm=curm;
            }
        }
    }
    cout<<maxm<<endl;
    for(int i=left;i<=right;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}