#include<iostream>
using namespace std;
// void rotate(int arr[][100],int m){
//     for(int j=m-1;j>=0;j--){
//         for(int i=0;i<m;i++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// using stl we can reverse 
// an 2d array like reverse(arr[i],arr[i]+n);
void rotate(int arr[][100],int m){
        int sr=0;
        int er=m-1;
        
        for(int i=sr;i<=er;i++){
            int sc=0;
            int ec=m-1;
            while(sc<ec){
            swap(arr[i][sc],arr[i][ec]);
            sc++;
            ec--;
            }
          
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                if(i<j){
                swap(arr[i][j],arr[j][i]);
                }
            }
        }

}
void print(int arr[][100],int m){
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[100][100]={0};
    int m;()
    cin>>m;
    int val=1;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            arr[i][j]=val;
            val+=1;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    rotate(arr,m);
    print(arr,m);
    return 0;
}