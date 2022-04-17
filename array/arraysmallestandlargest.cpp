#include<iostream>
using namespace std;

int main(){
    int n;
    int arr[1000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    int min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"maximum in array "<<max<<endl;
    cout<<"minimum in array "<<min<<endl;


    return 0;
}