#include<iostream>
using namespace std;
void spiralprint(int a[][100],int m,int n){
    int startrow=0;
    int startcol=0;
    int endrow=m-1;
    int endcol=n-1;
    while(startrow<=endrow and startcol<=endcol){
        for(int i=startcol;i<=endcol;i++){
            cout<<a[startrow][i]<<" ";
        }
        startrow++;
        for(int i=startrow;i<=endrow;i++){
            cout<<a[i][endcol]<<" ";
        }
        endcol--;
        if(endrow>startrow){
        for(int i=endcol;i>=startcol;i--){
            cout<<a[endrow][i]<<" ";
        }
        endrow--;
        }
        if(endcol>startcol){
        for(int i=endrow;i>=startrow;i--){
            cout<<a[i][startcol]<<" ";
        }
        startcol++;
        }
    }
}


int main(){
    int arr[100][100]={0};
    int m,n;
    cin>>n>>m;
    int val=1;
    for(int row=0;row<n;row++){
        for(int col=0;col<m;col++){
            arr[row][col]=val;
            val+=1;
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    spiralprint(arr,n,m);

    return 0;
}