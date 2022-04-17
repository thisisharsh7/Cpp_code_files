#include<iostream>
#include<algorithm>
using namespace std;
//defining a compare function
bool compare(int a,int b){
    return a>b;
}

int main(){
    int arr[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n,compare);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }


    return 0;
}