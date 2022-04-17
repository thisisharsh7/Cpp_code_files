#include<iostream>
using namespace std;

int main(){
    int n,key;
    int*arr;//a dynamic array so that length can vary
    //taking length of array as input
    cin>>n;
    arr=new int[n];//defining an array of input length
    //taking array as input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //taking an input of key user want to search in array
    cin>>key;
    //searching this key in array
    //linear search
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==key){
            cout<<key<<" is present at "<<i<<" index";
            break;
        }
    }
    if(i==n){
        cout<<key<<" is not present at any index";
    }


    return 0;
}