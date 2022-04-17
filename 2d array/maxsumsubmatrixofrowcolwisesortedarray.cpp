#include<iostream>
#include<climits>
using namespace std;
int maxsum(int **arr,int m,int n){
    //colwise addition
    for(int i=m-1;i>=0;i--){
        for(int j=n-2;j>=0;j--){
            arr[i][j]+=arr[i][j+1];
        }
    }
    //rowwise addition
    for(int i=n-1;i>=0;i--){
        for(int j=n-2;j>=0;j--){
            arr[j][i]+=arr[j+1][i];
        }
    }
    int result=INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            result=max(result,arr[i][j]);
        }
    }
    return result;
}

int main(){
    int n,m;
    cin>>m>>n;
    int **arr=new int*[m];
    for(int i=0;i<m;i++){
        arr[i]=new int[n];
    }
    int k=1;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=k;
            k+=1;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<maxsum(arr,m,n);
    return 0;
}