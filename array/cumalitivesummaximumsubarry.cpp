#include<iostream>
using namespace std;

int main(){
    int arr[1000];
    int n;
    cin>>n;
    int csum[1000];
    cin>>arr[0];
    csum[0]=arr[0];
    for(int i=1;i<n;i++){
        cin>>arr[i];
        csum[i]+=arr[i];
    }
    int maxm=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int current=0;
            current=csum[j]-arr[i-1];
            if(current>maxm){
                maxm=current;
            }
            cout<<maxm;
        }
    }
    return 0;
}