#include<iostream>
using namespace std;


int main(){
    int arr[100][100]={0};
    int row,col;
    cin>>row>>col;
    int val=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            arr[i][j]=val;
            val+=1;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<col;i++){
        if(i%2==0){
            for(int j=0;j<row;j++){
                cout<<arr[j][i]<<" ";
            }
        }
        else{
            for(int j=row-1;j>=0;j--){
                cout<<arr[j][i]<<" ";
            }
        }
    }
    



    return 0;
}