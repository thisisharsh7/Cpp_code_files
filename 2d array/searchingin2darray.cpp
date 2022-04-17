#include<iostream>
using namespace std;
int staircasesearch(int arr[][100],int m,int n,int key){
    int ec=n-1;
    int sc=0;
    int sr=0;
    int er=m-1;
    while(sr<=er){
    if(arr[sr][ec]==key){
        return key;
    }else if(arr[sr][ec]>key){
        while(sc<ec){
            if(arr[sr][sc]==key){
                return key;
            }
            sc++;

    }
        }else{
            sr++;
        }
    }
    return 0;
}

int main(){
    int arr[100][100]={0};
    int m,n,key;
    cin>>m>>n>>key;
    int val=1;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=val;
            val+=1;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //linear search of O(n^2);
    //binary search of O(n)*logn;
    //staircase search of O(n);
    int index=staircasesearch(arr,m,n,key);
    if(index){
        cout<<"Element is present.";
    }else{
        cout<<"Element is not present.";
    }

    

    return 0;
}