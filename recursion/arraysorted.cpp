#include<iostream>
using namespace std;
bool arrsorted(int arr[],int n){
    if(n==0 or n==1){
        return true;
    }
    if(arr[0]<arr[1] and arrsorted(arr+1,n-1)){
        return true;
    }
    return false;

}
int main(){
    int arr[4]={3,5,6,7};
    int n=4;
    cout<<arrsorted(arr,n);
    return 0;
}