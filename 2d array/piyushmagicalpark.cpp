#include<iostream>
using namespace std;

int main(){
    int m,n,k,s;
    char arr[100][100]={0};
    cin>>m>>n>>k>>s;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }


    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            // cout<<arr[i][j]<<" ";
            if(s<k){
                break;
            }
            if(arr[i][j]=='.'){
                s-=2;
            }
            else if(arr[i][j]=='*'){
                s+=5;
            }
            else{
                break;
            }
            if(j!=n-1){
                s--;
            }
        }
        
    }
    if(s>=k){
        cout<<"yes "<<s;
    }else{
        cout<<"no";
    }

    return 0;
}