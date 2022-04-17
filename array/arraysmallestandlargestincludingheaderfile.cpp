#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest=INT_MIN;
    int smallest=INT_MAX;
    for(int i=0;i<n;i++){
        largest=max(largest,arr[i]);
        smallest=min(smallest,arr[i]);
    }
    cout<<"maximum in array "<<largest<<endl;
    cout<<"minimum in aray "<<smallest<<endl;



    return 0;
}