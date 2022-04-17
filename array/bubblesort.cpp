#include<iostream>
using namespace std;
//bringing a compare function;
bool compare(int a, int b){
    return a>b;
}
void bubblesort(int arr[],int n,bool (&cmp)(int a,int b)){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(cmp(arr[j],arr[j+1])){
                swap(arr[j],arr[j+1]);
            }
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
    bubblesort(arr,n,compare);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}